#include "DLLMain.h"

JavaVM* gJvm = nullptr;

JNIEnv* getEnv() {
	JNIEnv *env;

	int status = gJvm->GetEnv((void**)&env, JNI_VERSION_1_8);
	if (status < 0) {
		status = gJvm->AttachCurrentThread((void**)&env, NULL);
		if (status < 0) {
			return nullptr;
		}
	}

	return env;
}

JNIEXPORT jint JNICALL JNI_OnLoad(JavaVM *pjvm, void *reserved) {
	gJvm = pjvm;
	return JNI_VERSION_1_8;
}

JNI_FUNCTION(create, jlong)(JNIEnv *env, jobject jobj) {

	OPCClient* client = new OPCClient();
	
	JNIEnv* javaEnv = getEnv();		
	jclass classOPC = javaEnv->FindClass(CLASS_NAME);
	jmethodID callbackMethodID = javaEnv->GetStaticMethodID(classOPC, "onChangeCallback", "(JLjava/lang/String;Ljava/lang/Object;JI)V");

	client->OnChange([javaEnv, classOPC, callbackMethodID](void* client, LPCTSTR tagName, VARIANT value, FILETIME time, DWORD quality) {
		USES_CONVERSION;
								
		jstring name = javaEnv->NewStringUTF(tagName);

		switch (value.vt)
		{
		case VT_I1:
		case VT_I2:
		case VT_I4:
		case VT_I8: {
			jclass clazz = javaEnv->FindClass("java/lang/Integer");
			jmethodID constructor = javaEnv->GetMethodID(clazz, "<init>", "(I)V");
			javaEnv->CallVoidMethod(classOPC, callbackMethodID, (jlong)client, name, javaEnv->NewObject(clazz, constructor, (jint)value.intVal), time, quality);
			break;
		}
		case VT_BOOL: {
			jclass clazz = javaEnv->FindClass("java/lang/Boolean");
			jmethodID constructor = javaEnv->GetMethodID(clazz, "<init>", "(I)V");			
			javaEnv->CallVoidMethod(classOPC, callbackMethodID, (jlong)client, name, javaEnv->NewObject(clazz, constructor, value.boolVal), time, quality);
			break;
		}			
		case VT_BSTR: {
			jstring tempValue = javaEnv->NewStringUTF(OLE2A(value.bstrVal));
			javaEnv->CallVoidMethod(classOPC, callbackMethodID, (jlong)client, name, tempValue, time, quality);
			break;
		}
		case VT_R4:
		case VT_R8: {
			jclass clazz = javaEnv->FindClass("java/lang/Float");
			jmethodID constructor = javaEnv->GetMethodID(clazz, "<init>", "(F)V");			
			javaEnv->CallVoidMethod(classOPC, callbackMethodID, (jlong)client, name, javaEnv->NewObject(clazz, constructor, value.fltVal), time, quality);
			break;
		}			
		default:
			break;
		}		
	});

	return (jlong)client;
}

JNI_FUNCTION(destroy, void)(JNIEnv *env, jobject jobj, jlong client) {
	OPCClient* m_client = (OPCClient*)client;
	m_client->OnChange(NULL);

	delete m_client;
}

JNI_FUNCTION(connect, void)(JNIEnv *env, jobject jobj, jlong client, jstring host, jstring progId) {

	OPCClient* m_client = (OPCClient*)client;
	if (m_client == NULL)
		return;

	m_client->Connect((char*)env->GetStringUTFChars(progId, 0), (char*)env->GetStringUTFChars(host, 0));
}

JNI_FUNCTION(disconnect, void)(JNIEnv *env, jobject jobj, jlong client) {
	OPCClient* m_client = (OPCClient*)client;
	if (m_client == NULL)
		return;

	m_client->Disconnect();
}

JNI_FUNCTION(getOpcServers, jobjectArray)(JNIEnv *env, jobject jobj, jlong client, jstring host) {

	OPCClient* m_client = (OPCClient*)client;
	if (m_client == NULL)
		return NULL;

	const char * chost = env->GetStringUTFChars(host, NULL);

	std::vector<std::string> stringList = m_client->GetOPCServers((char*)env->GetStringUTFChars(host, 0));

	jobjectArray ret = (jobjectArray)env->NewObjectArray(stringList.size(),
		env->FindClass("java/lang/String"), env->NewStringUTF(""));

	for (unsigned int i = 0; i < stringList.size(); i++) {
		env->SetObjectArrayElement(ret, i, env->NewStringUTF(stringList.at(i).c_str()));
	}

	return ret;
}

