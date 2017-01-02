#include "DLLMain.h"
#include "OPCClient.h"

JavaVM* gJvm = nullptr;

JNIEnv* getEnv()
{
	JNIEnv* env;

	int status = gJvm->GetEnv(reinterpret_cast<void**>(&env), JNI_VERSION_1_8);
	if (status < 0)
	{
		status = gJvm->AttachCurrentThread(reinterpret_cast<void**>(&env), nullptr);
		if (status < 0)
		{
			return nullptr;
		}
	}

	return env;
}

JNIEXPORT jint JNICALL JNI_OnLoad(JavaVM* pjvm, void* reserved)
{
	gJvm = pjvm;
	return JNI_VERSION_1_8;
}

JNI_FUNCTION(create, jlong)(JNIEnv* env, jobject jobj)
{
	OPCClient* client = new OPCClient();

	JNIEnv* javaEnv = getEnv();
	jclass classOPC = javaEnv->FindClass(CLASS_NAME);
	jmethodID callbackMethodID = javaEnv->GetStaticMethodID(classOPC, "onChangeCallback", "(JLjava/lang/String;Ljava/lang/Object;JI)V");

	client->OnChange([javaEnv, classOPC, callbackMethodID](void* client, LPCTSTR tagName, VARIANT value, FILETIME time, DWORD quality)
	{
		USES_CONVERSION;

		jstring name = javaEnv->NewStringUTF(tagName);

		switch (value.vt)
		{
		case VT_I1:
		case VT_I2:
		case VT_I4:
		case VT_I8:
		{
			jclass clazz = javaEnv->FindClass("java/lang/Integer");
			jmethodID constructor = javaEnv->GetMethodID(clazz, "<init>", "(I)V");
			javaEnv->CallVoidMethod(classOPC, callbackMethodID, reinterpret_cast<jlong>(client), name, javaEnv->NewObject(clazz, constructor, static_cast<jint>(value.intVal)), time, quality);
			break;
		}
		case VT_BOOL:
		{
			jclass clazz = javaEnv->FindClass("java/lang/Boolean");
			jmethodID constructor = javaEnv->GetMethodID(clazz, "<init>", "(I)V");
			javaEnv->CallVoidMethod(classOPC, callbackMethodID, reinterpret_cast<jlong>(client), name, javaEnv->NewObject(clazz, constructor, value.boolVal), time, quality);
			break;
		}
		case VT_BSTR:
		{
			jstring tempValue = javaEnv->NewStringUTF(OLE2A(value.bstrVal));
			javaEnv->CallVoidMethod(classOPC, callbackMethodID, reinterpret_cast<jlong>(client), name, tempValue, time, quality);
			break;
		}
		case VT_R4:
		case VT_R8:
		{
			jclass clazz = javaEnv->FindClass("java/lang/Double");
			jmethodID constructor = javaEnv->GetMethodID(clazz, "<init>", "(D)V");
			javaEnv->CallVoidMethod(classOPC, callbackMethodID, reinterpret_cast<jlong>(client), name, javaEnv->NewObject(clazz, constructor, value.dblVal), time, quality);
			break;
		}
		default:
			break;
		}
	});

	return reinterpret_cast<jlong>(client);
}

JNI_FUNCTION(destroy, void)(JNIEnv* env, jobject jobj, jlong client)
{
	OPCClient* m_client = reinterpret_cast<OPCClient*>(client);
	m_client->OnChange(NULL);

	delete m_client;
}

JNI_FUNCTION(connect, void)(JNIEnv* env, jobject jobj, jlong client, jstring host, jstring progId)
{
	OPCClient* m_client = reinterpret_cast<OPCClient*>(client);
	if (m_client == nullptr)
		return;

	m_client->Connect(const_cast<char*>(env->GetStringUTFChars(progId, nullptr)), const_cast<char*>(env->GetStringUTFChars(host, nullptr)));
}

JNI_FUNCTION(disconnect, void)(JNIEnv* env, jobject jobj, jlong client)
{
	OPCClient* m_client = reinterpret_cast<OPCClient*>(client);
	if (m_client == nullptr)
		return;

	m_client->Disconnect();
}

