#include "OPCLib.h"

#include <opcda.h>
#include <opccomn.h>
#include <opcda_i.c>

#include "OPCClient.h"

using namespace std;

vector<string> getOpcServers(char* host) {
	USES_CONVERSION;

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
	

	OPCClient client;

	client.Connect(progId, host);
	client.AddTag("Dynamic/Analog Types/Fools/Rosencrantz", VT_EMPTY);
	
	client.OnChange([](LPCTSTR tagName, VARIANT value, FILETIME time, WORD quality) {
		printf("%s = %d\n", tagName, value.intVal);
	});

	//Sleep(100000000);

	return client.GetAllTags();
}