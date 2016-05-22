#ifndef DLLMAIN_H
#define DLLMAIN_H

#include <jni.h>
#include <windows.h>
#include "OPCClient.h"

#define JNI_FUNCTION(name, ret) JNIEXPORT ret JNICALL Java_com_minhdtb_storm_core_lib_opcda_OPCDAManager_##name

#ifdef __cplusplus
extern "C" {
#endif

	JNI_FUNCTION(initialize, void)(JNIEnv *env, jobject jobj);
	JNI_FUNCTION(uninitialize, void)(JNIEnv *env, jobject jobj);
	JNI_FUNCTION(connect, void)(JNIEnv *env, jobject jobj, jstring host, jstring progId);
	JNI_FUNCTION(getOpcServers, jobjectArray)(JNIEnv *env, jobject jobj, jstring host);
	JNI_FUNCTION(getOpcServerTags, jobjectArray)(JNIEnv *env, jobject jobj);

#ifdef __cplusplus
}
#endif
#endif
