#include "OPCClient.h"
#include "OPCDataCallback.h"

#include <sstream>
#include <algorithm>
#include <opccomn.h>
#include <opcda_i.c>
#include <locale>
#include <codecvt>

OPCDataCallback* g_OPCDataCallback;

OPCClient::OPCClient()
{
}

OPCClient::~OPCClient()
{
	Disconnect();
}

HRESULT OPCClient::Connect(LPCTSTR name, LPCTSTR host)
{
	HRESULT hr = S_OK;

	if (IsConnected()) {
		return E_FAIL;
	}

	if (name == NULL)
		return E_FAIL;

	if (host == NULL || std::string(host) == "")
	{
		m_Host = "localhost";
	}
	else
	{
		m_Host = host;
	}

	m_ProgID = name;

	if (m_Host == "localhost") {
		hr = m_Server.CoCreateInstance(CT2W(m_ProgID));
	}
	else if (m_Host == "DCOM") {
		hr = m_Server.CoCreateInstance(CT2W(m_ProgID), NULL, CLSCTX_REMOTE_SERVER);
	}
	else
	{
		CLSID clsid = CLSID_NULL;
		hr = CLSIDFromProgID(CT2W(m_ProgID), &clsid);

		if (FAILED(hr) || clsid == CLSID_NULL) {
			return E_FAIL;
		}

		COSERVERINFO sinfo;
		ZeroMemory(&sinfo, sizeof(COSERVERINFO));
		sinfo.pAuthInfo = NULL;
		sinfo.pwszName = _wcsdup(CT2W(m_Host));

		MULTI_QI mqi[] = { { &IID_IOPCServer, NULL ,S_OK } };

		hr = CoCreateInstanceEx(clsid, NULL, CLSCTX_REMOTE_SERVER, &sinfo, sizeof(mqi) / sizeof(mqi[0]), mqi);
		free(sinfo.pwszName);

		if (FAILED(hr) || clsid == CLSID_NULL) {
			return E_FAIL;
		}
		else
		{
			m_Server.p = (IOPCServer*)mqi[0].pItf;
		}
	}

	OPCSERVERSTATE state = OPC_STATUS_TEST;
	GetState(state);
	int index = 0;

	while (state != OPC_STATUS_RUNNING && ++index < 20) {
		Sleep(100);

		if (!GetState(state)) {
			return E_FAIL;
		}
	}

	if (state != OPC_STATUS_RUNNING) {
		return E_FAIL;
	}

	if (m_Group == NULL) {
		DWORD updateRate = 0;

		hr = m_Server->AddGroup(L"", TRUE, m_UpdateRate, NULL, NULL, NULL, GetSystemDefaultLCID(),
			&m_GroupHandle, &updateRate, IID_IOPCGroupStateMgt, (LPUNKNOWN *)&m_Group);
		if (FAILED(hr) || m_Group == NULL) {
			return E_FAIL;
		}

		CComPtr<IConnectionPointContainer> cpoint;
		hr = m_Group->QueryInterface(&cpoint);
		if (FAILED(hr) || cpoint == NULL) {
			return E_FAIL;
		}

		hr = cpoint->FindConnectionPoint(IID_IOPCDataCallback, &m_ConnectionPoint);
		if (FAILED(hr) || m_ConnectionPoint == NULL) {
			return E_FAIL;
		}

		g_OPCDataCallback = new OPCDataCallback(this);

		hr = m_ConnectionPoint->Advise(g_OPCDataCallback, &m_Cookie);
		if (FAILED(hr))
		{
			delete g_OPCDataCallback;
			return E_FAIL;
		}
	}

	return hr;
}

void OPCClient::Disconnect()
{
	if (!IsConnected()) {
		return;
	}

	if (m_ConnectionPoint) {
		try {
			m_ConnectionPoint->Unadvise(m_Cookie);
			m_ConnectionPoint.Release();
		}
		catch (...) {}
		m_Cookie = 0;
		m_ConnectionPoint.p = NULL;
	}

	if (g_OPCDataCallback) {
		try {
			g_OPCDataCallback->Release();
		}
		catch (...) {}
		g_OPCDataCallback = NULL;
	}

	if (m_Group) {
		try {
			m_Group.Release();
		}
		catch (...) {}
		m_Group.p = NULL;
	}

	if (m_Server) {
		try {
			m_Server->RemoveGroup(m_GroupHandle, TRUE);
			m_Server.Release();
		}
		catch (...) {}
		m_Server.p = NULL;
	}
}

