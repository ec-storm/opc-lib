#pragma once

#include <opcda.h>
#include "OPCClient.h"

class OPCDataCallback : public IOPCDataCallback
{
public:
	virtual ~OPCDataCallback()
	{
	}

	OPCDataCallback(OPCClient* client);

	STDMETHODIMP QueryInterface(REFIID iid, LPVOID* ppInterface) override;

	STDMETHODIMP_(ULONG) AddRef() override;

	STDMETHODIMP_(ULONG) Release() override;

	STDMETHODIMP OnDataChange(
		DWORD dwTransid,
		OPCHANDLE hGroup,
		HRESULT hrMasterquality,
		HRESULT hrMastererror,
		DWORD dwCount,
		OPCHANDLE* phClientItems,
		VARIANT* pvValues,
		WORD* pwQualities,
		FILETIME* pftTimeStamps,
		HRESULT* pErrors
	) override;

	STDMETHODIMP OnReadComplete(
		DWORD dwTransid,
		OPCHANDLE hGroup,
		HRESULT hrMasterquality,
		HRESULT hrMastererror,
		DWORD dwCount,
		OPCHANDLE* phClientItems,
		VARIANT* pvValues,
		WORD* pwQualities,
		FILETIME* pftTimeStamps,
		HRESULT* pErrors
	) override;

	STDMETHODIMP OnWriteComplete(
		DWORD dwTransid,
		OPCHANDLE hGroup,
		HRESULT hrMastererr,
		DWORD dwCount,
		OPCHANDLE* pClienthandles,
		HRESULT* pErrors
	) override;

	STDMETHODIMP OnCancelComplete(
		DWORD dwTransid,
		OPCHANDLE hGroup
	) override;
private:

	ULONG m_ulRefs;

	OPCClient* m_client;
};