JNI_FUNCTION(getOpcServers, jobjectArray)(JNIEnv* env, jobject jobj, jlong client, jstring host)
{
	OPCClient* m_client = reinterpret_cast<OPCClient*>(client);
	if (m_client == nullptr)
		return nullptr;

	std::vector<std::string> stringList = m_client->GetOPCServers(const_cast<char*>(env->GetStringUTFChars(host, nullptr)));

	jobjectArray ret = static_cast<jobjectArray>(env->NewObjectArray(stringList.size(),
		env->FindClass("java/lang/String"), env->NewStringUTF("")));

	for (unsigned int i = 0; i < stringList.size(); i++)
	{
		env->SetObjectArrayElement(ret, i, env->NewStringUTF(stringList.at(i).c_str()));
	}

	return ret;
}

JNI_FUNCTION(getOpcServerTags, jobjectArray)(JNIEnv* env, jobject jobj, jlong client)
{
	OPCClient* m_client = reinterpret_cast<OPCClient*>(client);
	if (m_client == nullptr)
		return nullptr;

	std::vector<std::string> stringList = m_client->GetServerTags();

	jobjectArray ret = static_cast<jobjectArray>(env->NewObjectArray(stringList.size(),
		env->FindClass("java/lang/String"), env->NewStringUTF("")));

	for (unsigned int i = 0; i < stringList.size(); i++)
	{
		env->SetObjectArrayElement(ret, i, env->NewStringUTF(stringList.at(i).c_str()));
	}

	return ret;
}

JNI_FUNCTION(getOpcServerTagBranches, jobjectArray)(JNIEnv* env, jobject jobj, jlong client, jstring input)
{
	OPCClient* m_client = reinterpret_cast<OPCClient*>(client);
	if (m_client == nullptr)
		return nullptr;

	std::vector<std::string> stringList = m_client->GetServerTagBranches(const_cast<char*>(env->GetStringUTFChars(input, nullptr)));

	jobjectArray ret = static_cast<jobjectArray>(env->NewObjectArray(stringList.size(),
		env->FindClass("java/lang/String"), env->NewStringUTF("")));

	for (unsigned int i = 0; i < stringList.size(); i++)
	{
		env->SetObjectArrayElement(ret, i, env->NewStringUTF(stringList.at(i).c_str()));
	}

	return ret;
}

JNI_FUNCTION(getOpcServerTagLeafs, jobjectArray)(JNIEnv* env, jobject jobj, jlong client, jstring input)
{
	OPCClient* m_client = reinterpret_cast<OPCClient*>(client);
	if (m_client == nullptr)
		return nullptr;

	std::vector<std::string> stringList = m_client->GetServerTagLeafs(const_cast<char*>(env->GetStringUTFChars(input, nullptr)));

	jobjectArray ret = static_cast<jobjectArray>(env->NewObjectArray(stringList.size(),
		env->FindClass("java/lang/String"), env->NewStringUTF("")));

	for (unsigned int i = 0; i < stringList.size(); i++)
	{
		env->SetObjectArrayElement(ret, i, env->NewStringUTF(stringList.at(i).c_str()));
	}

	return ret;
}

JNI_FUNCTION(addTag, jint)(JNIEnv* env, jobject jobj, jlong client, jstring tagName)
{
	OPCClient* m_client = reinterpret_cast<OPCClient*>(client);
	if (m_client == nullptr)
		return 0;

	return m_client->AddTag(const_cast<char*>(env->GetStringUTFChars(tagName, nullptr)), VT_EMPTY);
};

JNI_FUNCTION(removeTag, void)(JNIEnv* env, jobject jobj, jlong client, jint tagHandle)
{
	OPCClient* m_client = reinterpret_cast<OPCClient*>(client);
	if (m_client == nullptr)
		return;

	m_client->RemoveTag(tagHandle);
}

