#include "OPCDataCallback.h"
#include <stdio.h>

OPCDataCallback::OPCDataCallback()
{
	m_ulRefs = 1;
}

STDMETHODIMP OPCDataCallback::QueryInterface(REFIID iid, LPVOID* ppInterface)
{
	if (ppInterface == NULL)
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
	return InterlockedIncrement((LONG*)&m_ulRefs);
}

STDMETHODIMP_(ULONG) OPCDataCallback::Release()
{
	ULONG ulRefs = InterlockedDecrement((LONG*)&m_ulRefs);

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
	printf("Data change\n");
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