#include "OPCClient.h"
#include <sstream>

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

	if (isConnected()) {
		return E_FAIL;
	}

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

		m_OPCDataCallback = new OPCDataCallback;				

		hr = m_ConnectionPoint->Advise(m_OPCDataCallback, &m_Cookie);
		if (FAILED(hr))
		{
			delete m_OPCDataCallback;
			return E_FAIL;
		}
	}

	return hr;
}

void OPCClient::Disconnect()
{
	if (!isConnected()) {
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

	if (m_OPCDataCallback) {
		try {
			m_OPCDataCallback->Release();
		}
		catch (...) {}
		m_OPCDataCallback = NULL;
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

bool OPCClient::isConnected()
{
	return (m_Server != NULL && m_Group != NULL);;
}

OPCHANDLE OPCClient::AddTag(LPCTSTR tagName, VARTYPE type)
{
	HRESULT hr = S_OK;
	OPCITEMRESULT * pResults = NULL;
	HRESULT *pErrors = NULL;
	OPCITEMDEF idef;

	idef.szItemID = CT2OLE(tagName);
	idef.dwBlobSize = 0;
	idef.pBlob = NULL;
	idef.bActive = TRUE;
	idef.hClient = 1;
	idef.szAccessPath = NULL; 
	idef.vtRequestedDataType = VT_EMPTY;

	if (m_itemMgt == NULL && m_Group == NULL) return E_FAIL;

	if (m_itemMgt == NULL) {
		m_Group.QueryInterface(&m_itemMgt);
		ATLASSERT(m_itemMgt);
	}

	hr = m_itemMgt->AddItems(1, &idef, &pResults, &pErrors);
	
	if (pErrors)
		CoTaskMemFree(pErrors);

	if (pResults)
		return pResults->hServer;

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
}

bool OPCClient::ReadValue(OPCHANDLE tagHandle, FILETIME & time, VARIANT & value, WORD & quatily)
{
	return false;
}

bool OPCClient::WriteValue(OPCHANDLE tagHandle, FILETIME & time, VARIANT & value, WORD quatily)
{
	return false;
}
