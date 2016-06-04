#pragma once
#include <Windows.h>
#include <opcda.h>
#include <objbase.h>
#include <olectl.h>
#include <comcat.h>
#include <atlconv.h>
#include <atlbase.h>
#include <functional>
#include <string>
#include <vector>

typedef struct TagNameStruct
{
	OPCHANDLE tagHandle;
	DWORD clientId;
	LPCTSTR name;
} TAGNAME;

class OPCClient
{

private:

	LPCTSTR m_ProgID;

	LPCTSTR m_Host;

	CComPtr<IOPCServer>	m_Server;

	CComPtr<IOPCGroupStateMgt> m_Group;

	CComPtr<IConnectionPoint> m_ConnectionPoint;

	CComPtr<IOPCItemMgt> m_ItemMgt;

	OPCHANDLE m_GroupHandle;

	DWORD m_UpdateRate;

	DWORD m_Cookie;	

	std::function<void(void* client, LPCTSTR, VARIANT, FILETIME, WORD)> m_OnChange;

	std::vector<TAGNAME> m_TagList;

public:

	OPCClient();

	~OPCClient();

	virtual HRESULT Connect(LPCTSTR name, LPCTSTR host = NULL);

	virtual void Disconnect();

	bool IsConnected();

	OPCHANDLE AddTag(LPCTSTR tagName, VARTYPE type);

	bool GetState(OPCSERVERSTATE &state);

	void RemoveTag(OPCHANDLE tagHandle);

	bool ReadValue(OPCHANDLE tagHandle, FILETIME &time, VARIANT &value, WORD &quatily);

	bool WriteValue(OPCHANDLE tagHandle, FILETIME &time, VARIANT &value, WORD quatily);

	void OnChange(std::function<void(void* client, LPCTSTR, VARIANT, FILETIME, WORD)>&& callback);

	void InvokeOnChange(DWORD clientId, FILETIME time, VARIANT value, WORD quatily);

	LPCTSTR GetTagByClientId(DWORD clientId);

	std::vector<std::string> GetServerTags();

	std::vector<std::string> GetOPCServers(char* host);
};

