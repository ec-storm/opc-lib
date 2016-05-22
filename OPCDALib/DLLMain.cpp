#include "DLLMain.h"

OPCClient* g_client;

JNIEXPORT void JNICALL Java_com_minhdtb_storm_core_lib_opcda_OPCDAManager_initialize(JNIEnv *env, jobject jobj) {
	g_client = new OPCClient();
}

JNIEXPORT void JNICALL Java_com_minhdtb_storm_core_lib_opcda_OPCDAManager_connect(JNIEnv *env, jobject jobj, jstring host, jstring progId) {
	if (g_client == NULL)
		return;

	g_client->Connect((char*)env->GetStringUTFChars(host, 0), (char*)env->GetStringUTFChars(progId, 0));
}

JNIEXPORT jobjectArray JNICALL Java_com_minhdtb_storm_core_lib_opcda_OPCDAManager_getOpcServers(JNIEnv *env, jobject jobj, jstring host) {
	const char * chost = env->GetStringUTFChars(host, NULL);

	std::vector<std::string> stringList = g_client->GetOPCServers((char*)env->GetStringUTFChars(host, 0));

	jobjectArray ret = (jobjectArray)env->NewObjectArray(stringList.size(),
		env->FindClass("java/lang/String"), env->NewStringUTF(""));

	for (int i = 0; i < stringList.size(); i++) {
		env->SetObjectArrayElement(ret, i, env->NewStringUTF(stringList.at(i).c_str()));
	}

	return ret;
}

JNIEXPORT jobjectArray JNICALL Java_com_minhdtb_storm_core_lib_opcda_OPCDAManager_getOpcServerTags(JNIEnv *env, jobject jobj) {	

	std::vector<std::string> stringList = g_client->GetServerTags();

	jobjectArray ret = (jobjectArray)env->NewObjectArray(stringList.size(),
		env->FindClass("java/lang/String"), env->NewStringUTF(""));

	for (int i = 0; i < stringList.size(); i++) {
		env->SetObjectArrayElement(ret, i, env->NewStringUTF(stringList.at(i).c_str()));
	}

	return ret;
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
	{
		CoUninitialize();
		break;
	}
	}
	return TRUE;
}