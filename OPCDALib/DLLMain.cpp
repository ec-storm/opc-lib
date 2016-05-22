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

		jclass cls = env->FindClass(CLASS_NAME);
		jmethodID mid = env->GetStaticMethodID(cls, "onChangeCallback", "(Ljava/lang/String;IJI)V");
		jstring name = env->NewStringUTF(tagName);

		switch (value.vt)
		{
		case VT_I1:
		case VT_I2:
		case VT_I4:
		case VT_I8:
			env->CallVoidMethod(cls, mid, name, value.intVal, time, quality);
			break;
		case VT_BOOL:
			env->CallVoidMethod(cls, mid, name, value.boolVal, time, quality);
			break;
		case VT_BSTR: {
			jstring tmpValue = env->NewStringUTF(OLE2A(value.bstrVal));
			env->CallVoidMethod(cls, mid, name, tmpValue, time, quality);
			break;
		}			
		case VT_DECIMAL:
			env->CallVoidMethod(cls, mid, name, value.decVal, time, quality);
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

	std::vector<std::string> stringList = g_client->GetServerTags();

	jobjectArray ret = (jobjectArray)env->NewObjectArray(stringList.size(),
		env->FindClass("java/lang/String"), env->NewStringUTF(""));

	for (unsigned int i = 0; i < stringList.size(); i++) {
		env->SetObjectArrayElement(ret, i, env->NewStringUTF(stringList.at(i).c_str()));
	}

	return ret;
}

JNI_FUNCTION(addTag, jint)(JNIEnv *env, jobject jobj, jstring tagName) {
	return g_client->AddTag((char*)env->GetStringUTFChars(tagName, 0), VT_EMPTY);
};

JNI_FUNCTION(removeTag, void)(JNIEnv *env, jobject jobj, jint tagHandle) {
	g_client->RemoveTag(tagHandle);
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