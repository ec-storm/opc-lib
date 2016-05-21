#pragma once
#include <Windows.h>
#include <opcda.h>
#include <objbase.h>
#include <olectl.h>
#include <comcat.h>
#include <atlconv.h>
#include <atlbase.h>
#include "OPCDataCallback.h"

class OPCClient
{

private:

	LPCTSTR m_ProgID;

	LPCTSTR m_Host;

	CComPtr<IOPCServer>	m_Server;

	CComPtr<IOPCGroupStateMgt> m_Group;

	CComPtr<IConnectionPoint> m_ConnectionPoint;

	CComPtr<IOPCItemMgt> m_itemMgt;

	OPCHANDLE m_GroupHandle;

	DWORD m_UpdateRate;

	DWORD m_Cookie;

	OPCDataCallback* m_OPCDataCallback;

public:

	OPCClient();

	~OPCClient();

	virtual HRESULT Connect(LPCTSTR name, LPCTSTR host = NULL);

	virtual void Disconnect();

	bool isConnected();

	OPCHANDLE AddTag(LPCTSTR tagName, VARTYPE type);

	bool GetState(OPCSERVERSTATE &state);

	void RemoveTag(OPCHANDLE tagHandle);

	bool ReadValue(OPCHANDLE tagHandle, FILETIME &time, VARIANT &value, WORD &quatily);

	bool WriteValue(OPCHANDLE tagHandle, FILETIME &time, VARIANT &value, WORD quatily);

};