bool OPCClient::IsConnected()
{
	return (m_Server != NULL && m_Group != NULL);;
}

OPCHANDLE OPCClient::AddTag(LPCTSTR tagName, VARTYPE type)
{
	USES_CONVERSION;

	HRESULT hr = S_OK;
	OPCITEMRESULT * pResults = NULL;
	HRESULT *pErrors = NULL;
	OPCITEMDEF idef;

	idef.szItemID = A2OLE(tagName);
	idef.dwBlobSize = 0;
	idef.pBlob = NULL;
	idef.bActive = TRUE;
	idef.hClient = m_TagList.size() + 1;
	idef.szAccessPath = NULL;
	idef.vtRequestedDataType = type;

	if (m_ItemMgt == NULL && m_Group == NULL) return E_FAIL;

	if (m_ItemMgt == NULL) {
		m_Group.QueryInterface(&m_ItemMgt);
		ATLASSERT(m_ItemMgt);
	}

	hr = m_ItemMgt->AddItems(1, &idef, &pResults, &pErrors);

	if (pErrors)
		CoTaskMemFree(pErrors);

	if (pResults) {
		TAGNAME tagStruct;
		tagStruct.name = tagName;
		tagStruct.clientId = idef.hClient;
		tagStruct.tagHandle = pResults->hServer;
		m_TagList.push_back(tagStruct);

		return pResults->hServer;
	}


	return 0;
}

bool OPCClient::GetState(OPCSERVERSTATE & state)
{
	OPCSERVERSTATUS *status = NULL;
	HRESULT hr = S_OK;

	if (m_Server == NULL)  return false;
	try {
		hr = m_Server->GetStatus(&status);
	}
	catch (...) {
		return false;
	}

	if (FAILED(hr)) {
		return false;
	}

	if (status == NULL)
		return false;
	else {
		state = status->dwServerState;
		CoTaskMemFree(status->szVendorInfo);
		CoTaskMemFree(status);
		return true;
	}
}

void OPCClient::RemoveTag(OPCHANDLE tagHandle)
{
	struct find_handle : std::unary_function<TAGNAME, bool> {
		OPCHANDLE handle;

		find_handle(OPCHANDLE handle) :handle(handle) { }
		bool operator()(TAGNAME const& m) const {
			return m.tagHandle == handle;
		}
	};

	std::vector<TAGNAME>::iterator it = std::find_if(m_TagList.begin(), m_TagList.end(), find_handle(tagHandle));
	if (it == m_TagList.end())
		return;

	m_TagList.erase(it);

	HRESULT *hr;
	m_ItemMgt->RemoveItems(1, &tagHandle, &hr);
}

bool OPCClient::ReadValue(OPCHANDLE tagHandle, FILETIME & time, VARIANT & value, WORD & quatily)
{
	CComPtr<IOPCSyncIO> SyncIO;
	if (m_Group == NULL) return false;

	m_Group.QueryInterface(&SyncIO);
	if (SyncIO == NULL) return false;

	HRESULT      *pErrors = NULL;
	OPCITEMSTATE* pItemState = NULL;

	HRESULT hr = SyncIO->Read(OPC_DS_CACHE, 1, &tagHandle, &pItemState, &pErrors);
	if (FAILED(hr) || (pErrors != NULL && FAILED(*pErrors)) || pItemState == NULL) {
		if (FAILED(*pErrors))
			return false;

		if (pErrors)
			CoTaskMemFree(pErrors);

		if (pItemState)
			CoTaskMemFree(pItemState);

		return false;
	}

	if (pErrors)
		CoTaskMemFree(pErrors);

	if (pItemState) {
		hr = VariantCopy(&value, &pItemState->vDataValue);
		if (FAILED(hr)) {
			return false;
		}

		quatily = pItemState->wQuality;
		time = pItemState->ftTimeStamp;
		CoTaskMemFree(pItemState);

		return true;
	}

	return false;
}

bool OPCClient::WriteValue(OPCHANDLE tagHandle, FILETIME & time, VARIANT & value, WORD quatily)
{
	CComPtr<IOPCAsyncIO2> AsyncIO;
	if (m_Group == NULL) return false;

	m_Group.QueryInterface(&AsyncIO);
	if (AsyncIO == NULL) return false;

	HRESULT	*pErrors = NULL;
	DWORD cancelID = 0;

	HRESULT hr = AsyncIO->Write(1, &tagHandle, &value, rand(), &cancelID, &pErrors);
	if (FAILED(hr) || (pErrors != NULL && FAILED(*pErrors))) {
		if (FAILED(*pErrors))
			return false;

		if (pErrors)
			CoTaskMemFree(pErrors);

		return false;
	}

	if (pErrors) {
		CoTaskMemFree(pErrors);
		return false;
	}

	return true;
}