JNI_FUNCTION(readTag, jobject)(JNIEnv* env, jobject jobj, jlong client, jint tagHandle)
{
	USES_CONVERSION;

	OPCClient* m_client = reinterpret_cast<OPCClient*>(client);
	if (m_client == nullptr)
		return nullptr;

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
	case VT_I8:
	{
		jclass clazz = env->FindClass("java/lang/Integer");
		jmethodID constructor = env->GetMethodID(clazz, "<init>", "(I)V");
		return env->NewObject(clazz, constructor, static_cast<jint>(value.intVal));
	}
	case VT_BOOL:
	{
		jclass clazz = env->FindClass("java/lang/Boolean");
		jmethodID constructor = env->GetMethodID(clazz, "<init>", "(I)V");
		return env->NewObject(clazz, constructor, value.boolVal);
	}
	case VT_BSTR:
	{
		return env->NewString(reinterpret_cast<jchar*>(value.bstrVal), SysStringLen(value.bstrVal));
	}
	case VT_R4:
	case VT_R8:
	{
		jclass clazz = env->FindClass("java/lang/Float");
		jmethodID constructor = env->GetMethodID(clazz, "<init>", "(F)V");
		return env->NewObject(clazz, constructor, value.fltVal);
	}
	default:
		return nullptr;
	}
}

JNI_FUNCTION(writeTag, void)(JNIEnv* env, jobject jobj, jlong client, jint tagHandle, jobject value, jstring type)
{
	OPCClient* m_client = reinterpret_cast<OPCClient*>(client);
	if (m_client == nullptr)
		return;

	if (m_client == nullptr)
		return;

	FILETIME ft;
	SYSTEMTIME st;
	VARIANT currentValue;
	VariantClear(&currentValue);

	char* currentType = const_cast<char*>(env->GetStringUTFChars(type, nullptr));
	jclass clazz = env->FindClass(CLASS_NAME);

	if (strcmp(currentType, "java.lang.String") == 0)
	{
		jmethodID mid = env->GetStaticMethodID(clazz, "objectToString", "(Ljava/lang/Object;)Ljava/lang/String;");
		if (mid == nullptr) return;
		jstring svalue = static_cast<jstring>(env->CallStaticObjectMethod(clazz, mid, value));
		const jchar* cStr = env->GetStringChars(svalue, nullptr);
		const jsize numChars = env->GetStringLength(svalue);

		CComBSTR bs(numChars, reinterpret_cast<LPCOLESTR>(cStr));
		V_VT(&currentValue) = VT_BSTR;
		V_BSTR(&currentValue) = bs.Copy();

		env->ReleaseStringChars(svalue, cStr);
	}
	else if (strcmp(currentType, "java.lang.Integer") == 0)
	{
		jmethodID mid = env->GetStaticMethodID(clazz, "objectToInt", "(Ljava/lang/Object;)I");
		if (mid == nullptr) return;
		V_VT(&currentValue) = VT_I4;
		V_I4(&currentValue) = static_cast<int>(env->CallStaticIntMethod(clazz, mid, value));
	}
	else if (strcmp(currentType, "java.lang.Double") == 0)
	{
		jmethodID mid = env->GetStaticMethodID(clazz, "objectToDouble", "(Ljava/lang/Object;)D");
		if (mid == nullptr) return;
		V_VT(&currentValue) = VT_R8;
		V_R8(&currentValue) = static_cast<float>(env->CallStaticDoubleMethod(clazz, mid, value));
	}
	else if (strcmp(currentType, "java.lang.Boolean") == 0)
	{
		jmethodID mid = env->GetStaticMethodID(clazz, "objectToBoolean", "(Ljava/lang/Object;)Z");
		if (mid == nullptr) return;
		V_VT(&currentValue) = VT_BOOL;
		V_BOOL(&currentValue) = env->CallStaticBooleanMethod(clazz, mid, value);
	}

	GetSystemTime(&st);
	SystemTimeToFileTime(&st, &ft);

	m_client->WriteValue(tagHandle, ft, currentValue, 100);
}

BOOL APIENTRY DllMain(HMODULE hModule,
	DWORD ul_reason_for_call,
	LPVOID lpReserved
)
{
	switch (ul_reason_for_call)
	{
	case DLL_PROCESS_ATTACH:
		CoInitializeEx(nullptr, COINIT_MULTITHREADED);
		break;
	case DLL_THREAD_ATTACH:
	case DLL_THREAD_DETACH:
	case DLL_PROCESS_DETACH:
		CoUninitialize();
		break;
	default: break;
	}

	return TRUE;
}
