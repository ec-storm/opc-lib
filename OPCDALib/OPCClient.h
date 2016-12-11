#pragma once
#include <Windows.h>
#include <opcda.h>
#include <olectl.h>
#include <atlbase.h>
#include <functional>
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

	CComPtr<IOPCBrowseServerAddressSpace> m_pOPCBrowser;

public:

	OPCClient();

	virtual ~OPCClient();

	virtual HRESULT Connect(LPCTSTR name, LPCTSTR host = NULL);

	virtual void Disconnect();

	bool IsConnected() const;

	OPCHANDLE AddTag(LPCTSTR tagName, VARTYPE type);

	bool GetState(OPCSERVERSTATE &state) const;

	void RemoveTag(OPCHANDLE tagHandle);

	bool ReadValue(OPCHANDLE tagHandle, FILETIME &time, VARIANT &value, WORD &quatily) const;

	bool WriteValue(OPCHANDLE tagHandle, FILETIME &time, VARIANT &value, WORD quatily) const;

	void OnChange(std::function<void(void* client, LPCTSTR, VARIANT, FILETIME, WORD)>&& callback);

	void InvokeOnChange(DWORD clientId, FILETIME time, VARIANT value, WORD quatily);

	LPCTSTR GetTagByClientId(DWORD clientId);

	std::vector<std::string> GetServerTags() const;

	std::vector<std::string> GetServerTagBranches(LPCTSTR sInput) const;

	std::vector<std::string> GetServerTagLeafs(LPCTSTR sInput) const;

	std::vector<std::string> GetOPCServers(char* host) const;
};