void OPCClient::OnChange(std::function<void(void* client, LPCTSTR, VARIANT, FILETIME, WORD)>&& callback)
{
	m_OnChange = callback;
}

void OPCClient::InvokeOnChange(DWORD clientId, FILETIME time, VARIANT value, WORD quatily)
{
	if (m_OnChange != NULL)
		m_OnChange(this, GetTagByClientId(clientId), value, time, quatily);
}

LPCTSTR OPCClient::GetTagByClientId(DWORD clientId)
{
	struct find_id : std::unary_function<TAGNAME, bool> {
		DWORD id;

		find_id(DWORD id) :id(id) { }
		bool operator()(TAGNAME const& m) const {
			return m.clientId == id;
		}
	};

	std::vector<TAGNAME>::iterator it = std::find_if(m_TagList.begin(), m_TagList.end(), find_id(clientId));
	if (it != m_TagList.end())
		return it->name;

	return NULL;
}

std::string wstring_to_utf8(const std::wstring& str)
{
	std::wstring_convert<std::codecvt_utf8<wchar_t>> myconv;
	return myconv.to_bytes(str);
}

std::vector<std::string> OPCClient::GetServerTags()
{
	USES_CONVERSION;

	std::vector<std::string> result;
	CComPtr<IOPCBrowseServerAddressSpace> pOPCBrowser;
	if (m_Server == NULL)
		return result;

	m_Server.QueryInterface(&pOPCBrowser);
	if (pOPCBrowser == NULL)
		return result;

	CComPtr<IEnumString> pEnumString;
	pOPCBrowser->BrowseOPCItemIDs(OPC_FLAT, L"",
		VT_EMPTY, OPC_READABLE | OPC_WRITEABLE, (LPENUMSTRING*)&pEnumString);

	pEnumString->Reset();
	LPOLESTR str = NULL;
	ULONG fetched = 0;
	while (pEnumString->Next(1, &str, &fetched) == S_OK && fetched == 1) {
		result.push_back(wstring_to_utf8(str));
	}

	return result;
}

std::vector<std::string> OPCClient::GetOPCServers(char* host)
{
	USES_CONVERSION;

	std::vector<std::string> result;

	const CLSID CLSID_OpcServerList = { 0x13486D51,0x4821,0x11D2,{ 0xA4,0x94,0x3C, 0xB3,0x06,0xC1,0x0,0x0 } };

	IOPCServerList *m_spServerList = NULL;

	COSERVERINFO ServerInfo = { 0 };

	ServerInfo.pwszName = A2OLE(host);
	ServerInfo.pAuthInfo = NULL;

	MULTI_QI MultiQI[2] = { 0 };

	MultiQI[0].pIID = &IID_IOPCServerList;
	MultiQI[0].pItf = NULL;
	MultiQI[0].hr = S_OK;

	MultiQI[1].pIID = &IID_IOPCServerList2;
	MultiQI[1].pItf = NULL;
	MultiQI[1].hr = S_OK;

	HRESULT hr = CoCreateInstanceEx(CLSID_OpcServerList, NULL, CLSCTX_LOCAL_SERVER | CLSCTX_REMOTE_SERVER, &ServerInfo, 1, MultiQI);
	if (FAILED(hr)) {
		return result;
	}

	m_spServerList = (IOPCServerList*)MultiQI[0].pItf;

	CLSID catid[2];
	catid[0] = CATID_OPCDAServer10;
	catid[1] = CATID_OPCDAServer20;
	IOPCEnumGUID *pEnumGUID;
	hr = m_spServerList->EnumClassesOfCategories(2, catid, 0, NULL, (IEnumGUID**)&pEnumGUID);
	if (FAILED(hr)) {
		return result;
	}

	if (hr == S_OK)
	{
		GUID serverGUID;
		ULONG numberServers = 8;

		while ((hr = pEnumGUID->Next(1, &serverGUID, &numberServers)) == S_OK)
		{
			LPOLESTR wszProgID;
			hr = ProgIDFromCLSID(serverGUID, &wszProgID);
			result.push_back(OLE2CA(wszProgID));
			CoTaskMemFree(wszProgID);
		};
	}

	return result;
}