JNI_FUNCTION(getOpcServerTags, jobjectArray)(JNIEnv *env, jobject jobj, jlong client) {

	OPCClient* m_client = (OPCClient*)client;
	if (m_client == NULL)
		return NULL;

	std::vector<std::string> stringList = m_client->GetServerTags();

	jobjectArray ret = (jobjectArray)env->NewObjectArray(stringList.size(),
		env->FindClass("java/lang/String"), env->NewStringUTF(""));

	for (unsigned int i = 0; i < stringList.size(); i++) {
		env->SetObjectArrayElement(ret, i, env->NewStringUTF(stringList.at(i).c_str()));
	}

	return ret;
}

JNI_FUNCTION(getOpcServerTagBranches, jobjectArray)(JNIEnv *env, jobject jobj, jlong client, jstring input) {
	OPCClient* m_client = (OPCClient*)client;
	if (m_client == NULL)
		return NULL;

	std::vector<std::string> stringList = m_client->GetServerTagBranches((char*)env->GetStringUTFChars(input, 0));

	jobjectArray ret = (jobjectArray)env->NewObjectArray(stringList.size(),
		env->FindClass("java/lang/String"), env->NewStringUTF(""));

	for (unsigned int i = 0; i < stringList.size(); i++) {
		env->SetObjectArrayElement(ret, i, env->NewStringUTF(stringList.at(i).c_str()));
	}

	return ret;
}

JNI_FUNCTION(getOpcServerTagLeafs, jobjectArray)(JNIEnv *env, jobject jobj, jlong client, jstring input) {
	OPCClient* m_client = (OPCClient*)client;
	if (m_client == NULL)
		return NULL;

	std::vector<std::string> stringList = m_client->GetServerTagLeafs((char*)env->GetStringUTFChars(input, 0));

	jobjectArray ret = (jobjectArray)env->NewObjectArray(stringList.size(),
		env->FindClass("java/lang/String"), env->NewStringUTF(""));

	for (unsigned int i = 0; i < stringList.size(); i++) {
		env->SetObjectArrayElement(ret, i, env->NewStringUTF(stringList.at(i).c_str()));
	}

	return ret;
}

JNI_FUNCTION(addTag, jint)(JNIEnv *env, jobject jobj, jlong client, jstring tagName) {

	OPCClient* m_client = (OPCClient*)client;
	if (m_client == NULL)
		return NULL;

	return m_client->AddTag((char*)env->GetStringUTFChars(tagName, 0), VT_EMPTY);
};

JNI_FUNCTION(removeTag, void)(JNIEnv *env, jobject jobj, jlong client, jint tagHandle) {

	OPCClient* m_client = (OPCClient*)client;
	if (m_client == NULL)
		return;

	m_client->RemoveTag(tagHandle);
}

JNI_FUNCTION(readTag, jobject)(JNIEnv *env, jobject jobj, jlong client, jint tagHandle) {
	USES_CONVERSION;

	OPCClient* m_client = (OPCClient*)client;
	if (m_client == NULL)
		return NULL;

	FILETIME time;

	VARIANT value;
	VariantInit(&value);

	WORD quality;
	m_client->ReadValue(tagHandle, time, value, quality);
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

JNI_FUNCTION(writeTag, void)(JNIEnv *env, jobject jobj, jlong client, jint tagHandle, jobject value, jstring type) {

	OPCClient* m_client = (OPCClient*)client;
	if (m_client == NULL)
		return;

	if (m_client == NULL)
		return;

	FILETIME ft;
	SYSTEMTIME st;
	VARIANT currentValue;
	VariantClear(&currentValue);

	char* currentType = (char*)env->GetStringUTFChars(type, 0);
	jclass clazz = env->FindClass(CLASS_NAME);

	if (strcmp(currentType, "java.lang.String") == 0) {
		jmethodID mid = env->GetStaticMethodID(clazz, "objectToString", "(Ljava/lang/Object;)Ljava/lang/String;");
		jstring svalue = (jstring)env->CallStaticObjectMethod(clazz, mid, value);
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

	m_client->WriteValue(tagHandle, ft, currentValue, 100);
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