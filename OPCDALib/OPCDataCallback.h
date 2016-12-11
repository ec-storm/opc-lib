#pragma once

#include <opcda.h>
#include "OPCClient.h"

class OPCDataCallback : public IOPCDataCallback
{
public:
	virtual ~OPCDataCallback()
	{
	}

	OPCDataCallback(OPCClient *client);

	STDMETHODIMP QueryInterface(REFIID iid, LPVOID* ppInterface);

	STDMETHODIMP_(ULONG) AddRef();

	STDMETHODIMP_(ULONG) Release();

	STDMETHODIMP OnDataChange(
		DWORD       dwTransid,
		OPCHANDLE   hGroup,
		HRESULT     hrMasterquality,
		HRESULT     hrMastererror,
		DWORD       dwCount,
		OPCHANDLE * phClientItems,
		VARIANT   * pvValues,
		WORD      * pwQualities,
		FILETIME  * pftTimeStamps,
		HRESULT   * pErrors
	);

	STDMETHODIMP OnReadComplete(
		DWORD       dwTransid,
		OPCHANDLE   hGroup,
		HRESULT     hrMasterquality,
		HRESULT     hrMastererror,
		DWORD       dwCount,
		OPCHANDLE * phClientItems,
		VARIANT   * pvValues,
		WORD      * pwQualities,
		FILETIME  * pftTimeStamps,
		HRESULT   * pErrors
	);

	STDMETHODIMP OnWriteComplete(
		DWORD       dwTransid,
		OPCHANDLE   hGroup,
		HRESULT     hrMastererr,
		DWORD       dwCount,
		OPCHANDLE * pClienthandles,
		HRESULT   * pErrors
	);

	STDMETHODIMP OnCancelComplete(
		DWORD       dwTransid,
		OPCHANDLE   hGroup
	);
private:

	ULONG m_ulRefs;

	OPCClient *m_client;
};