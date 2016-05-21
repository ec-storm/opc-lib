

/* this ALWAYS GENERATED file contains the proxy stub code */


 /* File created by MIDL compiler version 8.00.0603 */
/* at Sat May 07 19:15:50 2016
 */
/* Compiler settings for OpcSec.idl:
    Oicf, W1, Zp8, env=Win64 (32b run), target_arch=AMD64 8.00.0603 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#if defined(_M_AMD64)


#pragma warning( disable: 4049 )  /* more than 64k source lines */
#if _MSC_VER >= 1200
#pragma warning(push)
#endif

#pragma warning( disable: 4211 )  /* redefine extern to static */
#pragma warning( disable: 4232 )  /* dllimport identity*/
#pragma warning( disable: 4024 )  /* array to pointer mapping*/
#pragma warning( disable: 4152 )  /* function/data pointer conversion in expression */

#define USE_STUBLESS_PROXY


/* verify that the <rpcproxy.h> version is high enough to compile this file*/
#ifndef __REDQ_RPCPROXY_H_VERSION__
#define __REQUIRED_RPCPROXY_H_VERSION__ 475
#endif


#include "rpcproxy.h"
#ifndef __RPCPROXY_H_VERSION__
#error this stub requires an updated version of <rpcproxy.h>
#endif /* __RPCPROXY_H_VERSION__ */


#include "OpcSec.h"

#define TYPE_FORMAT_STRING_SIZE   11                                
#define PROC_FORMAT_STRING_SIZE   153                               
#define EXPR_FORMAT_STRING_SIZE   1                                 
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   0            

typedef struct _OpcSec_MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } OpcSec_MIDL_TYPE_FORMAT_STRING;

typedef struct _OpcSec_MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } OpcSec_MIDL_PROC_FORMAT_STRING;

typedef struct _OpcSec_MIDL_EXPR_FORMAT_STRING
    {
    long          Pad;
    unsigned char  Format[ EXPR_FORMAT_STRING_SIZE ];
    } OpcSec_MIDL_EXPR_FORMAT_STRING;


static const RPC_SYNTAX_IDENTIFIER  _RpcTransferSyntax = 
{{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}};


extern const OpcSec_MIDL_TYPE_FORMAT_STRING OpcSec__MIDL_TypeFormatString;
extern const OpcSec_MIDL_PROC_FORMAT_STRING OpcSec__MIDL_ProcFormatString;
extern const OpcSec_MIDL_EXPR_FORMAT_STRING OpcSec__MIDL_ExprFormatString;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IOPCSecurityNT_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IOPCSecurityNT_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IOPCSecurityPrivate_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IOPCSecurityPrivate_ProxyInfo;



#if !defined(__RPC_WIN64__)
#error  Invalid build platform for this stub.
#endif

static const OpcSec_MIDL_PROC_FORMAT_STRING OpcSec__MIDL_ProcFormatString =
    {
        0,
        {

	/* Procedure IsAvailablePriv */


	/* Procedure IsAvailableNT */

			0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/*  2 */	NdrFcLong( 0x0 ),	/* 0 */
/*  6 */	NdrFcShort( 0x3 ),	/* 3 */
/*  8 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 10 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12 */	NdrFcShort( 0x24 ),	/* 36 */
/* 14 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 16 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 18 */	NdrFcShort( 0x0 ),	/* 0 */
/* 20 */	NdrFcShort( 0x0 ),	/* 0 */
/* 22 */	NdrFcShort( 0x0 ),	/* 0 */
/* 24 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pbAvailable */


	/* Parameter pbAvailable */

/* 26 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 28 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 30 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 32 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 34 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 36 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure QueryMinImpersonationLevel */

/* 38 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 40 */	NdrFcLong( 0x0 ),	/* 0 */
/* 44 */	NdrFcShort( 0x4 ),	/* 4 */
/* 46 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 48 */	NdrFcShort( 0x0 ),	/* 0 */
/* 50 */	NdrFcShort( 0x24 ),	/* 36 */
/* 52 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 54 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 56 */	NdrFcShort( 0x0 ),	/* 0 */
/* 58 */	NdrFcShort( 0x0 ),	/* 0 */
/* 60 */	NdrFcShort( 0x0 ),	/* 0 */
/* 62 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pdwMinImpLevel */

/* 64 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 66 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 68 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 70 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 72 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 74 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Logoff */


	/* Procedure ChangeUser */

/* 76 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 78 */	NdrFcLong( 0x0 ),	/* 0 */
/* 82 */	NdrFcShort( 0x5 ),	/* 5 */
/* 84 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 86 */	NdrFcShort( 0x0 ),	/* 0 */
/* 88 */	NdrFcShort( 0x8 ),	/* 8 */
/* 90 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 92 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 94 */	NdrFcShort( 0x0 ),	/* 0 */
/* 96 */	NdrFcShort( 0x0 ),	/* 0 */
/* 98 */	NdrFcShort( 0x0 ),	/* 0 */
/* 100 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */


	/* Return value */

/* 102 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 104 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 106 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Logon */

/* 108 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 110 */	NdrFcLong( 0x0 ),	/* 0 */
/* 114 */	NdrFcShort( 0x4 ),	/* 4 */
/* 116 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 118 */	NdrFcShort( 0x0 ),	/* 0 */
/* 120 */	NdrFcShort( 0x8 ),	/* 8 */
/* 122 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 124 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 126 */	NdrFcShort( 0x0 ),	/* 0 */
/* 128 */	NdrFcShort( 0x0 ),	/* 0 */
/* 130 */	NdrFcShort( 0x0 ),	/* 0 */
/* 132 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter szUserID */

/* 134 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 136 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 138 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */

	/* Parameter szPassword */

/* 140 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 142 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 144 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */

	/* Return value */

/* 146 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 148 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 150 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

			0x0
        }
    };

static const OpcSec_MIDL_TYPE_FORMAT_STRING OpcSec__MIDL_TypeFormatString =
    {
        0,
        {
			NdrFcShort( 0x0 ),	/* 0 */
/*  2 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/*  4 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/*  6 */	
			0x11, 0x8,	/* FC_RP [simple_pointer] */
/*  8 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */

			0x0
        }
    };


