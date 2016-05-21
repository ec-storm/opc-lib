#include "OPCLib.h"

#include <opcda.h>
#include <opccomn.h>
#include <opcda_i.c>

#include "OPCClient.h"

using namespace std;

const wchar_t *GetWC(const char *c)
{
	const size_t cSize = strlen(c) + 1;
	wchar_t* wc = new wchar_t[cSize];
	size_t size = strlen(c) + 1;
	size_t outSize;
	mbstowcs_s(&outSize, wc, size, c, size - 1);

	return wc;
}

vector<string> getOpcServers(char* host) {

	const CLSID CLSID_OpcServerList = { 0x13486D51,0x4821,0x11D2,{ 0xA4,0x94,0x3C, 0xB3,0x06,0xC1,0x0,0x0 } };

	IOPCServerList *m_spServerList = NULL;

	COSERVERINFO ServerInfo = { 0 };

	ServerInfo.pwszName = (LPWSTR)GetWC(host);
	ServerInfo.pAuthInfo = NULL;

	MULTI_QI MultiQI[2] = { 0 };

	MultiQI[0].pIID = &IID_IOPCServerList;
	MultiQI[0].pItf = NULL;
	MultiQI[0].hr = S_OK;

	MultiQI[1].pIID = &IID_IOPCServerList2;
	MultiQI[1].pItf = NULL;
	MultiQI[1].hr = S_OK;

	USES_CONVERSION;

	HRESULT hr = CoCreateInstanceEx(CLSID_OpcServerList, NULL, CLSCTX_LOCAL_SERVER | CLSCTX_REMOTE_SERVER, &ServerInfo, 1, MultiQI);

	if (hr == S_OK)
	{
		m_spServerList = (IOPCServerList*)MultiQI[0].pItf;
	}

	CLSID catid[2];
	catid[0] = CATID_OPCDAServer10;
	catid[1] = CATID_OPCDAServer20;
	IOPCEnumGUID *pEnumGUID;
	hr = m_spServerList->EnumClassesOfCategories(2, catid, 0, NULL, (IEnumGUID**)&pEnumGUID);

	vector<string> result;

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

vector<string> getOpcServerTags(char* host, char* progId) {
	USES_CONVERSION;

	OPCClient client;

	client.Connect(progId, host);
	client.AddTag("Dynamic/Analog Types/Fools/Rosencrantz", NULL);

	Sleep(100000000);

	vector<string> result;

	CLSID cClsid = GUID_NULL;

	if (FAILED(CLSIDFromProgID(A2OLE(progId), &cClsid)))
	{
		if (UuidFromString((RPC_CSTR)progId, &cClsid) != RPC_S_OK)
		{
			return result;
		}
	}

	COSERVERINFO cInfo;
	memset(&cInfo, 0, sizeof(cInfo));

	cInfo.pwszName = (LPWSTR)GetWC(host);
	cInfo.pAuthInfo = NULL;
	cInfo.dwReserved1 = NULL;
	cInfo.dwReserved2 = NULL;

	MULTI_QI cResults;
	memset(&cResults, 0, sizeof(cResults));

	cResults.pIID = &IID_IOPCServer;
	cResults.pItf = NULL;
	cResults.hr = S_OK;

	HRESULT hResult = CoCreateInstanceEx(
		cClsid,
		NULL,
		CLSCTX_INPROC_SERVER | CLSCTX_LOCAL_SERVER | CLSCTX_REMOTE_SERVER,
		&cInfo,
		1,
		&cResults);

	if (FAILED(hResult))
	{
		return result;
	}

	if (FAILED(cResults.hr))
	{
		return result;
	}

	CComPtr<IOPCBrowseServerAddressSpace> pOPCBrowser;
	if (FAILED((cResults.pItf)->QueryInterface(IID_IOPCBrowseServerAddressSpace, (void**)&pOPCBrowser)))
	{
		pOPCBrowser = NULL;
		return result;
	}

	CComPtr<IEnumString> pEnumString;
	pOPCBrowser->BrowseOPCItemIDs(OPC_FLAT, L"",
		VT_EMPTY, OPC_READABLE | OPC_WRITEABLE, (LPENUMSTRING*)&pEnumString);

	pEnumString->Reset();
	LPOLESTR str = NULL;
	ULONG fetched = 0;
	while (pEnumString->Next(1, &str, &fetched) == S_OK && fetched == 1) {
		result.push_back(OLE2CA(str));
	}

	return result;
}