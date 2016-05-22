#ifndef DLLMAIN_H
#define DLLMAIN_H

#include <jni.h>
#include <windows.h>
#include "OPCClient.h"

#ifdef __cplusplus
extern "C" {
#endif

	JNIEXPORT void JNICALL Java_com_minhdtb_storm_core_lib_opcda_OPCDAManager_initialize(JNIEnv *env, jobject jobj);
	JNIEXPORT void JNICALL Java_com_minhdtb_storm_core_lib_opcda_OPCDAManager_connect(JNIEnv *env, jobject jobj, jstring host, jstring progId);
	JNIEXPORT jobjectArray JNICALL Java_com_minhdtb_storm_core_lib_opcda_OPCDAManager_getOpcServers(JNIEnv *env, jobject jobj, jstring host);
	JNIEXPORT jobjectArray JNICALL Java_com_minhdtb_storm_core_lib_opcda_OPCDAManager_getOpcServerTags(JNIEnv *env, jobject jobj);

#ifdef __cplusplus
}
#endif
#endif
