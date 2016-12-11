#include "OPCDataCallback.h"

OPCDataCallback::OPCDataCallback(OPCClient* client)
{
	m_ulRefs = 1;
	m_client = client;
}

STDMETHODIMP OPCDataCallback::QueryInterface(REFIID iid, LPVOID* ppInterface)
{
	if (ppInterface == nullptr)
	{
		return E_INVALIDARG;
	}

	if (iid == IID_IUnknown)
	{
		*ppInterface = dynamic_cast<IUnknown*>(this);
		AddRef();
		return S_OK;
	}

	if (iid == IID_IOPCDataCallback)
	{
		*ppInterface = dynamic_cast<IOPCDataCallback*>(this);
		AddRef();
		return S_OK;
	}

	return E_NOINTERFACE;
}

STDMETHODIMP_(ULONG) OPCDataCallback::AddRef()
{
	return InterlockedIncrement(reinterpret_cast<LONG*>(&m_ulRefs));
}

STDMETHODIMP_(ULONG) OPCDataCallback::Release()
{
	ULONG ulRefs = InterlockedDecrement(reinterpret_cast<LONG*>(&m_ulRefs));

	if (ulRefs == 0)
	{
		delete this;
		return 0;
	}

	return ulRefs;
}

STDMETHODIMP OPCDataCallback::OnDataChange(
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
)
{
	for (DWORD i = 0; i < dwCount; i++)
		m_client->InvokeOnChange(phClientItems[i], pftTimeStamps[i], pvValues[i], pwQualities[i]);

	return S_OK;
}

STDMETHODIMP OPCDataCallback::OnReadComplete(
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
)
{
	return S_OK;
}

STDMETHODIMP OPCDataCallback::OnWriteComplete(
	DWORD       dwTransid,
	OPCHANDLE   hGroup,
	HRESULT     hrMastererr,
	DWORD       dwCount,
	OPCHANDLE * pClienthandles,
	HRESULT   * pErrors
)
{
	return S_OK;
}

STDMETHODIMP OPCDataCallback::OnCancelComplete(
	DWORD       dwTransid,
	OPCHANDLE   hGroup
)
{
	return S_OK;
}