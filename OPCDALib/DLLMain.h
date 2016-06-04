#ifndef DLLMAIN_H
#define DLLMAIN_H

#include <jni.h>
#include <windows.h>
#include "OPCClient.h"

#define JNI_FUNCTION(name, return) JNIEXPORT return JNICALL Java_com_minhdtb_storm_core_lib_opcda_OPCDaManager_##name
#define CLASS_NAME "com/minhdtb/storm/core/lib/opcda/OPCDaManager"

#ifdef __cplusplus
extern "C" {
#endif

	JNI_FUNCTION(create, jlong)(JNIEnv *env, jobject jobj);
	JNI_FUNCTION(destroy, void)(JNIEnv *env, jobject jobj, jlong client);
	JNI_FUNCTION(connect, void)(JNIEnv *env, jobject jobj, jlong client, jstring host, jstring progId);
	JNI_FUNCTION(addTag, jint)(JNIEnv *env, jobject jobj, jlong client, jstring tagName);
	JNI_FUNCTION(removeTag, void)(JNIEnv *env, jobject jobj, jlong client, jint tagHandle);
	JNI_FUNCTION(getOpcServers, jobjectArray)(JNIEnv *env, jobject jobj, jlong client, jstring host);
	JNI_FUNCTION(getOpcServerTags, jobjectArray)(JNIEnv *env, jobject jobj, jlong client);
	JNI_FUNCTION(readTag, jobject)(JNIEnv *env, jobject jobj, jlong client, jint tagHandle);
	JNI_FUNCTION(writeTag, void)(JNIEnv *env, jobject jobj, jlong client, jint tagHandle, jobject value, jstring type);

#ifdef __cplusplus
}
#endif
#endif
