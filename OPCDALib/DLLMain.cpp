#include "DLLMain.h"

OPCClient* g_client;

#define CLASS_NAME "com/minhdtb/storm/core/lib/opcda/OPCDAManager"

JNI_FUNCTION(initialize, void)(JNIEnv *env, jobject jobj) {

	g_client = new OPCClient();
	g_client->OnChange([env](LPCTSTR tagName, VARIANT value, FILETIME time, DWORD quality) {
		USES_CONVERSION;

		JavaVM* vm;
		env->GetJavaVM(&vm);
		vm->AttachCurrentThread((void**)&env, NULL);

		jclass clazz = env->FindClass(CLASS_NAME);
		jmethodID mid = env->GetStaticMethodID(clazz, "onChangeCallback", "(Ljava/lang/String;IJI)V");
		jstring name = env->NewStringUTF(tagName);

		switch (value.vt)
		{
		case VT_I1:
		case VT_I2:
		case VT_I4:
		case VT_I8:
			env->CallVoidMethod(clazz, mid, name, value.intVal, time, quality);
			break;
		case VT_BOOL:
			env->CallVoidMethod(clazz, mid, name, value.boolVal, time, quality);
			break;
		case VT_BSTR: {
			jstring tempValue = env->NewStringUTF(OLE2A(value.bstrVal));
			env->CallVoidMethod(clazz, mid, name, tempValue, time, quality);
			break;
		}
		case VT_R4:
		case VT_R8:
			env->CallVoidMethod(clazz, mid, name, value.fltVal, time, quality);
			break;
		default:
			break;
		}
	});
}

JNI_FUNCTION(uninitialize, void)(JNIEnv *env, jobject jobj) {
	delete g_client;
}

JNI_FUNCTION(connect, void)(JNIEnv *env, jobject jobj, jstring host, jstring progId) {
	if (g_client == NULL)
		return;

	g_client->Connect((char*)env->GetStringUTFChars(host, 0), (char*)env->GetStringUTFChars(progId, 0));
}

JNI_FUNCTION(getOpcServers, jobjectArray)(JNIEnv *env, jobject jobj, jstring host) {
	if (g_client == NULL)
		return NULL;

	const char * chost = env->GetStringUTFChars(host, NULL);

	std::vector<std::string> stringList = g_client->GetOPCServers((char*)env->GetStringUTFChars(host, 0));

	jobjectArray ret = (jobjectArray)env->NewObjectArray(stringList.size(),
		env->FindClass("java/lang/String"), env->NewStringUTF(""));

	for (unsigned int i = 0; i < stringList.size(); i++) {
		env->SetObjectArrayElement(ret, i, env->NewStringUTF(stringList.at(i).c_str()));
	}

	return ret;
}

JNI_FUNCTION(getOpcServerTags, jobjectArray)(JNIEnv *env, jobject jobj) {
	if (g_client == NULL)
		return NULL;

	std::vector<std::string> stringList = g_client->GetServerTags();

	jobjectArray ret = (jobjectArray)env->NewObjectArray(stringList.size(),
		env->FindClass("java/lang/String"), env->NewStringUTF(""));

	for (unsigned int i = 0; i < stringList.size(); i++) {
		env->SetObjectArrayElement(ret, i, env->NewStringUTF(stringList.at(i).c_str()));
	}

	return ret;
}

JNI_FUNCTION(addTag, jint)(JNIEnv *env, jobject jobj, jstring tagName) {
	if (g_client == NULL)
		return NULL;

	return g_client->AddTag((char*)env->GetStringUTFChars(tagName, 0), VT_EMPTY);
};

JNI_FUNCTION(removeTag, void)(JNIEnv *env, jobject jobj, jint tagHandle) {
	if (g_client == NULL)
		return;

	g_client->RemoveTag(tagHandle);
}

