#ifndef DLLMAIN_H
#define DLLMAIN_H

#include <jni.h>
#include <windows.h>
#include "OPCLib.h"

#ifdef __cplusplus
extern "C" {
#endif

	JNIEXPORT jobjectArray JNICALL Java_com_minhdtb_storm_core_lib_opcda_OPCDAManager_getOpcServers(JNIEnv *env, jobject jobj, jstring host);
	JNIEXPORT jobjectArray JNICALL Java_com_minhdtb_storm_core_lib_opcda_OPCDAManager_getOpcServerTags(JNIEnv *env, jobject jobj, jstring host, jstring progId);

#ifdef __cplusplus
}
#endif
#endif