/* Object interface: IUnknown, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IOPCSecurityNT, ver. 0.0,
   GUID={0x7AA83A01,0x6C77,0x11d3,{0x84,0xF9,0x00,0x00,0x86,0x30,0xA3,0x8B}} */

#pragma code_seg(".orpc")
static const unsigned short IOPCSecurityNT_FormatStringOffsetTable[] =
    {
    0,
    38,
    76
    };

static const MIDL_STUBLESS_PROXY_INFO IOPCSecurityNT_ProxyInfo =
    {
    &Object_StubDesc,
    OpcSec__MIDL_ProcFormatString.Format,
    &IOPCSecurityNT_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IOPCSecurityNT_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    OpcSec__MIDL_ProcFormatString.Format,
    &IOPCSecurityNT_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(6) _IOPCSecurityNTProxyVtbl = 
{
    &IOPCSecurityNT_ProxyInfo,
    &IID_IOPCSecurityNT,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IOPCSecurityNT::IsAvailableNT */ ,
    (void *) (INT_PTR) -1 /* IOPCSecurityNT::QueryMinImpersonationLevel */ ,
    (void *) (INT_PTR) -1 /* IOPCSecurityNT::ChangeUser */
};

const CInterfaceStubVtbl _IOPCSecurityNTStubVtbl =
{
    &IID_IOPCSecurityNT,
    &IOPCSecurityNT_ServerInfo,
    6,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IOPCSecurityPrivate, ver. 0.0,
   GUID={0x7AA83A02,0x6C77,0x11d3,{0x84,0xF9,0x00,0x00,0x86,0x30,0xA3,0x8B}} */

#pragma code_seg(".orpc")
static const unsigned short IOPCSecurityPrivate_FormatStringOffsetTable[] =
    {
    0,
    108,
    76
    };

static const MIDL_STUBLESS_PROXY_INFO IOPCSecurityPrivate_ProxyInfo =
    {
    &Object_StubDesc,
    OpcSec__MIDL_ProcFormatString.Format,
    &IOPCSecurityPrivate_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IOPCSecurityPrivate_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    OpcSec__MIDL_ProcFormatString.Format,
    &IOPCSecurityPrivate_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(6) _IOPCSecurityPrivateProxyVtbl = 
{
    &IOPCSecurityPrivate_ProxyInfo,
    &IID_IOPCSecurityPrivate,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IOPCSecurityPrivate::IsAvailablePriv */ ,
    (void *) (INT_PTR) -1 /* IOPCSecurityPrivate::Logon */ ,
    (void *) (INT_PTR) -1 /* IOPCSecurityPrivate::Logoff */
};

const CInterfaceStubVtbl _IOPCSecurityPrivateStubVtbl =
{
    &IID_IOPCSecurityPrivate,
    &IOPCSecurityPrivate_ServerInfo,
    6,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};

static const MIDL_STUB_DESC Object_StubDesc = 
    {
    0,
    NdrOleAllocate,
    NdrOleFree,
    0,
    0,
    0,
    0,
    0,
    OpcSec__MIDL_TypeFormatString.Format,
    1, /* -error bounds_check flag */
    0x50002, /* Ndr library version */
    0,
    0x800025b, /* MIDL Version 8.0.603 */
    0,
    0,
    0,  /* notify & notify_flag routine table */
    0x1, /* MIDL flag */
    0, /* cs routines */
    0,   /* proxy/server info */
    0
    };

const CInterfaceProxyVtbl * const _OpcSec_ProxyVtblList[] = 
{
    ( CInterfaceProxyVtbl *) &_IOPCSecurityNTProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IOPCSecurityPrivateProxyVtbl,
    0
};

const CInterfaceStubVtbl * const _OpcSec_StubVtblList[] = 
{
    ( CInterfaceStubVtbl *) &_IOPCSecurityNTStubVtbl,
    ( CInterfaceStubVtbl *) &_IOPCSecurityPrivateStubVtbl,
    0
};

PCInterfaceName const _OpcSec_InterfaceNamesList[] = 
{
    "IOPCSecurityNT",
    "IOPCSecurityPrivate",
    0
};


#define _OpcSec_CHECK_IID(n)	IID_GENERIC_CHECK_IID( _OpcSec, pIID, n)

int __stdcall _OpcSec_IID_Lookup( const IID * pIID, int * pIndex )
{
    IID_BS_LOOKUP_SETUP

    IID_BS_LOOKUP_INITIAL_TEST( _OpcSec, 2, 1 )
    IID_BS_LOOKUP_RETURN_RESULT( _OpcSec, 2, *pIndex )
    
}

const ExtendedProxyFileInfo OpcSec_ProxyFileInfo = 
{
    (PCInterfaceProxyVtblList *) & _OpcSec_ProxyVtblList,
    (PCInterfaceStubVtblList *) & _OpcSec_StubVtblList,
    (const PCInterfaceName * ) & _OpcSec_InterfaceNamesList,
    0, /* no delegation */
    & _OpcSec_IID_Lookup, 
    2,
    2,
    0, /* table of [async_uuid] interfaces */
    0, /* Filler1 */
    0, /* Filler2 */
    0  /* Filler3 */
};
#if _MSC_VER >= 1200
#pragma warning(pop)
#endif


#endif /* defined(_M_AMD64)*/