JNI_FUNCTION(readTag, jobject)(JNIEnv *env, jobject jobj, jint tagHandle) {
	USES_CONVERSION;

	if (g_client == NULL)
		return NULL;

	JavaVM* vm;
	env->GetJavaVM(&vm);
	vm->AttachCurrentThread((void**)&env, NULL);

	FILETIME time;

	VARIANT value;
	VariantInit(&value);

	WORD quality;
	g_client->ReadValue(tagHandle, time, value, quality);
	switch (value.vt)
	{
	case VT_I1:
	case VT_I2:
	case VT_I4:
	case VT_I8: {
		jclass clazz = env->FindClass("java/lang/Integer");
		jmethodID constructor = env->GetMethodID(clazz, "<init>", "(I)V");
		return env->NewObject(clazz, constructor, (jint)value.intVal);
	}
	case VT_BOOL: {
		jclass clazz = env->FindClass("java/lang/Boolean");
		jmethodID constructor = env->GetMethodID(clazz, "<init>", "(I)V");
		return env->NewObject(clazz, constructor, value.boolVal);
	}
	case VT_BSTR: {
		return env->NewString((jchar*)value.bstrVal, SysStringLen(value.bstrVal));
	}
	case VT_R4:
	case VT_R8: {
		jclass clazz = env->FindClass("java/lang/Float");
		jmethodID constructor = env->GetMethodID(clazz, "<init>", "(F)V");
		return env->NewObject(clazz, constructor, value.fltVal);
	}
	default:
		return NULL;
	}
}

JNI_FUNCTION(writeTag, void)(JNIEnv *env, jobject jobj, jint tagHandle, jobject value, jstring type) {
	if (g_client == NULL)
		return;

	FILETIME ft;
	SYSTEMTIME st;
	VARIANT currentValue;
	VariantClear(&currentValue);

	char* currentType = (char*)env->GetStringUTFChars(type, 0);
	jclass clazz = env->FindClass(CLASS_NAME);

	if (strcmp(currentType, "java.lang.String") == 0) {		
		jmethodID mid = env->GetStaticMethodID(clazz, "objectToString", "(Ljava/lang/Object;)Ljava/lang/String;");
		jstring svalue = (jstring)env->CallObjectMethod(jobj, mid, value);
		const jchar *cStr = env->GetStringChars(svalue, NULL);
		const jsize numChars = env->GetStringLength(svalue);

		CComBSTR bs(numChars, (LPCOLESTR)cStr);
		V_VT(&currentValue) = VT_BSTR;
		V_BSTR(&currentValue) = bs.Copy();

		env->ReleaseStringChars(svalue, cStr);
	}
	else if (strcmp(currentType, "java.lang.Integer") == 0) {
		jmethodID mid = env->GetStaticMethodID(clazz, "objectToInt", "(Ljava/lang/Object;)I");
		V_VT(&currentValue) = VT_I4;
		V_I4(&currentValue) = (int)env->CallStaticIntMethod(clazz, mid, value);
		
	}
	else if (strcmp(currentType, "java.lang.Double") == 0) {
		jmethodID mid = env->GetStaticMethodID(clazz, "objectToDouble", "(Ljava/lang/Object;)D");
		V_VT(&currentValue) = VT_R4;
		V_R4(&currentValue) = (float)env->CallStaticDoubleMethod(clazz, mid, value);
	}
	else if (strcmp(currentType, "java.lang.Boolean") == 0) {
		jmethodID mid = env->GetStaticMethodID(clazz, "objectToBoolean", "(Ljava/lang/Object;)Z");
		V_VT(&currentValue) = VT_BOOL;
		V_BOOL(&currentValue) = env->CallStaticBooleanMethod(clazz, mid, value);
	}

	GetSystemTime(&st);
	SystemTimeToFileTime(&st, &ft);

	g_client->WriteValue(tagHandle, ft, currentValue, 100);
}

BOOL APIENTRY DllMain(HMODULE hModule,
	DWORD  ul_reason_for_call,
	LPVOID lpReserved
)
{
	switch (ul_reason_for_call)
	{
	case DLL_PROCESS_ATTACH:
	{
		CoInitializeEx(NULL, COINIT_MULTITHREADED);
		break;
	}
	case DLL_THREAD_ATTACH:
	case DLL_THREAD_DETACH:
	case DLL_PROCESS_DETACH:
		break;
	}

	return TRUE;
}