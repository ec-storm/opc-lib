#ifndef DLLMAIN_H
#define DLLMAIN_H

#include <jni.h>

#define JNI_FUNCTION(name, return) JNIEXPORT return JNICALL Java_com_storm_lib_OPCDaManager_##name
#define CLASS_NAME "com/storm/lib/OPCDaManager"

#ifdef __cplusplus
extern "C"
{
#endif

	JNI_FUNCTION(create, jlong)(JNIEnv* env, jobject jobj);
	JNI_FUNCTION(destroy, void)(JNIEnv* env, jobject jobj, jlong client);
	JNI_FUNCTION(connect, void)(JNIEnv* env, jobject jobj, jlong client, jstring host, jstring progId);
	JNI_FUNCTION(disconnect, void)(JNIEnv* env, jobject jobj, jlong client);
	JNI_FUNCTION(addTag, jint)(JNIEnv* env, jobject jobj, jlong client, jstring tagName);
	JNI_FUNCTION(removeTag, void)(JNIEnv* env, jobject jobj, jlong client, jint tagHandle);
	JNI_FUNCTION(getOpcServers, jobjectArray)(JNIEnv* env, jobject jobj, jlong client, jstring host);
	JNI_FUNCTION(getOpcServerTags, jobjectArray)(JNIEnv* env, jobject jobj, jlong client);
	JNI_FUNCTION(getOpcServerTagBranches, jobjectArray)(JNIEnv* env, jobject jobj, jlong client, jstring input);
	JNI_FUNCTION(getOpcServerTagLeafs, jobjectArray)(JNIEnv* env, jobject jobj, jlong client, jstring input);
	JNI_FUNCTION(readTag, jobject)(JNIEnv* env, jobject jobj, jlong client, jint tagHandle);
	JNI_FUNCTION(writeTag, void)(JNIEnv* env, jobject jobj, jlong client, jint tagHandle, jobject value, jstring type);

#ifdef __cplusplus
}
#endif
#endif
