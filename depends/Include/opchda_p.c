

/* this ALWAYS GENERATED file contains the proxy stub code */


 /* File created by MIDL compiler version 8.00.0603 */
/* at Sat May 07 19:15:43 2016
 */
/* Compiler settings for opchda.idl:
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


#include "opchda.h"

#define TYPE_FORMAT_STRING_SIZE   2063                              
#define PROC_FORMAT_STRING_SIZE   3449                              
#define EXPR_FORMAT_STRING_SIZE   1                                 
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   1            

typedef struct _opchda_MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } opchda_MIDL_TYPE_FORMAT_STRING;

typedef struct _opchda_MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } opchda_MIDL_PROC_FORMAT_STRING;

typedef struct _opchda_MIDL_EXPR_FORMAT_STRING
    {
    long          Pad;
    unsigned char  Format[ EXPR_FORMAT_STRING_SIZE ];
    } opchda_MIDL_EXPR_FORMAT_STRING;


static const RPC_SYNTAX_IDENTIFIER  _RpcTransferSyntax = 
{{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}};


extern const opchda_MIDL_TYPE_FORMAT_STRING opchda__MIDL_TypeFormatString;
extern const opchda_MIDL_PROC_FORMAT_STRING opchda__MIDL_ProcFormatString;
extern const opchda_MIDL_EXPR_FORMAT_STRING opchda__MIDL_ExprFormatString;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO CATID_OPCHDAServer10_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO CATID_OPCHDAServer10_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IOPCHDA_Browser_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IOPCHDA_Browser_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IOPCHDA_Server_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IOPCHDA_Server_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IOPCHDA_SyncRead_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IOPCHDA_SyncRead_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IOPCHDA_SyncUpdate_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IOPCHDA_SyncUpdate_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IOPCHDA_SyncAnnotations_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IOPCHDA_SyncAnnotations_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IOPCHDA_AsyncRead_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IOPCHDA_AsyncRead_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IOPCHDA_AsyncUpdate_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IOPCHDA_AsyncUpdate_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IOPCHDA_AsyncAnnotations_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IOPCHDA_AsyncAnnotations_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IOPCHDA_Playback_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IOPCHDA_Playback_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IOPCHDA_DataCallback_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IOPCHDA_DataCallback_ProxyInfo;


extern const USER_MARSHAL_ROUTINE_QUADRUPLE UserMarshalRoutines[ WIRE_MARSHAL_TABLE_SIZE ];

#if !defined(__RPC_WIN64__)
#error  Invalid build platform for this stub.
#endif

static const opchda_MIDL_PROC_FORMAT_STRING opchda__MIDL_ProcFormatString =
    {
        0,
        {

	/* Procedure GetEnum */

			0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/*  2 */	NdrFcLong( 0x0 ),	/* 0 */
/*  6 */	NdrFcShort( 0x3 ),	/* 3 */
/*  8 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 10 */	NdrFcShort( 0x6 ),	/* 6 */
/* 12 */	NdrFcShort( 0x8 ),	/* 8 */
/* 14 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 16 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 18 */	NdrFcShort( 0x0 ),	/* 0 */
/* 20 */	NdrFcShort( 0x0 ),	/* 0 */
/* 22 */	NdrFcShort( 0x0 ),	/* 0 */
/* 24 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dwBrowseType */

/* 26 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 28 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 30 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter ppIEnumString */

/* 32 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 34 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 36 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Return value */

/* 38 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 40 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 42 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ChangeBrowsePosition */

/* 44 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 46 */	NdrFcLong( 0x0 ),	/* 0 */
/* 50 */	NdrFcShort( 0x4 ),	/* 4 */
/* 52 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 54 */	NdrFcShort( 0x6 ),	/* 6 */
/* 56 */	NdrFcShort( 0x8 ),	/* 8 */
/* 58 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 60 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 62 */	NdrFcShort( 0x0 ),	/* 0 */
/* 64 */	NdrFcShort( 0x0 ),	/* 0 */
/* 66 */	NdrFcShort( 0x0 ),	/* 0 */
/* 68 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dwBrowseDirection */

/* 70 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 72 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 74 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter szString */

/* 76 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 78 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 80 */	NdrFcShort( 0x1a ),	/* Type Offset=26 */

	/* Return value */

/* 82 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 84 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 86 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetItemID */

/* 88 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 90 */	NdrFcLong( 0x0 ),	/* 0 */
/* 94 */	NdrFcShort( 0x5 ),	/* 5 */
/* 96 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 98 */	NdrFcShort( 0x0 ),	/* 0 */
/* 100 */	NdrFcShort( 0x8 ),	/* 8 */
/* 102 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 104 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 106 */	NdrFcShort( 0x0 ),	/* 0 */
/* 108 */	NdrFcShort( 0x0 ),	/* 0 */
/* 110 */	NdrFcShort( 0x0 ),	/* 0 */
/* 112 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter szNode */

/* 114 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 116 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 118 */	NdrFcShort( 0x1a ),	/* Type Offset=26 */

	/* Parameter pszItemID */

/* 120 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 122 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 124 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 126 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 128 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 130 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetBranchPosition */

/* 132 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 134 */	NdrFcLong( 0x0 ),	/* 0 */
/* 138 */	NdrFcShort( 0x6 ),	/* 6 */
/* 140 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 142 */	NdrFcShort( 0x0 ),	/* 0 */
/* 144 */	NdrFcShort( 0x8 ),	/* 8 */
/* 146 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 148 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 150 */	NdrFcShort( 0x0 ),	/* 0 */
/* 152 */	NdrFcShort( 0x0 ),	/* 0 */
/* 154 */	NdrFcShort( 0x0 ),	/* 0 */
/* 156 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pszBranchPos */

/* 158 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 160 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 162 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 164 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 166 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 168 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetItemAttributes */

/* 170 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 172 */	NdrFcLong( 0x0 ),	/* 0 */
/* 176 */	NdrFcShort( 0x3 ),	/* 3 */
/* 178 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 180 */	NdrFcShort( 0x0 ),	/* 0 */
/* 182 */	NdrFcShort( 0x24 ),	/* 36 */
/* 184 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x6,		/* 6 */
/* 186 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 188 */	NdrFcShort( 0x1 ),	/* 1 */
/* 190 */	NdrFcShort( 0x0 ),	/* 0 */
/* 192 */	NdrFcShort( 0x0 ),	/* 0 */
/* 194 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pdwCount */

/* 196 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 198 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 200 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppdwAttrID */

/* 202 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 204 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 206 */	NdrFcShort( 0x28 ),	/* Type Offset=40 */

	/* Parameter ppszAttrName */

/* 208 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 210 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 212 */	NdrFcShort( 0x3c ),	/* Type Offset=60 */

	/* Parameter ppszAttrDesc */

/* 214 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 216 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 218 */	NdrFcShort( 0x3c ),	/* Type Offset=60 */

	/* Parameter ppvtAttrDataType */

/* 220 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 222 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 224 */	NdrFcShort( 0x5a ),	/* Type Offset=90 */

	/* Return value */

/* 226 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 228 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 230 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetAggregates */

/* 232 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 234 */	NdrFcLong( 0x0 ),	/* 0 */
/* 238 */	NdrFcShort( 0x4 ),	/* 4 */
/* 240 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 242 */	NdrFcShort( 0x0 ),	/* 0 */
/* 244 */	NdrFcShort( 0x24 ),	/* 36 */
/* 246 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x5,		/* 5 */
/* 248 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 250 */	NdrFcShort( 0x1 ),	/* 1 */
/* 252 */	NdrFcShort( 0x0 ),	/* 0 */
/* 254 */	NdrFcShort( 0x0 ),	/* 0 */
/* 256 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pdwCount */

/* 258 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 260 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 262 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppdwAggrID */

/* 264 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 266 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 268 */	NdrFcShort( 0x28 ),	/* Type Offset=40 */

	/* Parameter ppszAggrName */

/* 270 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 272 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 274 */	NdrFcShort( 0x3c ),	/* Type Offset=60 */

	/* Parameter ppszAggrDesc */

/* 276 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 278 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 280 */	NdrFcShort( 0x3c ),	/* Type Offset=60 */

	/* Return value */

/* 282 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 284 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 286 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetHistorianStatus */

/* 288 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 290 */	NdrFcLong( 0x0 ),	/* 0 */
/* 294 */	NdrFcShort( 0x5 ),	/* 5 */
/* 296 */	NdrFcShort( 0x58 ),	/* X64 Stack size/offset = 88 */
/* 298 */	NdrFcShort( 0x0 ),	/* 0 */
/* 300 */	NdrFcShort( 0x10c ),	/* 268 */
/* 302 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0xa,		/* 10 */
/* 304 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 306 */	NdrFcShort( 0x0 ),	/* 0 */
/* 308 */	NdrFcShort( 0x0 ),	/* 0 */
/* 310 */	NdrFcShort( 0x0 ),	/* 0 */
/* 312 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pwStatus */

/* 314 */	NdrFcShort( 0x2010 ),	/* Flags:  out, srv alloc size=8 */
/* 316 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 318 */	NdrFcShort( 0x6e ),	/* Type Offset=110 */

	/* Parameter pftCurrentTime */

/* 320 */	NdrFcShort( 0x2012 ),	/* Flags:  must free, out, srv alloc size=8 */
/* 322 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 324 */	NdrFcShort( 0x72 ),	/* Type Offset=114 */

	/* Parameter pftStartTime */

/* 326 */	NdrFcShort( 0x2012 ),	/* Flags:  must free, out, srv alloc size=8 */
/* 328 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 330 */	NdrFcShort( 0x72 ),	/* Type Offset=114 */

	/* Parameter pwMajorVersion */

/* 332 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 334 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 336 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter pwMinorVersion */

/* 338 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 340 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 342 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter pwBuildNumber */

/* 344 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 346 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 348 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter pdwMaxReturnValues */

/* 350 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 352 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 354 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppszStatusString */

/* 356 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 358 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 360 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter ppszVendorInfo */

/* 362 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 364 */	NdrFcShort( 0x48 ),	/* X64 Stack size/offset = 72 */
/* 366 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 368 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 370 */	NdrFcShort( 0x50 ),	/* X64 Stack size/offset = 80 */
/* 372 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetItemHandles */

/* 374 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 376 */	NdrFcLong( 0x0 ),	/* 0 */
/* 380 */	NdrFcShort( 0x6 ),	/* 6 */
/* 382 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 384 */	NdrFcShort( 0x8 ),	/* 8 */
/* 386 */	NdrFcShort( 0x8 ),	/* 8 */
/* 388 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 390 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 392 */	NdrFcShort( 0x1 ),	/* 1 */
/* 394 */	NdrFcShort( 0x1 ),	/* 1 */
/* 396 */	NdrFcShort( 0x0 ),	/* 0 */
/* 398 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dwCount */

/* 400 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 402 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 404 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pszItemID */

/* 406 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 408 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 410 */	NdrFcShort( 0x8a ),	/* Type Offset=138 */

	/* Parameter phClient */

/* 412 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 414 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 416 */	NdrFcShort( 0xa4 ),	/* Type Offset=164 */

	/* Parameter pphServer */

/* 418 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 420 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 422 */	NdrFcShort( 0xb0 ),	/* Type Offset=176 */

	/* Parameter ppErrors */

/* 424 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 426 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 428 */	NdrFcShort( 0xb0 ),	/* Type Offset=176 */

	/* Return value */

/* 430 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 432 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 434 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ReleaseItemHandles */

/* 436 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 438 */	NdrFcLong( 0x0 ),	/* 0 */
/* 442 */	NdrFcShort( 0x7 ),	/* 7 */
/* 444 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 446 */	NdrFcShort( 0x8 ),	/* 8 */
/* 448 */	NdrFcShort( 0x8 ),	/* 8 */
/* 450 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 452 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 454 */	NdrFcShort( 0x1 ),	/* 1 */
/* 456 */	NdrFcShort( 0x1 ),	/* 1 */
/* 458 */	NdrFcShort( 0x0 ),	/* 0 */
/* 460 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dwCount */

/* 462 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 464 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 466 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter phServer */

/* 468 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 470 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 472 */	NdrFcShort( 0xa4 ),	/* Type Offset=164 */

	/* Parameter ppErrors */

/* 474 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 476 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 478 */	NdrFcShort( 0xb0 ),	/* Type Offset=176 */

	/* Return value */

/* 480 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 482 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 484 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ValidateItemIDs */

/* 486 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 488 */	NdrFcLong( 0x0 ),	/* 0 */
/* 492 */	NdrFcShort( 0x8 ),	/* 8 */
/* 494 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 496 */	NdrFcShort( 0x8 ),	/* 8 */
/* 498 */	NdrFcShort( 0x8 ),	/* 8 */
/* 500 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 502 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 504 */	NdrFcShort( 0x1 ),	/* 1 */
/* 506 */	NdrFcShort( 0x1 ),	/* 1 */
/* 508 */	NdrFcShort( 0x0 ),	/* 0 */
/* 510 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dwCount */

/* 512 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 514 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 516 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pszItemID */

/* 518 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 520 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 522 */	NdrFcShort( 0x8a ),	/* Type Offset=138 */

	/* Parameter ppErrors */

/* 524 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 526 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 528 */	NdrFcShort( 0xb0 ),	/* Type Offset=176 */

	/* Return value */

/* 530 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 532 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 534 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateBrowse */

/* 536 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 538 */	NdrFcLong( 0x0 ),	/* 0 */
/* 542 */	NdrFcShort( 0x9 ),	/* 9 */
/* 544 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 546 */	NdrFcShort( 0x8 ),	/* 8 */
/* 548 */	NdrFcShort( 0x8 ),	/* 8 */
/* 550 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 552 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 554 */	NdrFcShort( 0x1 ),	/* 1 */
/* 556 */	NdrFcShort( 0x1 ),	/* 1 */
/* 558 */	NdrFcShort( 0x0 ),	/* 0 */
/* 560 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dwCount */

/* 562 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 564 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 566 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pdwAttrID */

/* 568 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 570 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 572 */	NdrFcShort( 0xa4 ),	/* Type Offset=164 */

	/* Parameter pOperator */

/* 574 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 576 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 578 */	NdrFcShort( 0xbc ),	/* Type Offset=188 */

	/* Parameter vFilter */

/* 580 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 582 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 584 */	NdrFcShort( 0x4a0 ),	/* Type Offset=1184 */

	/* Parameter pphBrowser */

/* 586 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 588 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 590 */	NdrFcShort( 0x4b6 ),	/* Type Offset=1206 */

	/* Parameter ppErrors */

/* 592 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 594 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 596 */	NdrFcShort( 0xb0 ),	/* Type Offset=176 */

	/* Return value */

/* 598 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 600 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 602 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ReadRaw */

/* 604 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 606 */	NdrFcLong( 0x0 ),	/* 0 */
/* 610 */	NdrFcShort( 0x3 ),	/* 3 */
/* 612 */	NdrFcShort( 0x50 ),	/* X64 Stack size/offset = 80 */
/* 614 */	NdrFcShort( 0x18 ),	/* 24 */
/* 616 */	NdrFcShort( 0x8 ),	/* 8 */
/* 618 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x9,		/* 9 */
/* 620 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 622 */	NdrFcShort( 0x1 ),	/* 1 */
/* 624 */	NdrFcShort( 0x1 ),	/* 1 */
/* 626 */	NdrFcShort( 0x0 ),	/* 0 */
/* 628 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter htStartTime */

/* 630 */	NdrFcShort( 0x11b ),	/* Flags:  must size, must free, in, out, simple ref, */
/* 632 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 634 */	NdrFcShort( 0x4d0 ),	/* Type Offset=1232 */

	/* Parameter htEndTime */

/* 636 */	NdrFcShort( 0x11b ),	/* Flags:  must size, must free, in, out, simple ref, */
/* 638 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 640 */	NdrFcShort( 0x4d0 ),	/* Type Offset=1232 */

	/* Parameter dwNumValues */

/* 642 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 644 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 646 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter bBounds */

/* 648 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 650 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 652 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter dwNumItems */

/* 654 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 656 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 658 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter phServer */

/* 660 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 662 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 664 */	NdrFcShort( 0x4e8 ),	/* Type Offset=1256 */

	/* Parameter ppItemValues */

/* 666 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 668 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 670 */	NdrFcShort( 0x4f4 ),	/* Type Offset=1268 */

	/* Parameter ppErrors */

/* 672 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 674 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 676 */	NdrFcShort( 0x574 ),	/* Type Offset=1396 */

	/* Return value */

/* 678 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 680 */	NdrFcShort( 0x48 ),	/* X64 Stack size/offset = 72 */
/* 682 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ReadProcessed */

/* 684 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 686 */	NdrFcLong( 0x0 ),	/* 0 */
/* 690 */	NdrFcShort( 0x4 ),	/* 4 */
/* 692 */	NdrFcShort( 0x50 ),	/* X64 Stack size/offset = 80 */
/* 694 */	NdrFcShort( 0x20 ),	/* 32 */
/* 696 */	NdrFcShort( 0x8 ),	/* 8 */
/* 698 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x9,		/* 9 */
/* 700 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 702 */	NdrFcShort( 0x1 ),	/* 1 */
/* 704 */	NdrFcShort( 0x1 ),	/* 1 */
/* 706 */	NdrFcShort( 0x0 ),	/* 0 */
/* 708 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter htStartTime */

/* 710 */	NdrFcShort( 0x11b ),	/* Flags:  must size, must free, in, out, simple ref, */
/* 712 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 714 */	NdrFcShort( 0x4d0 ),	/* Type Offset=1232 */

	/* Parameter htEndTime */

/* 716 */	NdrFcShort( 0x11b ),	/* Flags:  must size, must free, in, out, simple ref, */
/* 718 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 720 */	NdrFcShort( 0x4d0 ),	/* Type Offset=1232 */

	/* Parameter ftResampleInterval */

/* 722 */	NdrFcShort( 0x8a ),	/* Flags:  must free, in, by val, */
/* 724 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 726 */	NdrFcShort( 0x7a ),	/* Type Offset=122 */

	/* Parameter dwNumItems */

/* 728 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 730 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 732 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter phServer */

/* 734 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 736 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 738 */	NdrFcShort( 0x580 ),	/* Type Offset=1408 */

	/* Parameter haAggregate */

/* 740 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 742 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 744 */	NdrFcShort( 0x580 ),	/* Type Offset=1408 */

	/* Parameter ppItemValues */

/* 746 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 748 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 750 */	NdrFcShort( 0x58c ),	/* Type Offset=1420 */

	/* Parameter ppErrors */

/* 752 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 754 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 756 */	NdrFcShort( 0x5aa ),	/* Type Offset=1450 */

	/* Return value */

/* 758 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 760 */	NdrFcShort( 0x48 ),	/* X64 Stack size/offset = 72 */
/* 762 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ReadAtTime */

/* 764 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 766 */	NdrFcLong( 0x0 ),	/* 0 */
/* 770 */	NdrFcShort( 0x5 ),	/* 5 */
/* 772 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 774 */	NdrFcShort( 0x10 ),	/* 16 */
/* 776 */	NdrFcShort( 0x8 ),	/* 8 */
/* 778 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 780 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 782 */	NdrFcShort( 0x1 ),	/* 1 */
/* 784 */	NdrFcShort( 0x1 ),	/* 1 */
/* 786 */	NdrFcShort( 0x0 ),	/* 0 */
/* 788 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dwNumTimeStamps */

/* 790 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 792 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 794 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ftTimeStamps */

/* 796 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 798 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 800 */	NdrFcShort( 0x5b6 ),	/* Type Offset=1462 */

	/* Parameter dwNumItems */

/* 802 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 804 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 806 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter phServer */

/* 808 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 810 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 812 */	NdrFcShort( 0x5d0 ),	/* Type Offset=1488 */

	/* Parameter ppItemValues */

/* 814 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 816 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 818 */	NdrFcShort( 0x5dc ),	/* Type Offset=1500 */

	/* Parameter ppErrors */

/* 820 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 822 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 824 */	NdrFcShort( 0x5fa ),	/* Type Offset=1530 */

	/* Return value */

/* 826 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 828 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 830 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ReadModified */

/* 832 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 834 */	NdrFcLong( 0x0 ),	/* 0 */
/* 838 */	NdrFcShort( 0x6 ),	/* 6 */
/* 840 */	NdrFcShort( 0x48 ),	/* X64 Stack size/offset = 72 */
/* 842 */	NdrFcShort( 0x10 ),	/* 16 */
/* 844 */	NdrFcShort( 0x8 ),	/* 8 */
/* 846 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x8,		/* 8 */
/* 848 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 850 */	NdrFcShort( 0x1 ),	/* 1 */
/* 852 */	NdrFcShort( 0x1 ),	/* 1 */
/* 854 */	NdrFcShort( 0x0 ),	/* 0 */
/* 856 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter htStartTime */

/* 858 */	NdrFcShort( 0x11b ),	/* Flags:  must size, must free, in, out, simple ref, */
/* 860 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 862 */	NdrFcShort( 0x4d0 ),	/* Type Offset=1232 */

	/* Parameter htEndTime */

/* 864 */	NdrFcShort( 0x11b ),	/* Flags:  must size, must free, in, out, simple ref, */
/* 866 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 868 */	NdrFcShort( 0x4d0 ),	/* Type Offset=1232 */

	/* Parameter dwNumValues */

/* 870 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 872 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 874 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter dwNumItems */

/* 876 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 878 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 880 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter phServer */

/* 882 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 884 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 886 */	NdrFcShort( 0x580 ),	/* Type Offset=1408 */

	/* Parameter ppItemValues */

/* 888 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 890 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 892 */	NdrFcShort( 0x602 ),	/* Type Offset=1538 */

	/* Parameter ppErrors */

/* 894 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 896 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 898 */	NdrFcShort( 0x5aa ),	/* Type Offset=1450 */

	/* Return value */

/* 900 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 902 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 904 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ReadAttribute */

/* 906 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 908 */	NdrFcLong( 0x0 ),	/* 0 */
/* 912 */	NdrFcShort( 0x7 ),	/* 7 */
/* 914 */	NdrFcShort( 0x48 ),	/* X64 Stack size/offset = 72 */
/* 916 */	NdrFcShort( 0x10 ),	/* 16 */
/* 918 */	NdrFcShort( 0x8 ),	/* 8 */
/* 920 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x8,		/* 8 */
/* 922 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 924 */	NdrFcShort( 0x1 ),	/* 1 */
/* 926 */	NdrFcShort( 0x1 ),	/* 1 */
/* 928 */	NdrFcShort( 0x0 ),	/* 0 */
/* 930 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter htStartTime */

/* 932 */	NdrFcShort( 0x11b ),	/* Flags:  must size, must free, in, out, simple ref, */
/* 934 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 936 */	NdrFcShort( 0x4d0 ),	/* Type Offset=1232 */

	/* Parameter htEndTime */

/* 938 */	NdrFcShort( 0x11b ),	/* Flags:  must size, must free, in, out, simple ref, */
/* 940 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 942 */	NdrFcShort( 0x4d0 ),	/* Type Offset=1232 */

	/* Parameter hServer */

/* 944 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 946 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 948 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter dwNumAttributes */

/* 950 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 952 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 954 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pdwAttributeIDs */

/* 956 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 958 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 960 */	NdrFcShort( 0x580 ),	/* Type Offset=1408 */

	/* Parameter ppAttributeValues */

/* 962 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 964 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 966 */	NdrFcShort( 0x6aa ),	/* Type Offset=1706 */

	/* Parameter ppErrors */

/* 968 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 970 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 972 */	NdrFcShort( 0x5aa ),	/* Type Offset=1450 */

	/* Return value */

/* 974 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 976 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 978 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure QueryCapabilities */


	/* Procedure QueryCapabilities */


	/* Procedure QueryCapabilities */


	/* Procedure QueryCapabilities */

/* 980 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 982 */	NdrFcLong( 0x0 ),	/* 0 */
/* 986 */	NdrFcShort( 0x3 ),	/* 3 */
/* 988 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 990 */	NdrFcShort( 0x0 ),	/* 0 */
/* 992 */	NdrFcShort( 0x22 ),	/* 34 */
/* 994 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 996 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 998 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1000 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1002 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1004 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pCapabilities */


	/* Parameter pCapabilities */


	/* Parameter pCapabilities */


	/* Parameter pCapabilities */

/* 1006 */	NdrFcShort( 0x2010 ),	/* Flags:  out, srv alloc size=8 */
/* 1008 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1010 */	NdrFcShort( 0x6e ),	/* Type Offset=110 */

	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */

/* 1012 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1014 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1016 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Insert */

/* 1018 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1020 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1024 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1026 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 1028 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1030 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1032 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 1034 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 1036 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1038 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1040 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1042 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dwNumItems */

/* 1044 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1046 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1048 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter phServer */

/* 1050 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1052 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1054 */	NdrFcShort( 0xa4 ),	/* Type Offset=164 */

	/* Parameter ftTimeStamps */

/* 1056 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1058 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1060 */	NdrFcShort( 0x5b6 ),	/* Type Offset=1462 */

	/* Parameter vDataValues */

/* 1062 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1064 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1066 */	NdrFcShort( 0x4a0 ),	/* Type Offset=1184 */

	/* Parameter pdwQualities */

/* 1068 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1070 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 1072 */	NdrFcShort( 0xa4 ),	/* Type Offset=164 */

	/* Parameter ppErrors */

/* 1074 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 1076 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 1078 */	NdrFcShort( 0xb0 ),	/* Type Offset=176 */

	/* Return value */

/* 1080 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1082 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 1084 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Replace */

/* 1086 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1088 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1092 */	NdrFcShort( 0x5 ),	/* 5 */
/* 1094 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 1096 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1098 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1100 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 1102 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 1104 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1106 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1108 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1110 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dwNumItems */

/* 1112 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1114 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1116 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter phServer */

/* 1118 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1120 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1122 */	NdrFcShort( 0xa4 ),	/* Type Offset=164 */

	/* Parameter ftTimeStamps */

/* 1124 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1126 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1128 */	NdrFcShort( 0x5b6 ),	/* Type Offset=1462 */

	/* Parameter vDataValues */

/* 1130 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1132 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1134 */	NdrFcShort( 0x4a0 ),	/* Type Offset=1184 */

	/* Parameter pdwQualities */

/* 1136 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1138 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 1140 */	NdrFcShort( 0xa4 ),	/* Type Offset=164 */

	/* Parameter ppErrors */

/* 1142 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 1144 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 1146 */	NdrFcShort( 0xb0 ),	/* Type Offset=176 */

	/* Return value */

/* 1148 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1150 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 1152 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure InsertReplace */

/* 1154 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1156 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1160 */	NdrFcShort( 0x6 ),	/* 6 */
/* 1162 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 1164 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1166 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1168 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 1170 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 1172 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1174 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1176 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1178 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dwNumItems */

/* 1180 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1182 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1184 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter phServer */

/* 1186 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1188 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1190 */	NdrFcShort( 0xa4 ),	/* Type Offset=164 */

	/* Parameter ftTimeStamps */

/* 1192 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1194 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1196 */	NdrFcShort( 0x5b6 ),	/* Type Offset=1462 */

	/* Parameter vDataValues */

/* 1198 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1200 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1202 */	NdrFcShort( 0x4a0 ),	/* Type Offset=1184 */

	/* Parameter pdwQualities */

/* 1204 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1206 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 1208 */	NdrFcShort( 0xa4 ),	/* Type Offset=164 */

	/* Parameter ppErrors */

/* 1210 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 1212 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 1214 */	NdrFcShort( 0xb0 ),	/* Type Offset=176 */

	/* Return value */

/* 1216 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1218 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 1220 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DeleteRaw */

/* 1222 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1224 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1228 */	NdrFcShort( 0x7 ),	/* 7 */
/* 1230 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 1232 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1234 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1236 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 1238 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 1240 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1242 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1244 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1246 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter htStartTime */

/* 1248 */	NdrFcShort( 0x11b ),	/* Flags:  must size, must free, in, out, simple ref, */
/* 1250 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1252 */	NdrFcShort( 0x4d0 ),	/* Type Offset=1232 */

	/* Parameter htEndTime */

/* 1254 */	NdrFcShort( 0x11b ),	/* Flags:  must size, must free, in, out, simple ref, */
/* 1256 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1258 */	NdrFcShort( 0x4d0 ),	/* Type Offset=1232 */

	/* Parameter dwNumItems */

/* 1260 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1262 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1264 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter phServer */

/* 1266 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1268 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1270 */	NdrFcShort( 0x5d0 ),	/* Type Offset=1488 */

	/* Parameter ppErrors */

/* 1272 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 1274 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 1276 */	NdrFcShort( 0x5fa ),	/* Type Offset=1530 */

	/* Return value */

/* 1278 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1280 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 1282 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DeleteAtTime */

/* 1284 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1286 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1290 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1292 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 1294 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1296 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1298 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 1300 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 1302 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1304 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1306 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1308 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dwNumItems */

/* 1310 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1312 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1314 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter phServer */

/* 1316 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1318 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1320 */	NdrFcShort( 0xa4 ),	/* Type Offset=164 */

	/* Parameter ftTimeStamps */

/* 1322 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1324 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1326 */	NdrFcShort( 0x5b6 ),	/* Type Offset=1462 */

	/* Parameter ppErrors */

/* 1328 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 1330 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1332 */	NdrFcShort( 0xb0 ),	/* Type Offset=176 */

	/* Return value */

/* 1334 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1336 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 1338 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Read */

/* 1340 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1342 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1346 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1348 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 1350 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1352 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1354 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 1356 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 1358 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1360 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1362 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1364 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter htStartTime */

/* 1366 */	NdrFcShort( 0x11b ),	/* Flags:  must size, must free, in, out, simple ref, */
/* 1368 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1370 */	NdrFcShort( 0x4d0 ),	/* Type Offset=1232 */

	/* Parameter htEndTime */

/* 1372 */	NdrFcShort( 0x11b ),	/* Flags:  must size, must free, in, out, simple ref, */
/* 1374 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1376 */	NdrFcShort( 0x4d0 ),	/* Type Offset=1232 */

	/* Parameter dwNumItems */

/* 1378 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1380 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1382 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter phServer */

/* 1384 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1386 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1388 */	NdrFcShort( 0x5d0 ),	/* Type Offset=1488 */

	/* Parameter ppAnnotationValues */

/* 1390 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 1392 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 1394 */	NdrFcShort( 0x6e0 ),	/* Type Offset=1760 */

	/* Parameter ppErrors */

/* 1396 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 1398 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 1400 */	NdrFcShort( 0x5fa ),	/* Type Offset=1530 */

	/* Return value */

/* 1402 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1404 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 1406 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Insert */

/* 1408 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1410 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1414 */	NdrFcShort( 0x5 ),	/* 5 */
/* 1416 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 1418 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1420 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1422 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 1424 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 1426 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1428 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1430 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1432 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dwNumItems */

/* 1434 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1436 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1438 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter phServer */

/* 1440 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1442 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1444 */	NdrFcShort( 0xa4 ),	/* Type Offset=164 */

	/* Parameter ftTimeStamps */

/* 1446 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1448 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1450 */	NdrFcShort( 0x5b6 ),	/* Type Offset=1462 */

	/* Parameter pAnnotationValues */

/* 1452 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1454 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1456 */	NdrFcShort( 0x722 ),	/* Type Offset=1826 */

	/* Parameter ppErrors */

/* 1458 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 1460 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 1462 */	NdrFcShort( 0xb0 ),	/* Type Offset=176 */

	/* Return value */

/* 1464 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1466 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 1468 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ReadRaw */

/* 1470 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1472 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1476 */	NdrFcShort( 0x3 ),	/* 3 */
/* 1478 */	NdrFcShort( 0x58 ),	/* X64 Stack size/offset = 88 */
/* 1480 */	NdrFcShort( 0x20 ),	/* 32 */
/* 1482 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1484 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0xa,		/* 10 */
/* 1486 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 1488 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1490 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1492 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1494 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dwTransactionID */

/* 1496 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1498 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1500 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter htStartTime */

/* 1502 */	NdrFcShort( 0x11b ),	/* Flags:  must size, must free, in, out, simple ref, */
/* 1504 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1506 */	NdrFcShort( 0x4d0 ),	/* Type Offset=1232 */

	/* Parameter htEndTime */

/* 1508 */	NdrFcShort( 0x11b ),	/* Flags:  must size, must free, in, out, simple ref, */
/* 1510 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1512 */	NdrFcShort( 0x4d0 ),	/* Type Offset=1232 */

	/* Parameter dwNumValues */

/* 1514 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1516 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1518 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter bBounds */

/* 1520 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1522 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 1524 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter dwNumItems */

/* 1526 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1528 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 1530 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter phServer */

/* 1532 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1534 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 1536 */	NdrFcShort( 0x73c ),	/* Type Offset=1852 */

	/* Parameter pdwCancelID */

/* 1538 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1540 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 1542 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppErrors */

/* 1544 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 1546 */	NdrFcShort( 0x48 ),	/* X64 Stack size/offset = 72 */
/* 1548 */	NdrFcShort( 0x748 ),	/* Type Offset=1864 */

	/* Return value */

/* 1550 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1552 */	NdrFcShort( 0x50 ),	/* X64 Stack size/offset = 80 */
/* 1554 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure AdviseRaw */

/* 1556 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1558 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1562 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1564 */	NdrFcShort( 0x48 ),	/* X64 Stack size/offset = 72 */
/* 1566 */	NdrFcShort( 0x28 ),	/* 40 */
/* 1568 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1570 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x8,		/* 8 */
/* 1572 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 1574 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1576 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1578 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1580 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dwTransactionID */

/* 1582 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1584 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1586 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter htStartTime */

/* 1588 */	NdrFcShort( 0x11b ),	/* Flags:  must size, must free, in, out, simple ref, */
/* 1590 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1592 */	NdrFcShort( 0x4d0 ),	/* Type Offset=1232 */

	/* Parameter ftUpdateInterval */

/* 1594 */	NdrFcShort( 0x8a ),	/* Flags:  must free, in, by val, */
/* 1596 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1598 */	NdrFcShort( 0x7a ),	/* Type Offset=122 */

	/* Parameter dwNumItems */

/* 1600 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1602 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1604 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter phServer */

/* 1606 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1608 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 1610 */	NdrFcShort( 0x580 ),	/* Type Offset=1408 */

	/* Parameter pdwCancelID */

/* 1612 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1614 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 1616 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppErrors */

/* 1618 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 1620 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 1622 */	NdrFcShort( 0x5aa ),	/* Type Offset=1450 */

	/* Return value */

/* 1624 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1626 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 1628 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ReadProcessed */

/* 1630 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1632 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1636 */	NdrFcShort( 0x5 ),	/* 5 */
/* 1638 */	NdrFcShort( 0x58 ),	/* X64 Stack size/offset = 88 */
/* 1640 */	NdrFcShort( 0x28 ),	/* 40 */
/* 1642 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1644 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0xa,		/* 10 */
/* 1646 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 1648 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1650 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1652 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1654 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dwTransactionID */

/* 1656 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1658 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1660 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter htStartTime */

/* 1662 */	NdrFcShort( 0x11b ),	/* Flags:  must size, must free, in, out, simple ref, */
/* 1664 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1666 */	NdrFcShort( 0x4d0 ),	/* Type Offset=1232 */

	/* Parameter htEndTime */

/* 1668 */	NdrFcShort( 0x11b ),	/* Flags:  must size, must free, in, out, simple ref, */
/* 1670 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1672 */	NdrFcShort( 0x4d0 ),	/* Type Offset=1232 */

	/* Parameter ftResampleInterval */

/* 1674 */	NdrFcShort( 0x8a ),	/* Flags:  must free, in, by val, */
/* 1676 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1678 */	NdrFcShort( 0x7a ),	/* Type Offset=122 */

	/* Parameter dwNumItems */

/* 1680 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1682 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 1684 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter phServer */

/* 1686 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1688 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 1690 */	NdrFcShort( 0x4e8 ),	/* Type Offset=1256 */

	/* Parameter haAggregate */

/* 1692 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1694 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 1696 */	NdrFcShort( 0x4e8 ),	/* Type Offset=1256 */

	/* Parameter pdwCancelID */

/* 1698 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1700 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 1702 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppErrors */

/* 1704 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 1706 */	NdrFcShort( 0x48 ),	/* X64 Stack size/offset = 72 */
/* 1708 */	NdrFcShort( 0x574 ),	/* Type Offset=1396 */

	/* Return value */

/* 1710 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1712 */	NdrFcShort( 0x50 ),	/* X64 Stack size/offset = 80 */
/* 1714 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure AdviseProcessed */

/* 1716 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1718 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1722 */	NdrFcShort( 0x6 ),	/* 6 */
/* 1724 */	NdrFcShort( 0x58 ),	/* X64 Stack size/offset = 88 */
/* 1726 */	NdrFcShort( 0x30 ),	/* 48 */
/* 1728 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1730 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0xa,		/* 10 */
/* 1732 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 1734 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1736 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1738 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1740 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dwTransactionID */

/* 1742 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1744 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1746 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter htStartTime */

/* 1748 */	NdrFcShort( 0x11b ),	/* Flags:  must size, must free, in, out, simple ref, */
/* 1750 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1752 */	NdrFcShort( 0x4d0 ),	/* Type Offset=1232 */

	/* Parameter ftResampleInterval */

/* 1754 */	NdrFcShort( 0x8a ),	/* Flags:  must free, in, by val, */
/* 1756 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1758 */	NdrFcShort( 0x7a ),	/* Type Offset=122 */

	/* Parameter dwNumItems */

/* 1760 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1762 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1764 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter phServer */

/* 1766 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1768 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 1770 */	NdrFcShort( 0x580 ),	/* Type Offset=1408 */

	/* Parameter haAggregate */

/* 1772 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1774 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 1776 */	NdrFcShort( 0x580 ),	/* Type Offset=1408 */

	/* Parameter dwNumIntervals */

/* 1778 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1780 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 1782 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pdwCancelID */

/* 1784 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1786 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 1788 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppErrors */

/* 1790 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 1792 */	NdrFcShort( 0x48 ),	/* X64 Stack size/offset = 72 */
/* 1794 */	NdrFcShort( 0x5aa ),	/* Type Offset=1450 */

	/* Return value */

/* 1796 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1798 */	NdrFcShort( 0x50 ),	/* X64 Stack size/offset = 80 */
/* 1800 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ReadAtTime */

/* 1802 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1804 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1808 */	NdrFcShort( 0x7 ),	/* 7 */
/* 1810 */	NdrFcShort( 0x48 ),	/* X64 Stack size/offset = 72 */
/* 1812 */	NdrFcShort( 0x18 ),	/* 24 */
/* 1814 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1816 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x8,		/* 8 */
/* 1818 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 1820 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1822 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1824 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1826 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dwTransactionID */

/* 1828 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1830 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1832 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter dwNumTimeStamps */

/* 1834 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1836 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1838 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ftTimeStamps */

/* 1840 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1842 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1844 */	NdrFcShort( 0x754 ),	/* Type Offset=1876 */

	/* Parameter dwNumItems */

/* 1846 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1848 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1850 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter phServer */

/* 1852 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1854 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 1856 */	NdrFcShort( 0x580 ),	/* Type Offset=1408 */

	/* Parameter pdwCancelID */

/* 1858 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1860 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 1862 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppErrors */

/* 1864 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 1866 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 1868 */	NdrFcShort( 0x5aa ),	/* Type Offset=1450 */

	/* Return value */

/* 1870 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1872 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 1874 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ReadModified */

/* 1876 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1878 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1882 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1884 */	NdrFcShort( 0x50 ),	/* X64 Stack size/offset = 80 */
/* 1886 */	NdrFcShort( 0x18 ),	/* 24 */
/* 1888 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1890 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x9,		/* 9 */
/* 1892 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 1894 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1896 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1898 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1900 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dwTransactionID */

/* 1902 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1904 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1906 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter htStartTime */

/* 1908 */	NdrFcShort( 0x11b ),	/* Flags:  must size, must free, in, out, simple ref, */
/* 1910 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1912 */	NdrFcShort( 0x4d0 ),	/* Type Offset=1232 */

	/* Parameter htEndTime */

/* 1914 */	NdrFcShort( 0x11b ),	/* Flags:  must size, must free, in, out, simple ref, */
/* 1916 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1918 */	NdrFcShort( 0x4d0 ),	/* Type Offset=1232 */

	/* Parameter dwNumValues */

/* 1920 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1922 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1924 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter dwNumItems */

/* 1926 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1928 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 1930 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter phServer */

/* 1932 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1934 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 1936 */	NdrFcShort( 0x4e8 ),	/* Type Offset=1256 */

	/* Parameter pdwCancelID */

/* 1938 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1940 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 1942 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppErrors */

/* 1944 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 1946 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 1948 */	NdrFcShort( 0x574 ),	/* Type Offset=1396 */

	/* Return value */

/* 1950 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1952 */	NdrFcShort( 0x48 ),	/* X64 Stack size/offset = 72 */
/* 1954 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ReadAttribute */

/* 1956 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1958 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1962 */	NdrFcShort( 0x9 ),	/* 9 */
/* 1964 */	NdrFcShort( 0x50 ),	/* X64 Stack size/offset = 80 */
/* 1966 */	NdrFcShort( 0x18 ),	/* 24 */
/* 1968 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1970 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x9,		/* 9 */
/* 1972 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 1974 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1976 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1978 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1980 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dwTransactionID */

/* 1982 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1984 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1986 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter htStartTime */

/* 1988 */	NdrFcShort( 0x11b ),	/* Flags:  must size, must free, in, out, simple ref, */
/* 1990 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1992 */	NdrFcShort( 0x4d0 ),	/* Type Offset=1232 */

	/* Parameter htEndTime */

/* 1994 */	NdrFcShort( 0x11b ),	/* Flags:  must size, must free, in, out, simple ref, */
/* 1996 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1998 */	NdrFcShort( 0x4d0 ),	/* Type Offset=1232 */

	/* Parameter hServer */

/* 2000 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2002 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2004 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter dwNumAttributes */

/* 2006 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2008 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 2010 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter dwAttributeIDs */

/* 2012 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2014 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 2016 */	NdrFcShort( 0x4e8 ),	/* Type Offset=1256 */

	/* Parameter pdwCancelID */

/* 2018 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2020 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 2022 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppErrors */

/* 2024 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 2026 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 2028 */	NdrFcShort( 0x574 ),	/* Type Offset=1396 */

	/* Return value */

/* 2030 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2032 */	NdrFcShort( 0x48 ),	/* X64 Stack size/offset = 72 */
/* 2034 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Cancel */

/* 2036 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2038 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2042 */	NdrFcShort( 0xa ),	/* 10 */
/* 2044 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2046 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2048 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2050 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2052 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2054 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2056 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2058 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2060 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dwCancelID */

/* 2062 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2064 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2066 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2068 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2070 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2072 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Insert */

/* 2074 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2076 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2080 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2082 */	NdrFcShort( 0x50 ),	/* X64 Stack size/offset = 80 */
/* 2084 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2086 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2088 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x9,		/* 9 */
/* 2090 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 2092 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2094 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2096 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2098 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dwTransactionID */

/* 2100 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2102 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2104 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter dwNumItems */

/* 2106 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2108 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2110 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter phServer */

/* 2112 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2114 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2116 */	NdrFcShort( 0x76e ),	/* Type Offset=1902 */

	/* Parameter ftTimeStamps */

/* 2118 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2120 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2122 */	NdrFcShort( 0x754 ),	/* Type Offset=1876 */

	/* Parameter vDataValues */

/* 2124 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2126 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 2128 */	NdrFcShort( 0x77e ),	/* Type Offset=1918 */

	/* Parameter pdwQualities */

/* 2130 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2132 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 2134 */	NdrFcShort( 0x76e ),	/* Type Offset=1902 */

	/* Parameter pdwCancelID */

/* 2136 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2138 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 2140 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppErrors */

/* 2142 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 2144 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 2146 */	NdrFcShort( 0x794 ),	/* Type Offset=1940 */

	/* Return value */

/* 2148 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2150 */	NdrFcShort( 0x48 ),	/* X64 Stack size/offset = 72 */
/* 2152 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Replace */

/* 2154 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2156 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2160 */	NdrFcShort( 0x5 ),	/* 5 */
/* 2162 */	NdrFcShort( 0x50 ),	/* X64 Stack size/offset = 80 */
/* 2164 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2166 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2168 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x9,		/* 9 */
/* 2170 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 2172 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2174 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2176 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2178 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dwTransactionID */

/* 2180 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2182 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2184 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter dwNumItems */

/* 2186 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2188 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2190 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter phServer */

/* 2192 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2194 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2196 */	NdrFcShort( 0x76e ),	/* Type Offset=1902 */

	/* Parameter ftTimeStamps */

/* 2198 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2200 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2202 */	NdrFcShort( 0x754 ),	/* Type Offset=1876 */

	/* Parameter vDataValues */

/* 2204 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2206 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 2208 */	NdrFcShort( 0x77e ),	/* Type Offset=1918 */

	/* Parameter pdwQualities */

/* 2210 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2212 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 2214 */	NdrFcShort( 0x76e ),	/* Type Offset=1902 */

	/* Parameter pdwCancelID */

/* 2216 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2218 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 2220 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppErrors */

/* 2222 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 2224 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 2226 */	NdrFcShort( 0x794 ),	/* Type Offset=1940 */

	/* Return value */

/* 2228 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2230 */	NdrFcShort( 0x48 ),	/* X64 Stack size/offset = 72 */
/* 2232 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure InsertReplace */

/* 2234 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2236 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2240 */	NdrFcShort( 0x6 ),	/* 6 */
/* 2242 */	NdrFcShort( 0x50 ),	/* X64 Stack size/offset = 80 */
/* 2244 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2246 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2248 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x9,		/* 9 */
/* 2250 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 2252 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2254 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2256 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2258 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dwTransactionID */

/* 2260 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2262 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2264 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter dwNumItems */

/* 2266 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2268 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2270 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter phServer */

/* 2272 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2274 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2276 */	NdrFcShort( 0x76e ),	/* Type Offset=1902 */

	/* Parameter ftTimeStamps */

/* 2278 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2280 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2282 */	NdrFcShort( 0x754 ),	/* Type Offset=1876 */

	/* Parameter vDataValues */

/* 2284 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2286 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 2288 */	NdrFcShort( 0x77e ),	/* Type Offset=1918 */

	/* Parameter pdwQualities */

/* 2290 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2292 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 2294 */	NdrFcShort( 0x76e ),	/* Type Offset=1902 */

	/* Parameter pdwCancelID */

/* 2296 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2298 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 2300 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppErrors */

/* 2302 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 2304 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 2306 */	NdrFcShort( 0x794 ),	/* Type Offset=1940 */

	/* Return value */

/* 2308 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2310 */	NdrFcShort( 0x48 ),	/* X64 Stack size/offset = 72 */
/* 2312 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DeleteRaw */

/* 2314 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2316 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2320 */	NdrFcShort( 0x7 ),	/* 7 */
/* 2322 */	NdrFcShort( 0x48 ),	/* X64 Stack size/offset = 72 */
/* 2324 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2326 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2328 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x8,		/* 8 */
/* 2330 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 2332 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2334 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2336 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2338 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dwTransactionID */

/* 2340 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2342 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2344 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter htStartTime */

/* 2346 */	NdrFcShort( 0x11b ),	/* Flags:  must size, must free, in, out, simple ref, */
/* 2348 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2350 */	NdrFcShort( 0x4d0 ),	/* Type Offset=1232 */

	/* Parameter htEndTime */

/* 2352 */	NdrFcShort( 0x11b ),	/* Flags:  must size, must free, in, out, simple ref, */
/* 2354 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2356 */	NdrFcShort( 0x4d0 ),	/* Type Offset=1232 */

	/* Parameter dwNumItems */

/* 2358 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2360 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2362 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter phServer */

/* 2364 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2366 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 2368 */	NdrFcShort( 0x580 ),	/* Type Offset=1408 */

	/* Parameter pdwCancelID */

/* 2370 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2372 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 2374 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppErrors */

/* 2376 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 2378 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 2380 */	NdrFcShort( 0x5aa ),	/* Type Offset=1450 */

	/* Return value */

/* 2382 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2384 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 2386 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DeleteAtTime */

/* 2388 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2390 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2394 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2396 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 2398 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2400 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2402 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 2404 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 2406 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2408 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2410 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2412 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dwTransactionID */

/* 2414 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2416 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2418 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter dwNumItems */

/* 2420 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2422 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2424 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter phServer */

/* 2426 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2428 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2430 */	NdrFcShort( 0x76e ),	/* Type Offset=1902 */

	/* Parameter ftTimeStamps */

/* 2432 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2434 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2436 */	NdrFcShort( 0x754 ),	/* Type Offset=1876 */

	/* Parameter pdwCancelID */

/* 2438 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2440 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 2442 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppErrors */

/* 2444 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 2446 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 2448 */	NdrFcShort( 0x794 ),	/* Type Offset=1940 */

	/* Return value */

/* 2450 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2452 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 2454 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Cancel */

/* 2456 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2458 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2462 */	NdrFcShort( 0x9 ),	/* 9 */
/* 2464 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2466 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2468 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2470 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2472 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2474 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2476 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2478 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2480 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dwCancelID */

/* 2482 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2484 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2486 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2488 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2490 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2492 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Read */

/* 2494 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2496 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2500 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2502 */	NdrFcShort( 0x48 ),	/* X64 Stack size/offset = 72 */
/* 2504 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2506 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2508 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x8,		/* 8 */
/* 2510 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 2512 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2514 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2516 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2518 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dwTransactionID */

/* 2520 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2522 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2524 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter htStartTime */

/* 2526 */	NdrFcShort( 0x11b ),	/* Flags:  must size, must free, in, out, simple ref, */
/* 2528 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2530 */	NdrFcShort( 0x4d0 ),	/* Type Offset=1232 */

	/* Parameter htEndTime */

/* 2532 */	NdrFcShort( 0x11b ),	/* Flags:  must size, must free, in, out, simple ref, */
/* 2534 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2536 */	NdrFcShort( 0x4d0 ),	/* Type Offset=1232 */

	/* Parameter dwNumItems */

/* 2538 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2540 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2542 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter phServer */

/* 2544 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2546 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 2548 */	NdrFcShort( 0x580 ),	/* Type Offset=1408 */

	/* Parameter pdwCancelID */

/* 2550 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2552 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 2554 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppErrors */

/* 2556 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 2558 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 2560 */	NdrFcShort( 0x5aa ),	/* Type Offset=1450 */

	/* Return value */

/* 2562 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2564 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 2566 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Insert */

/* 2568 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2570 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2574 */	NdrFcShort( 0x5 ),	/* 5 */
/* 2576 */	NdrFcShort( 0x48 ),	/* X64 Stack size/offset = 72 */
/* 2578 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2580 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2582 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x8,		/* 8 */
/* 2584 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 2586 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2588 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2590 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2592 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dwTransactionID */

/* 2594 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2596 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2598 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter dwNumItems */

/* 2600 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2602 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2604 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter phServer */

/* 2606 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2608 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2610 */	NdrFcShort( 0x76e ),	/* Type Offset=1902 */

	/* Parameter ftTimeStamps */

/* 2612 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2614 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2616 */	NdrFcShort( 0x754 ),	/* Type Offset=1876 */

	/* Parameter pAnnotationValues */

/* 2618 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2620 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 2622 */	NdrFcShort( 0x7a0 ),	/* Type Offset=1952 */

	/* Parameter pdwCancelID */

/* 2624 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2626 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 2628 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppErrors */

/* 2630 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 2632 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 2634 */	NdrFcShort( 0x794 ),	/* Type Offset=1940 */

	/* Return value */

/* 2636 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2638 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 2640 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Cancel */

/* 2642 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2644 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2648 */	NdrFcShort( 0x6 ),	/* 6 */
/* 2650 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2652 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2654 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2656 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2658 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2660 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2662 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2664 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2666 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dwCancelID */

/* 2668 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2670 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2672 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2674 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2676 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2678 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ReadRawWithUpdate */

/* 2680 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2682 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2686 */	NdrFcShort( 0x3 ),	/* 3 */
/* 2688 */	NdrFcShort( 0x60 ),	/* X64 Stack size/offset = 96 */
/* 2690 */	NdrFcShort( 0x48 ),	/* 72 */
/* 2692 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2694 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0xb,		/* 11 */
/* 2696 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 2698 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2700 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2702 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2704 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dwTransactionID */

/* 2706 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2708 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2710 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter htStartTime */

/* 2712 */	NdrFcShort( 0x11b ),	/* Flags:  must size, must free, in, out, simple ref, */
/* 2714 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2716 */	NdrFcShort( 0x4d0 ),	/* Type Offset=1232 */

	/* Parameter htEndTime */

/* 2718 */	NdrFcShort( 0x11b ),	/* Flags:  must size, must free, in, out, simple ref, */
/* 2720 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2722 */	NdrFcShort( 0x4d0 ),	/* Type Offset=1232 */

	/* Parameter dwNumValues */

/* 2724 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2726 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2728 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ftUpdateDuration */

/* 2730 */	NdrFcShort( 0x8a ),	/* Flags:  must free, in, by val, */
/* 2732 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 2734 */	NdrFcShort( 0x7a ),	/* Type Offset=122 */

	/* Parameter ftUpdateInterval */

/* 2736 */	NdrFcShort( 0x8a ),	/* Flags:  must free, in, by val, */
/* 2738 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 2740 */	NdrFcShort( 0x7a ),	/* Type Offset=122 */

	/* Parameter dwNumItems */

/* 2742 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2744 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 2746 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter phServer */

/* 2748 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2750 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 2752 */	NdrFcShort( 0x7ba ),	/* Type Offset=1978 */

	/* Parameter pdwCancelID */

/* 2754 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2756 */	NdrFcShort( 0x48 ),	/* X64 Stack size/offset = 72 */
/* 2758 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppErrors */

/* 2760 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 2762 */	NdrFcShort( 0x50 ),	/* X64 Stack size/offset = 80 */
/* 2764 */	NdrFcShort( 0x7c6 ),	/* Type Offset=1990 */

	/* Return value */

/* 2766 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2768 */	NdrFcShort( 0x58 ),	/* X64 Stack size/offset = 88 */
/* 2770 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ReadProcessedWithUpdate */

/* 2772 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2774 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2778 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2780 */	NdrFcShort( 0x68 ),	/* X64 Stack size/offset = 104 */
/* 2782 */	NdrFcShort( 0x48 ),	/* 72 */
/* 2784 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2786 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0xc,		/* 12 */
/* 2788 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 2790 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2792 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2794 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2796 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dwTransactionID */

/* 2798 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2800 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2802 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter htStartTime */

/* 2804 */	NdrFcShort( 0x11b ),	/* Flags:  must size, must free, in, out, simple ref, */
/* 2806 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2808 */	NdrFcShort( 0x4d0 ),	/* Type Offset=1232 */

	/* Parameter htEndTime */

/* 2810 */	NdrFcShort( 0x11b ),	/* Flags:  must size, must free, in, out, simple ref, */
/* 2812 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2814 */	NdrFcShort( 0x4d0 ),	/* Type Offset=1232 */

	/* Parameter ftResampleInterval */

/* 2816 */	NdrFcShort( 0x8a ),	/* Flags:  must free, in, by val, */
/* 2818 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2820 */	NdrFcShort( 0x7a ),	/* Type Offset=122 */

	/* Parameter dwNumIntervals */

/* 2822 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2824 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 2826 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ftUpdateInterval */

/* 2828 */	NdrFcShort( 0x8a ),	/* Flags:  must free, in, by val, */
/* 2830 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 2832 */	NdrFcShort( 0x7a ),	/* Type Offset=122 */

	/* Parameter dwNumItems */

/* 2834 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2836 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 2838 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter phServer */

/* 2840 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2842 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 2844 */	NdrFcShort( 0x7ba ),	/* Type Offset=1978 */

	/* Parameter haAggregate */

/* 2846 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2848 */	NdrFcShort( 0x48 ),	/* X64 Stack size/offset = 72 */
/* 2850 */	NdrFcShort( 0x7ba ),	/* Type Offset=1978 */

	/* Parameter pdwCancelID */

/* 2852 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2854 */	NdrFcShort( 0x50 ),	/* X64 Stack size/offset = 80 */
/* 2856 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppErrors */

/* 2858 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 2860 */	NdrFcShort( 0x58 ),	/* X64 Stack size/offset = 88 */
/* 2862 */	NdrFcShort( 0x7c6 ),	/* Type Offset=1990 */

	/* Return value */

/* 2864 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2866 */	NdrFcShort( 0x60 ),	/* X64 Stack size/offset = 96 */
/* 2868 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Cancel */

/* 2870 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2872 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2876 */	NdrFcShort( 0x5 ),	/* 5 */
/* 2878 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2880 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2882 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2884 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2886 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2888 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2890 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2892 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2894 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dwCancelID */

/* 2896 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2898 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2900 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2902 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2904 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2906 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnDataChange */

/* 2908 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2910 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2914 */	NdrFcShort( 0x3 ),	/* 3 */
/* 2916 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 2918 */	NdrFcShort( 0x18 ),	/* 24 */
/* 2920 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2922 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 2924 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 2926 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2928 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2930 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2932 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dwTransactionID */

/* 2934 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2936 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2938 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter hrStatus */

/* 2940 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2942 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2944 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter dwNumItems */

/* 2946 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2948 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2950 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pItemValues */

/* 2952 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2954 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2956 */	NdrFcShort( 0x5e4 ),	/* Type Offset=1508 */

	/* Parameter phrErrors */

/* 2958 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2960 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 2962 */	NdrFcShort( 0x5d0 ),	/* Type Offset=1488 */

	/* Return value */

/* 2964 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2966 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 2968 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnReadComplete */

/* 2970 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2972 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2976 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2978 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 2980 */	NdrFcShort( 0x18 ),	/* 24 */
/* 2982 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2984 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 2986 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 2988 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2990 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2992 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2994 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dwTransactionID */

/* 2996 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2998 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3000 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter hrStatus */

/* 3002 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3004 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3006 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter dwNumItems */

/* 3008 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3010 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3012 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pItemValues */

/* 3014 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 3016 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 3018 */	NdrFcShort( 0x5e4 ),	/* Type Offset=1508 */

	/* Parameter phrErrors */

/* 3020 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 3022 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 3024 */	NdrFcShort( 0x5d0 ),	/* Type Offset=1488 */

	/* Return value */

/* 3026 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3028 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 3030 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnReadModifiedComplete */

/* 3032 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3034 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3038 */	NdrFcShort( 0x5 ),	/* 5 */
/* 3040 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 3042 */	NdrFcShort( 0x18 ),	/* 24 */
/* 3044 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3046 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 3048 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 3050 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3052 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3054 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3056 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dwTransactionID */

/* 3058 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3060 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3062 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter hrStatus */

/* 3064 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3066 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3068 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter dwNumItems */

/* 3070 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3072 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3074 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pItemValues */

/* 3076 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 3078 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 3080 */	NdrFcShort( 0x7d6 ),	/* Type Offset=2006 */

	/* Parameter phrErrors */

/* 3082 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 3084 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 3086 */	NdrFcShort( 0x5d0 ),	/* Type Offset=1488 */

	/* Return value */

/* 3088 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3090 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 3092 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnReadAttributeComplete */

/* 3094 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3096 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3100 */	NdrFcShort( 0x6 ),	/* 6 */
/* 3102 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 3104 */	NdrFcShort( 0x20 ),	/* 32 */
/* 3106 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3108 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 3110 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 3112 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3114 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3116 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3118 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dwTransactionID */

/* 3120 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3122 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3124 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter hrStatus */

/* 3126 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3128 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3130 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter hClient */

/* 3132 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3134 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3136 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter dwNumItems */

/* 3138 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3140 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 3142 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pAttributeValues */

/* 3144 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 3146 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 3148 */	NdrFcShort( 0x6ca ),	/* Type Offset=1738 */

	/* Parameter phrErrors */

/* 3150 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 3152 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 3154 */	NdrFcShort( 0x580 ),	/* Type Offset=1408 */

	/* Return value */

/* 3156 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3158 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 3160 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnReadAnnotations */

/* 3162 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3164 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3168 */	NdrFcShort( 0x7 ),	/* 7 */
/* 3170 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 3172 */	NdrFcShort( 0x18 ),	/* 24 */
/* 3174 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3176 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 3178 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 3180 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3182 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3184 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3186 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dwTransactionID */

/* 3188 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3190 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3192 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter hrStatus */

/* 3194 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3196 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3198 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter dwNumItems */

/* 3200 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3202 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3204 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pAnnotationValues */

/* 3206 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 3208 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 3210 */	NdrFcShort( 0x708 ),	/* Type Offset=1800 */

	/* Parameter phrErrors */

/* 3212 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 3214 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 3216 */	NdrFcShort( 0x5d0 ),	/* Type Offset=1488 */

	/* Return value */

/* 3218 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3220 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 3222 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnInsertAnnotations */

/* 3224 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3226 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3230 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3232 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 3234 */	NdrFcShort( 0x18 ),	/* 24 */
/* 3236 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3238 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 3240 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 3242 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3244 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3246 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3248 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dwTransactionID */

/* 3250 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3252 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3254 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter hrStatus */

/* 3256 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3258 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3260 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter dwCount */

/* 3262 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3264 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3266 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter phClients */

/* 3268 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 3270 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 3272 */	NdrFcShort( 0x5d0 ),	/* Type Offset=1488 */

	/* Parameter phrErrors */

/* 3274 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 3276 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 3278 */	NdrFcShort( 0x5d0 ),	/* Type Offset=1488 */

	/* Return value */

/* 3280 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3282 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 3284 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnPlayback */

/* 3286 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3288 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3292 */	NdrFcShort( 0x9 ),	/* 9 */
/* 3294 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 3296 */	NdrFcShort( 0x18 ),	/* 24 */
/* 3298 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3300 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 3302 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 3304 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3306 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3308 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3310 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dwTransactionID */

/* 3312 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3314 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3316 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter hrStatus */

/* 3318 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3320 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3322 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter dwNumItems */

/* 3324 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3326 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3328 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppItemValues */

/* 3330 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 3332 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 3334 */	NdrFcShort( 0x7f8 ),	/* Type Offset=2040 */

	/* Parameter phrErrors */

/* 3336 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 3338 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 3340 */	NdrFcShort( 0x5d0 ),	/* Type Offset=1488 */

	/* Return value */

/* 3342 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3344 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 3346 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnUpdateComplete */

/* 3348 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3350 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3354 */	NdrFcShort( 0xa ),	/* 10 */
/* 3356 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 3358 */	NdrFcShort( 0x18 ),	/* 24 */
/* 3360 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3362 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 3364 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 3366 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3368 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3370 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3372 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dwTransactionID */

/* 3374 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3376 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3378 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter hrStatus */

/* 3380 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3382 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3384 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter dwCount */

/* 3386 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3388 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3390 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter phClients */

/* 3392 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 3394 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 3396 */	NdrFcShort( 0x5d0 ),	/* Type Offset=1488 */

	/* Parameter phrErrors */

/* 3398 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 3400 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 3402 */	NdrFcShort( 0x5d0 ),	/* Type Offset=1488 */

	/* Return value */

/* 3404 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3406 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 3408 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnCancelComplete */

/* 3410 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3412 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3416 */	NdrFcShort( 0xb ),	/* 11 */
/* 3418 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3420 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3422 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3424 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3426 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3428 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3430 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3432 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3434 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dwCancelID */

/* 3436 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3438 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3440 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3442 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3444 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3446 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

			0x0
        }
    };

static const opchda_MIDL_TYPE_FORMAT_STRING opchda__MIDL_TypeFormatString =
    {
        0,
        {
			NdrFcShort( 0x0 ),	/* 0 */
/*  2 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/*  4 */	NdrFcShort( 0x2 ),	/* Offset= 2 (6) */
/*  6 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/*  8 */	NdrFcLong( 0x101 ),	/* 257 */
/* 12 */	NdrFcShort( 0x0 ),	/* 0 */
/* 14 */	NdrFcShort( 0x0 ),	/* 0 */
/* 16 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 18 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 20 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 22 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 24 */	
			0x11, 0x8,	/* FC_RP [simple_pointer] */
/* 26 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 28 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 30 */	NdrFcShort( 0x2 ),	/* Offset= 2 (32) */
/* 32 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 34 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 36 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 38 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 40 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 42 */	NdrFcShort( 0x2 ),	/* Offset= 2 (44) */
/* 44 */	
			0x13, 0x0,	/* FC_OP */
/* 46 */	NdrFcShort( 0x2 ),	/* Offset= 2 (48) */
/* 48 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 50 */	NdrFcShort( 0x4 ),	/* 4 */
/* 52 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x54,		/* FC_DEREFERENCE */
/* 54 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 56 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 58 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 60 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 62 */	NdrFcShort( 0x2 ),	/* Offset= 2 (64) */
/* 64 */	
			0x13, 0x0,	/* FC_OP */
/* 66 */	NdrFcShort( 0x2 ),	/* Offset= 2 (68) */
/* 68 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 70 */	NdrFcShort( 0x0 ),	/* 0 */
/* 72 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x54,		/* FC_DEREFERENCE */
/* 74 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 76 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 78 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 82 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 84 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 86 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 88 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 90 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 92 */	NdrFcShort( 0x2 ),	/* Offset= 2 (94) */
/* 94 */	
			0x13, 0x0,	/* FC_OP */
/* 96 */	NdrFcShort( 0x2 ),	/* Offset= 2 (98) */
/* 98 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 100 */	NdrFcShort( 0x2 ),	/* 2 */
/* 102 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x54,		/* FC_DEREFERENCE */
/* 104 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 106 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 108 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 110 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 112 */	0xd,		/* FC_ENUM16 */
			0x5c,		/* FC_PAD */
/* 114 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 116 */	NdrFcShort( 0x2 ),	/* Offset= 2 (118) */
/* 118 */	
			0x13, 0x0,	/* FC_OP */
/* 120 */	NdrFcShort( 0x2 ),	/* Offset= 2 (122) */
/* 122 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 124 */	NdrFcShort( 0x8 ),	/* 8 */
/* 126 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 128 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 130 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 132 */	0x6,		/* FC_SHORT */
			0x5c,		/* FC_PAD */
/* 134 */	
			0x11, 0x0,	/* FC_RP */
/* 136 */	NdrFcShort( 0x2 ),	/* Offset= 2 (138) */
/* 138 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 140 */	NdrFcShort( 0x0 ),	/* 0 */
/* 142 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 144 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 146 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 148 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 152 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 154 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 156 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 158 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 160 */	
			0x11, 0x0,	/* FC_RP */
/* 162 */	NdrFcShort( 0x2 ),	/* Offset= 2 (164) */
/* 164 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 166 */	NdrFcShort( 0x4 ),	/* 4 */
/* 168 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 170 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 172 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 174 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 176 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 178 */	NdrFcShort( 0x2 ),	/* Offset= 2 (180) */
/* 180 */	
			0x13, 0x0,	/* FC_OP */
/* 182 */	NdrFcShort( 0xffee ),	/* Offset= -18 (164) */
/* 184 */	
			0x11, 0x0,	/* FC_RP */
/* 186 */	NdrFcShort( 0x2 ),	/* Offset= 2 (188) */
/* 188 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x1,		/* 1 */
/* 190 */	NdrFcShort( 0x0 ),	/* 0 */
/* 192 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 194 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 196 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 198 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 202 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 204 */	0xd,		/* FC_ENUM16 */
			0x5b,		/* FC_END */
/* 206 */	
			0x11, 0x0,	/* FC_RP */
/* 208 */	NdrFcShort( 0x3d0 ),	/* Offset= 976 (1184) */
/* 210 */	
			0x12, 0x0,	/* FC_UP */
/* 212 */	NdrFcShort( 0x3ae ),	/* Offset= 942 (1154) */
/* 214 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 216 */	0x7,		/* Corr desc: FC_USHORT */
			0x0,		/*  */
/* 218 */	NdrFcShort( 0xfff8 ),	/* -8 */
/* 220 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 222 */	NdrFcShort( 0x2 ),	/* Offset= 2 (224) */
/* 224 */	NdrFcShort( 0x10 ),	/* 16 */
/* 226 */	NdrFcShort( 0x2f ),	/* 47 */
/* 228 */	NdrFcLong( 0x14 ),	/* 20 */
/* 232 */	NdrFcShort( 0x800b ),	/* Simple arm type: FC_HYPER */
/* 234 */	NdrFcLong( 0x3 ),	/* 3 */
/* 238 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 240 */	NdrFcLong( 0x11 ),	/* 17 */
/* 244 */	NdrFcShort( 0x8001 ),	/* Simple arm type: FC_BYTE */
/* 246 */	NdrFcLong( 0x2 ),	/* 2 */
/* 250 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 252 */	NdrFcLong( 0x4 ),	/* 4 */
/* 256 */	NdrFcShort( 0x800a ),	/* Simple arm type: FC_FLOAT */
/* 258 */	NdrFcLong( 0x5 ),	/* 5 */
/* 262 */	NdrFcShort( 0x800c ),	/* Simple arm type: FC_DOUBLE */
/* 264 */	NdrFcLong( 0xb ),	/* 11 */
/* 268 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 270 */	NdrFcLong( 0xa ),	/* 10 */
/* 274 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 276 */	NdrFcLong( 0x6 ),	/* 6 */
/* 280 */	NdrFcShort( 0xe8 ),	/* Offset= 232 (512) */
/* 282 */	NdrFcLong( 0x7 ),	/* 7 */
/* 286 */	NdrFcShort( 0x800c ),	/* Simple arm type: FC_DOUBLE */
/* 288 */	NdrFcLong( 0x8 ),	/* 8 */
/* 292 */	NdrFcShort( 0xe2 ),	/* Offset= 226 (518) */
/* 294 */	NdrFcLong( 0xd ),	/* 13 */
/* 298 */	NdrFcShort( 0xf6 ),	/* Offset= 246 (544) */
/* 300 */	NdrFcLong( 0x9 ),	/* 9 */
/* 304 */	NdrFcShort( 0x102 ),	/* Offset= 258 (562) */
/* 306 */	NdrFcLong( 0x2000 ),	/* 8192 */
/* 310 */	NdrFcShort( 0x10e ),	/* Offset= 270 (580) */
/* 312 */	NdrFcLong( 0x24 ),	/* 36 */
/* 316 */	NdrFcShort( 0x2fc ),	/* Offset= 764 (1080) */
/* 318 */	NdrFcLong( 0x4024 ),	/* 16420 */
/* 322 */	NdrFcShort( 0x2f6 ),	/* Offset= 758 (1080) */
/* 324 */	NdrFcLong( 0x4011 ),	/* 16401 */
/* 328 */	NdrFcShort( 0x2f4 ),	/* Offset= 756 (1084) */
/* 330 */	NdrFcLong( 0x4002 ),	/* 16386 */
/* 334 */	NdrFcShort( 0x2f2 ),	/* Offset= 754 (1088) */
/* 336 */	NdrFcLong( 0x4003 ),	/* 16387 */
/* 340 */	NdrFcShort( 0x2f0 ),	/* Offset= 752 (1092) */
/* 342 */	NdrFcLong( 0x4014 ),	/* 16404 */
/* 346 */	NdrFcShort( 0x2ee ),	/* Offset= 750 (1096) */
/* 348 */	NdrFcLong( 0x4004 ),	/* 16388 */
/* 352 */	NdrFcShort( 0x2ec ),	/* Offset= 748 (1100) */
/* 354 */	NdrFcLong( 0x4005 ),	/* 16389 */
/* 358 */	NdrFcShort( 0x2ea ),	/* Offset= 746 (1104) */
/* 360 */	NdrFcLong( 0x400b ),	/* 16395 */
/* 364 */	NdrFcShort( 0x2d4 ),	/* Offset= 724 (1088) */
/* 366 */	NdrFcLong( 0x400a ),	/* 16394 */
/* 370 */	NdrFcShort( 0x2d2 ),	/* Offset= 722 (1092) */
/* 372 */	NdrFcLong( 0x4006 ),	/* 16390 */
/* 376 */	NdrFcShort( 0x2dc ),	/* Offset= 732 (1108) */
/* 378 */	NdrFcLong( 0x4007 ),	/* 16391 */
/* 382 */	NdrFcShort( 0x2d2 ),	/* Offset= 722 (1104) */
/* 384 */	NdrFcLong( 0x4008 ),	/* 16392 */
/* 388 */	NdrFcShort( 0x2d4 ),	/* Offset= 724 (1112) */
/* 390 */	NdrFcLong( 0x400d ),	/* 16397 */
/* 394 */	NdrFcShort( 0x2d2 ),	/* Offset= 722 (1116) */
/* 396 */	NdrFcLong( 0x4009 ),	/* 16393 */
/* 400 */	NdrFcShort( 0x2d0 ),	/* Offset= 720 (1120) */
/* 402 */	NdrFcLong( 0x6000 ),	/* 24576 */
/* 406 */	NdrFcShort( 0x2ce ),	/* Offset= 718 (1124) */
/* 408 */	NdrFcLong( 0x400c ),	/* 16396 */
/* 412 */	NdrFcShort( 0x2cc ),	/* Offset= 716 (1128) */
/* 414 */	NdrFcLong( 0x10 ),	/* 16 */
/* 418 */	NdrFcShort( 0x8002 ),	/* Simple arm type: FC_CHAR */
/* 420 */	NdrFcLong( 0x12 ),	/* 18 */
/* 424 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 426 */	NdrFcLong( 0x13 ),	/* 19 */
/* 430 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 432 */	NdrFcLong( 0x15 ),	/* 21 */
/* 436 */	NdrFcShort( 0x800b ),	/* Simple arm type: FC_HYPER */
/* 438 */	NdrFcLong( 0x16 ),	/* 22 */
/* 442 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 444 */	NdrFcLong( 0x17 ),	/* 23 */
/* 448 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 450 */	NdrFcLong( 0xe ),	/* 14 */
/* 454 */	NdrFcShort( 0x2aa ),	/* Offset= 682 (1136) */
/* 456 */	NdrFcLong( 0x400e ),	/* 16398 */
/* 460 */	NdrFcShort( 0x2ae ),	/* Offset= 686 (1146) */
/* 462 */	NdrFcLong( 0x4010 ),	/* 16400 */
/* 466 */	NdrFcShort( 0x2ac ),	/* Offset= 684 (1150) */
/* 468 */	NdrFcLong( 0x4012 ),	/* 16402 */
/* 472 */	NdrFcShort( 0x268 ),	/* Offset= 616 (1088) */
/* 474 */	NdrFcLong( 0x4013 ),	/* 16403 */
/* 478 */	NdrFcShort( 0x266 ),	/* Offset= 614 (1092) */
/* 480 */	NdrFcLong( 0x4015 ),	/* 16405 */
/* 484 */	NdrFcShort( 0x264 ),	/* Offset= 612 (1096) */
/* 486 */	NdrFcLong( 0x4016 ),	/* 16406 */
/* 490 */	NdrFcShort( 0x25a ),	/* Offset= 602 (1092) */
/* 492 */	NdrFcLong( 0x4017 ),	/* 16407 */
/* 496 */	NdrFcShort( 0x254 ),	/* Offset= 596 (1092) */
/* 498 */	NdrFcLong( 0x0 ),	/* 0 */
/* 502 */	NdrFcShort( 0x0 ),	/* Offset= 0 (502) */
/* 504 */	NdrFcLong( 0x1 ),	/* 1 */
/* 508 */	NdrFcShort( 0x0 ),	/* Offset= 0 (508) */
/* 510 */	NdrFcShort( 0xffff ),	/* Offset= -1 (509) */
/* 512 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 514 */	NdrFcShort( 0x8 ),	/* 8 */
/* 516 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 518 */	
			0x12, 0x0,	/* FC_UP */
/* 520 */	NdrFcShort( 0xe ),	/* Offset= 14 (534) */
/* 522 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 524 */	NdrFcShort( 0x2 ),	/* 2 */
/* 526 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 528 */	NdrFcShort( 0xfffc ),	/* -4 */
/* 530 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 532 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 534 */	
			0x17,		/* FC_CSTRUCT */
			0x3,		/* 3 */
/* 536 */	NdrFcShort( 0x8 ),	/* 8 */
/* 538 */	NdrFcShort( 0xfff0 ),	/* Offset= -16 (522) */
/* 540 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 542 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 544 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 546 */	NdrFcLong( 0x0 ),	/* 0 */
/* 550 */	NdrFcShort( 0x0 ),	/* 0 */
/* 552 */	NdrFcShort( 0x0 ),	/* 0 */
/* 554 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 556 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 558 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 560 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 562 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 564 */	NdrFcLong( 0x20400 ),	/* 132096 */
/* 568 */	NdrFcShort( 0x0 ),	/* 0 */
/* 570 */	NdrFcShort( 0x0 ),	/* 0 */
/* 572 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 574 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 576 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 578 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 580 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 582 */	NdrFcShort( 0x2 ),	/* Offset= 2 (584) */
/* 584 */	
			0x12, 0x0,	/* FC_UP */
/* 586 */	NdrFcShort( 0x1dc ),	/* Offset= 476 (1062) */
/* 588 */	
			0x2a,		/* FC_ENCAPSULATED_UNION */
			0x89,		/* 137 */
/* 590 */	NdrFcShort( 0x20 ),	/* 32 */
/* 592 */	NdrFcShort( 0xa ),	/* 10 */
/* 594 */	NdrFcLong( 0x8 ),	/* 8 */
/* 598 */	NdrFcShort( 0x50 ),	/* Offset= 80 (678) */
/* 600 */	NdrFcLong( 0xd ),	/* 13 */
/* 604 */	NdrFcShort( 0x70 ),	/* Offset= 112 (716) */
/* 606 */	NdrFcLong( 0x9 ),	/* 9 */
/* 610 */	NdrFcShort( 0x90 ),	/* Offset= 144 (754) */
/* 612 */	NdrFcLong( 0xc ),	/* 12 */
/* 616 */	NdrFcShort( 0xb0 ),	/* Offset= 176 (792) */
/* 618 */	NdrFcLong( 0x24 ),	/* 36 */
/* 622 */	NdrFcShort( 0x102 ),	/* Offset= 258 (880) */
/* 624 */	NdrFcLong( 0x800d ),	/* 32781 */
/* 628 */	NdrFcShort( 0x11e ),	/* Offset= 286 (914) */
/* 630 */	NdrFcLong( 0x10 ),	/* 16 */
/* 634 */	NdrFcShort( 0x138 ),	/* Offset= 312 (946) */
/* 636 */	NdrFcLong( 0x2 ),	/* 2 */
/* 640 */	NdrFcShort( 0x14e ),	/* Offset= 334 (974) */
/* 642 */	NdrFcLong( 0x3 ),	/* 3 */
/* 646 */	NdrFcShort( 0x164 ),	/* Offset= 356 (1002) */
/* 648 */	NdrFcLong( 0x14 ),	/* 20 */
/* 652 */	NdrFcShort( 0x17a ),	/* Offset= 378 (1030) */
/* 654 */	NdrFcShort( 0xffff ),	/* Offset= -1 (653) */
/* 656 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 658 */	NdrFcShort( 0x0 ),	/* 0 */
/* 660 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 662 */	NdrFcShort( 0x0 ),	/* 0 */
/* 664 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 666 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 670 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 672 */	
			0x12, 0x0,	/* FC_UP */
/* 674 */	NdrFcShort( 0xff74 ),	/* Offset= -140 (534) */
/* 676 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 678 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 680 */	NdrFcShort( 0x10 ),	/* 16 */
/* 682 */	NdrFcShort( 0x0 ),	/* 0 */
/* 684 */	NdrFcShort( 0x6 ),	/* Offset= 6 (690) */
/* 686 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 688 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 690 */	
			0x11, 0x0,	/* FC_RP */
/* 692 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (656) */
/* 694 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 696 */	NdrFcShort( 0x0 ),	/* 0 */
/* 698 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 700 */	NdrFcShort( 0x0 ),	/* 0 */
/* 702 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 704 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 708 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 710 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 712 */	NdrFcShort( 0xff58 ),	/* Offset= -168 (544) */
/* 714 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 716 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 718 */	NdrFcShort( 0x10 ),	/* 16 */
/* 720 */	NdrFcShort( 0x0 ),	/* 0 */
/* 722 */	NdrFcShort( 0x6 ),	/* Offset= 6 (728) */
/* 724 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 726 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 728 */	
			0x11, 0x0,	/* FC_RP */
/* 730 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (694) */
/* 732 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 734 */	NdrFcShort( 0x0 ),	/* 0 */
/* 736 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 738 */	NdrFcShort( 0x0 ),	/* 0 */
/* 740 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 742 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 746 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 748 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 750 */	NdrFcShort( 0xff44 ),	/* Offset= -188 (562) */
/* 752 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 754 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 756 */	NdrFcShort( 0x10 ),	/* 16 */
/* 758 */	NdrFcShort( 0x0 ),	/* 0 */
/* 760 */	NdrFcShort( 0x6 ),	/* Offset= 6 (766) */
/* 762 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 764 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 766 */	
			0x11, 0x0,	/* FC_RP */
/* 768 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (732) */
/* 770 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 772 */	NdrFcShort( 0x0 ),	/* 0 */
/* 774 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 776 */	NdrFcShort( 0x0 ),	/* 0 */
/* 778 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 780 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 784 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 786 */	
			0x12, 0x0,	/* FC_UP */
/* 788 */	NdrFcShort( 0x16e ),	/* Offset= 366 (1154) */
/* 790 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 792 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 794 */	NdrFcShort( 0x10 ),	/* 16 */
/* 796 */	NdrFcShort( 0x0 ),	/* 0 */
/* 798 */	NdrFcShort( 0x6 ),	/* Offset= 6 (804) */
/* 800 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 802 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 804 */	
			0x11, 0x0,	/* FC_RP */
/* 806 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (770) */
/* 808 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 810 */	NdrFcLong( 0x2f ),	/* 47 */
/* 814 */	NdrFcShort( 0x0 ),	/* 0 */
/* 816 */	NdrFcShort( 0x0 ),	/* 0 */
/* 818 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 820 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 822 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 824 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 826 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 828 */	NdrFcShort( 0x1 ),	/* 1 */
/* 830 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 832 */	NdrFcShort( 0x4 ),	/* 4 */
/* 834 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 836 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 838 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 840 */	NdrFcShort( 0x18 ),	/* 24 */
/* 842 */	NdrFcShort( 0x0 ),	/* 0 */
/* 844 */	NdrFcShort( 0xa ),	/* Offset= 10 (854) */
/* 846 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 848 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 850 */	NdrFcShort( 0xffd6 ),	/* Offset= -42 (808) */
/* 852 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 854 */	
			0x12, 0x0,	/* FC_UP */
/* 856 */	NdrFcShort( 0xffe2 ),	/* Offset= -30 (826) */
/* 858 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 860 */	NdrFcShort( 0x0 ),	/* 0 */
/* 862 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 864 */	NdrFcShort( 0x0 ),	/* 0 */
/* 866 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 868 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 872 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 874 */	
			0x12, 0x0,	/* FC_UP */
/* 876 */	NdrFcShort( 0xffda ),	/* Offset= -38 (838) */
/* 878 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 880 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 882 */	NdrFcShort( 0x10 ),	/* 16 */
/* 884 */	NdrFcShort( 0x0 ),	/* 0 */
/* 886 */	NdrFcShort( 0x6 ),	/* Offset= 6 (892) */
/* 888 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 890 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 892 */	
			0x11, 0x0,	/* FC_RP */
/* 894 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (858) */
/* 896 */	
			0x1d,		/* FC_SMFARRAY */
			0x0,		/* 0 */
/* 898 */	NdrFcShort( 0x8 ),	/* 8 */
/* 900 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 902 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 904 */	NdrFcShort( 0x10 ),	/* 16 */
/* 906 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 908 */	0x6,		/* FC_SHORT */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 910 */	0x0,		/* 0 */
			NdrFcShort( 0xfff1 ),	/* Offset= -15 (896) */
			0x5b,		/* FC_END */
/* 914 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 916 */	NdrFcShort( 0x20 ),	/* 32 */
/* 918 */	NdrFcShort( 0x0 ),	/* 0 */
/* 920 */	NdrFcShort( 0xa ),	/* Offset= 10 (930) */
/* 922 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 924 */	0x36,		/* FC_POINTER */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 926 */	0x0,		/* 0 */
			NdrFcShort( 0xffe7 ),	/* Offset= -25 (902) */
			0x5b,		/* FC_END */
/* 930 */	
			0x11, 0x0,	/* FC_RP */
/* 932 */	NdrFcShort( 0xff12 ),	/* Offset= -238 (694) */
/* 934 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 936 */	NdrFcShort( 0x1 ),	/* 1 */
/* 938 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 940 */	NdrFcShort( 0x0 ),	/* 0 */
/* 942 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 944 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 946 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 948 */	NdrFcShort( 0x10 ),	/* 16 */
/* 950 */	NdrFcShort( 0x0 ),	/* 0 */
/* 952 */	NdrFcShort( 0x6 ),	/* Offset= 6 (958) */
/* 954 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 956 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 958 */	
			0x12, 0x0,	/* FC_UP */
/* 960 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (934) */
/* 962 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 964 */	NdrFcShort( 0x2 ),	/* 2 */
/* 966 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 968 */	NdrFcShort( 0x0 ),	/* 0 */
/* 970 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 972 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 974 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 976 */	NdrFcShort( 0x10 ),	/* 16 */
/* 978 */	NdrFcShort( 0x0 ),	/* 0 */
/* 980 */	NdrFcShort( 0x6 ),	/* Offset= 6 (986) */
/* 982 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 984 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 986 */	
			0x12, 0x0,	/* FC_UP */
/* 988 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (962) */
/* 990 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 992 */	NdrFcShort( 0x4 ),	/* 4 */
/* 994 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 996 */	NdrFcShort( 0x0 ),	/* 0 */
/* 998 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1000 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1002 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1004 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1006 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1008 */	NdrFcShort( 0x6 ),	/* Offset= 6 (1014) */
/* 1010 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 1012 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 1014 */	
			0x12, 0x0,	/* FC_UP */
/* 1016 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (990) */
/* 1018 */	
			0x1b,		/* FC_CARRAY */
			0x7,		/* 7 */
/* 1020 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1022 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1024 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1026 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1028 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 1030 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1032 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1034 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1036 */	NdrFcShort( 0x6 ),	/* Offset= 6 (1042) */
/* 1038 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 1040 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 1042 */	
			0x12, 0x0,	/* FC_UP */
/* 1044 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (1018) */
/* 1046 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 1048 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1050 */	0x7,		/* Corr desc: FC_USHORT */
			0x0,		/*  */
/* 1052 */	NdrFcShort( 0xffc8 ),	/* -56 */
/* 1054 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1056 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1058 */	NdrFcShort( 0xfc58 ),	/* Offset= -936 (122) */
/* 1060 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1062 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1064 */	NdrFcShort( 0x38 ),	/* 56 */
/* 1066 */	NdrFcShort( 0xffec ),	/* Offset= -20 (1046) */
/* 1068 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1068) */
/* 1070 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 1072 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1074 */	0x40,		/* FC_STRUCTPAD4 */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1076 */	0x0,		/* 0 */
			NdrFcShort( 0xfe17 ),	/* Offset= -489 (588) */
			0x5b,		/* FC_END */
/* 1080 */	
			0x12, 0x0,	/* FC_UP */
/* 1082 */	NdrFcShort( 0xff0c ),	/* Offset= -244 (838) */
/* 1084 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1086 */	0x1,		/* FC_BYTE */
			0x5c,		/* FC_PAD */
/* 1088 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1090 */	0x6,		/* FC_SHORT */
			0x5c,		/* FC_PAD */
/* 1092 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1094 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 1096 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1098 */	0xb,		/* FC_HYPER */
			0x5c,		/* FC_PAD */
/* 1100 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1102 */	0xa,		/* FC_FLOAT */
			0x5c,		/* FC_PAD */
/* 1104 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1106 */	0xc,		/* FC_DOUBLE */
			0x5c,		/* FC_PAD */
/* 1108 */	
			0x12, 0x0,	/* FC_UP */
/* 1110 */	NdrFcShort( 0xfdaa ),	/* Offset= -598 (512) */
/* 1112 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 1114 */	NdrFcShort( 0xfdac ),	/* Offset= -596 (518) */
/* 1116 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 1118 */	NdrFcShort( 0xfdc2 ),	/* Offset= -574 (544) */
/* 1120 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 1122 */	NdrFcShort( 0xfdd0 ),	/* Offset= -560 (562) */
/* 1124 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 1126 */	NdrFcShort( 0xfdde ),	/* Offset= -546 (580) */
/* 1128 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 1130 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1132) */
/* 1132 */	
			0x12, 0x0,	/* FC_UP */
/* 1134 */	NdrFcShort( 0x14 ),	/* Offset= 20 (1154) */
/* 1136 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 1138 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1140 */	0x6,		/* FC_SHORT */
			0x1,		/* FC_BYTE */
/* 1142 */	0x1,		/* FC_BYTE */
			0x8,		/* FC_LONG */
/* 1144 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 1146 */	
			0x12, 0x0,	/* FC_UP */
/* 1148 */	NdrFcShort( 0xfff4 ),	/* Offset= -12 (1136) */
/* 1150 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1152 */	0x2,		/* FC_CHAR */
			0x5c,		/* FC_PAD */
/* 1154 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 1156 */	NdrFcShort( 0x20 ),	/* 32 */
/* 1158 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1160 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1160) */
/* 1162 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1164 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 1166 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 1168 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1170 */	NdrFcShort( 0xfc44 ),	/* Offset= -956 (214) */
/* 1172 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1174 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 1176 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1178 */	NdrFcShort( 0x18 ),	/* 24 */
/* 1180 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1182 */	NdrFcShort( 0xfc34 ),	/* Offset= -972 (210) */
/* 1184 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 1186 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1188 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 1190 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1192 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1194 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 1198 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 1200 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1202 */	NdrFcShort( 0xffe4 ),	/* Offset= -28 (1174) */
/* 1204 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1206 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1208 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1210) */
/* 1210 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1212 */	NdrFcLong( 0x1f1217b1 ),	/* 521279409 */
/* 1216 */	NdrFcShort( 0xdee0 ),	/* -8480 */
/* 1218 */	NdrFcShort( 0x11d2 ),	/* 4562 */
/* 1220 */	0xa5,		/* 165 */
			0xe5,		/* 229 */
/* 1222 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1224 */	0x86,		/* 134 */
			0x33,		/* 51 */
/* 1226 */	0x93,		/* 147 */
			0x99,		/* 153 */
/* 1228 */	
			0x11, 0x0,	/* FC_RP */
/* 1230 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1232) */
/* 1232 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1234 */	NdrFcShort( 0x18 ),	/* 24 */
/* 1236 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1238 */	NdrFcShort( 0xa ),	/* Offset= 10 (1248) */
/* 1240 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 1242 */	0x36,		/* FC_POINTER */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1244 */	0x0,		/* 0 */
			NdrFcShort( 0xfb9d ),	/* Offset= -1123 (122) */
			0x5b,		/* FC_END */
/* 1248 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 1250 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1252 */	
			0x11, 0x0,	/* FC_RP */
/* 1254 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1256) */
/* 1256 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 1258 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1260 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 1262 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 1264 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1266 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1268 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 1270 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1272) */
/* 1272 */	
			0x13, 0x0,	/* FC_OP */
/* 1274 */	NdrFcShort( 0x64 ),	/* Offset= 100 (1374) */
/* 1276 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 1278 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1280 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1282 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1284 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1286 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 1290 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 1292 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1294 */	NdrFcShort( 0xfb6c ),	/* Offset= -1172 (122) */
/* 1296 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1298 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 1300 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1302 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1304 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1306 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1308 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1310 */	
			0x13, 0x0,	/* FC_OP */
/* 1312 */	NdrFcShort( 0xff62 ),	/* Offset= -158 (1154) */
/* 1314 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 1316 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1318 */	NdrFcShort( 0x18 ),	/* 24 */
/* 1320 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1322 */	NdrFcShort( 0xfff4 ),	/* Offset= -12 (1310) */
/* 1324 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 1326 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1328 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1330 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1332 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1334 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 1338 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 1340 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1342 */	NdrFcShort( 0xffe4 ),	/* Offset= -28 (1314) */
/* 1344 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1346 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1348 */	NdrFcShort( 0x28 ),	/* 40 */
/* 1350 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1352 */	NdrFcShort( 0xa ),	/* Offset= 10 (1362) */
/* 1354 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1356 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 1358 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 1360 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 1362 */	
			0x13, 0x0,	/* FC_OP */
/* 1364 */	NdrFcShort( 0xffa8 ),	/* Offset= -88 (1276) */
/* 1366 */	
			0x13, 0x0,	/* FC_OP */
/* 1368 */	NdrFcShort( 0xffba ),	/* Offset= -70 (1298) */
/* 1370 */	
			0x13, 0x0,	/* FC_OP */
/* 1372 */	NdrFcShort( 0xffd0 ),	/* Offset= -48 (1324) */
/* 1374 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 1376 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1378 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 1380 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 1382 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1384 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 1388 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 1390 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1392 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (1346) */
/* 1394 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1396 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 1398 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1400) */
/* 1400 */	
			0x13, 0x0,	/* FC_OP */
/* 1402 */	NdrFcShort( 0xff6e ),	/* Offset= -146 (1256) */
/* 1404 */	
			0x11, 0x0,	/* FC_RP */
/* 1406 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1408) */
/* 1408 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 1410 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1412 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 1414 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1416 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1418 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1420 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 1422 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1424) */
/* 1424 */	
			0x13, 0x0,	/* FC_OP */
/* 1426 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1428) */
/* 1428 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 1430 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1432 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 1434 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1436 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1438 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 1442 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 1444 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1446 */	NdrFcShort( 0xff9c ),	/* Offset= -100 (1346) */
/* 1448 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1450 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 1452 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1454) */
/* 1454 */	
			0x13, 0x0,	/* FC_OP */
/* 1456 */	NdrFcShort( 0xffd0 ),	/* Offset= -48 (1408) */
/* 1458 */	
			0x11, 0x0,	/* FC_RP */
/* 1460 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1462) */
/* 1462 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 1464 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1466 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 1468 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1470 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1472 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 1476 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 1478 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1480 */	NdrFcShort( 0xfab2 ),	/* Offset= -1358 (122) */
/* 1482 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1484 */	
			0x11, 0x0,	/* FC_RP */
/* 1486 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1488) */
/* 1488 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 1490 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1492 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 1494 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1496 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1498 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1500 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 1502 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1504) */
/* 1504 */	
			0x13, 0x0,	/* FC_OP */
/* 1506 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1508) */
/* 1508 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 1510 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1512 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 1514 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1516 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1518 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 1522 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 1524 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1526 */	NdrFcShort( 0xff4c ),	/* Offset= -180 (1346) */
/* 1528 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1530 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 1532 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1534) */
/* 1534 */	
			0x13, 0x0,	/* FC_OP */
/* 1536 */	NdrFcShort( 0xffd0 ),	/* Offset= -48 (1488) */
/* 1538 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 1540 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1542) */
/* 1542 */	
			0x13, 0x0,	/* FC_OP */
/* 1544 */	NdrFcShort( 0x8c ),	/* Offset= 140 (1684) */
/* 1546 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 1548 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1550 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1552 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1554 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1556 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 1560 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 1562 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1564 */	NdrFcShort( 0xfa5e ),	/* Offset= -1442 (122) */
/* 1566 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1568 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 1570 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1572 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1574 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1576 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1578 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1580 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 1582 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1584 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1586 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1588 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1590 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 1594 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 1596 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1598 */	NdrFcShort( 0xfee4 ),	/* Offset= -284 (1314) */
/* 1600 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1602 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x1,		/* 1 */
/* 1604 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1606 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1608 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1610 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1612 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 1616 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 1618 */	0xd,		/* FC_ENUM16 */
			0x5b,		/* FC_END */
/* 1620 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 1622 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1624 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1626 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1628 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1630 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 1634 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 1636 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 1638 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1640 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1642 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1644 */	NdrFcShort( 0x38 ),	/* 56 */
/* 1646 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1648 */	NdrFcShort( 0xc ),	/* Offset= 12 (1660) */
/* 1650 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1652 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 1654 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 1656 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 1658 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1660 */	
			0x13, 0x0,	/* FC_OP */
/* 1662 */	NdrFcShort( 0xff8c ),	/* Offset= -116 (1546) */
/* 1664 */	
			0x13, 0x0,	/* FC_OP */
/* 1666 */	NdrFcShort( 0xff9e ),	/* Offset= -98 (1568) */
/* 1668 */	
			0x13, 0x0,	/* FC_OP */
/* 1670 */	NdrFcShort( 0xffa6 ),	/* Offset= -90 (1580) */
/* 1672 */	
			0x13, 0x0,	/* FC_OP */
/* 1674 */	NdrFcShort( 0xff80 ),	/* Offset= -128 (1546) */
/* 1676 */	
			0x13, 0x0,	/* FC_OP */
/* 1678 */	NdrFcShort( 0xffb4 ),	/* Offset= -76 (1602) */
/* 1680 */	
			0x13, 0x0,	/* FC_OP */
/* 1682 */	NdrFcShort( 0xffc2 ),	/* Offset= -62 (1620) */
/* 1684 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 1686 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1688 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 1690 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1692 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1694 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 1698 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 1700 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1702 */	NdrFcShort( 0xffc4 ),	/* Offset= -60 (1642) */
/* 1704 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1706 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 1708 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1710) */
/* 1710 */	
			0x13, 0x0,	/* FC_OP */
/* 1712 */	NdrFcShort( 0x1a ),	/* Offset= 26 (1738) */
/* 1714 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1716 */	NdrFcShort( 0x20 ),	/* 32 */
/* 1718 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1720 */	NdrFcShort( 0xa ),	/* Offset= 10 (1730) */
/* 1722 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1724 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 1726 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 1728 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1730 */	
			0x13, 0x0,	/* FC_OP */
/* 1732 */	NdrFcShort( 0xff46 ),	/* Offset= -186 (1546) */
/* 1734 */	
			0x13, 0x0,	/* FC_OP */
/* 1736 */	NdrFcShort( 0xff64 ),	/* Offset= -156 (1580) */
/* 1738 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 1740 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1742 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 1744 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1746 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1748 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 1752 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 1754 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1756 */	NdrFcShort( 0xffd6 ),	/* Offset= -42 (1714) */
/* 1758 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1760 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 1762 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1764) */
/* 1764 */	
			0x13, 0x0,	/* FC_OP */
/* 1766 */	NdrFcShort( 0x22 ),	/* Offset= 34 (1800) */
/* 1768 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1770 */	NdrFcShort( 0x28 ),	/* 40 */
/* 1772 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1774 */	NdrFcShort( 0xa ),	/* Offset= 10 (1784) */
/* 1776 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1778 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 1780 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 1782 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1784 */	
			0x13, 0x0,	/* FC_OP */
/* 1786 */	NdrFcShort( 0xff10 ),	/* Offset= -240 (1546) */
/* 1788 */	
			0x13, 0x0,	/* FC_OP */
/* 1790 */	NdrFcShort( 0xff56 ),	/* Offset= -170 (1620) */
/* 1792 */	
			0x13, 0x0,	/* FC_OP */
/* 1794 */	NdrFcShort( 0xff08 ),	/* Offset= -248 (1546) */
/* 1796 */	
			0x13, 0x0,	/* FC_OP */
/* 1798 */	NdrFcShort( 0xff4e ),	/* Offset= -178 (1620) */
/* 1800 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 1802 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1804 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 1806 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1808 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1810 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 1814 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 1816 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1818 */	NdrFcShort( 0xffce ),	/* Offset= -50 (1768) */
/* 1820 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1822 */	
			0x11, 0x0,	/* FC_RP */
/* 1824 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1826) */
/* 1826 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 1828 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1830 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 1832 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1834 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1836 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 1840 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 1842 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1844 */	NdrFcShort( 0xffb4 ),	/* Offset= -76 (1768) */
/* 1846 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1848 */	
			0x11, 0x0,	/* FC_RP */
/* 1850 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1852) */
/* 1852 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 1854 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1856 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 1858 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 1860 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1862 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1864 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 1866 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1868) */
/* 1868 */	
			0x13, 0x0,	/* FC_OP */
/* 1870 */	NdrFcShort( 0xffee ),	/* Offset= -18 (1852) */
/* 1872 */	
			0x11, 0x0,	/* FC_RP */
/* 1874 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1876) */
/* 1876 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 1878 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1880 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 1882 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1884 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1886 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 1890 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 1892 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1894 */	NdrFcShort( 0xf914 ),	/* Offset= -1772 (122) */
/* 1896 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1898 */	
			0x11, 0x0,	/* FC_RP */
/* 1900 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1902) */
/* 1902 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 1904 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1906 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 1908 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1910 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1912 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1914 */	
			0x11, 0x0,	/* FC_RP */
/* 1916 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1918) */
/* 1918 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 1920 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1922 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 1924 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1926 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1928 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 1932 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 1934 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1936 */	NdrFcShort( 0xfd06 ),	/* Offset= -762 (1174) */
/* 1938 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1940 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 1942 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1944) */
/* 1944 */	
			0x13, 0x0,	/* FC_OP */
/* 1946 */	NdrFcShort( 0xffd4 ),	/* Offset= -44 (1902) */
/* 1948 */	
			0x11, 0x0,	/* FC_RP */
/* 1950 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1952) */
/* 1952 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 1954 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1956 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 1958 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1960 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1962 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 1966 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 1968 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1970 */	NdrFcShort( 0xff36 ),	/* Offset= -202 (1768) */
/* 1972 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1974 */	
			0x11, 0x0,	/* FC_RP */
/* 1976 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1978) */
/* 1978 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 1980 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1982 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 1984 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 1986 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1988 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1990 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 1992 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1994) */
/* 1994 */	
			0x13, 0x0,	/* FC_OP */
/* 1996 */	NdrFcShort( 0xffee ),	/* Offset= -18 (1978) */
/* 1998 */	
			0x11, 0x0,	/* FC_RP */
/* 2000 */	NdrFcShort( 0xfe14 ),	/* Offset= -492 (1508) */
/* 2002 */	
			0x11, 0x0,	/* FC_RP */
/* 2004 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2006) */
/* 2006 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 2008 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2010 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 2012 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2014 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 2016 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 2020 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 2022 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 2024 */	NdrFcShort( 0xfe82 ),	/* Offset= -382 (1642) */
/* 2026 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2028 */	
			0x11, 0x0,	/* FC_RP */
/* 2030 */	NdrFcShort( 0xfedc ),	/* Offset= -292 (1738) */
/* 2032 */	
			0x11, 0x0,	/* FC_RP */
/* 2034 */	NdrFcShort( 0xff16 ),	/* Offset= -234 (1800) */
/* 2036 */	
			0x11, 0x0,	/* FC_RP */
/* 2038 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2040) */
/* 2040 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 2042 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2044 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 2046 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2048 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 2050 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 2054 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 2056 */	
			0x12, 0x0,	/* FC_UP */
/* 2058 */	NdrFcShort( 0xfd38 ),	/* Offset= -712 (1346) */
/* 2060 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */

			0x0
        }
    };

static const USER_MARSHAL_ROUTINE_QUADRUPLE UserMarshalRoutines[ WIRE_MARSHAL_TABLE_SIZE ] = 
        {
            
            {
            VARIANT_UserSize
            ,VARIANT_UserMarshal
            ,VARIANT_UserUnmarshal
            ,VARIANT_UserFree
            }

        };



/* Object interface: IUnknown, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: CATID_OPCHDAServer10, ver. 0.0,
   GUID={0x7DE5B060,0xE089,0x11d2,{0xA5,0xE6,0x00,0x00,0x86,0x33,0x93,0x99}} */

#pragma code_seg(".orpc")
static const unsigned short CATID_OPCHDAServer10_FormatStringOffsetTable[] =
    {
    0
    };

static const MIDL_STUBLESS_PROXY_INFO CATID_OPCHDAServer10_ProxyInfo =
    {
    &Object_StubDesc,
    opchda__MIDL_ProcFormatString.Format,
    &CATID_OPCHDAServer10_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO CATID_OPCHDAServer10_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    opchda__MIDL_ProcFormatString.Format,
    &CATID_OPCHDAServer10_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(3) _CATID_OPCHDAServer10ProxyVtbl = 
{
    0,
    &IID_CATID_OPCHDAServer10,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy
};

const CInterfaceStubVtbl _CATID_OPCHDAServer10StubVtbl =
{
    &IID_CATID_OPCHDAServer10,
    &CATID_OPCHDAServer10_ServerInfo,
    3,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Standard interface: __MIDL_itf_opchda_0000_0001, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IOPCHDA_Browser, ver. 0.0,
   GUID={0x1F1217B1,0xDEE0,0x11d2,{0xA5,0xE5,0x00,0x00,0x86,0x33,0x93,0x99}} */

#pragma code_seg(".orpc")
static const unsigned short IOPCHDA_Browser_FormatStringOffsetTable[] =
    {
    0,
    44,
    88,
    132
    };

static const MIDL_STUBLESS_PROXY_INFO IOPCHDA_Browser_ProxyInfo =
    {
    &Object_StubDesc,
    opchda__MIDL_ProcFormatString.Format,
    &IOPCHDA_Browser_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IOPCHDA_Browser_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    opchda__MIDL_ProcFormatString.Format,
    &IOPCHDA_Browser_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(7) _IOPCHDA_BrowserProxyVtbl = 
{
    &IOPCHDA_Browser_ProxyInfo,
    &IID_IOPCHDA_Browser,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IOPCHDA_Browser::GetEnum */ ,
    (void *) (INT_PTR) -1 /* IOPCHDA_Browser::ChangeBrowsePosition */ ,
    (void *) (INT_PTR) -1 /* IOPCHDA_Browser::GetItemID */ ,
    (void *) (INT_PTR) -1 /* IOPCHDA_Browser::GetBranchPosition */
};

const CInterfaceStubVtbl _IOPCHDA_BrowserStubVtbl =
{
    &IID_IOPCHDA_Browser,
    &IOPCHDA_Browser_ServerInfo,
    7,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IOPCHDA_Server, ver. 0.0,
   GUID={0x1F1217B0,0xDEE0,0x11d2,{0xA5,0xE5,0x00,0x00,0x86,0x33,0x93,0x99}} */

#pragma code_seg(".orpc")
static const unsigned short IOPCHDA_Server_FormatStringOffsetTable[] =
    {
    170,
    232,
    288,
    374,
    436,
    486,
    536
    };

static const MIDL_STUBLESS_PROXY_INFO IOPCHDA_Server_ProxyInfo =
    {
    &Object_StubDesc,
    opchda__MIDL_ProcFormatString.Format,
    &IOPCHDA_Server_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IOPCHDA_Server_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    opchda__MIDL_ProcFormatString.Format,
    &IOPCHDA_Server_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(10) _IOPCHDA_ServerProxyVtbl = 
{
    &IOPCHDA_Server_ProxyInfo,
    &IID_IOPCHDA_Server,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IOPCHDA_Server::GetItemAttributes */ ,
    (void *) (INT_PTR) -1 /* IOPCHDA_Server::GetAggregates */ ,
    (void *) (INT_PTR) -1 /* IOPCHDA_Server::GetHistorianStatus */ ,
    (void *) (INT_PTR) -1 /* IOPCHDA_Server::GetItemHandles */ ,
    (void *) (INT_PTR) -1 /* IOPCHDA_Server::ReleaseItemHandles */ ,
    (void *) (INT_PTR) -1 /* IOPCHDA_Server::ValidateItemIDs */ ,
    (void *) (INT_PTR) -1 /* IOPCHDA_Server::CreateBrowse */
};

const CInterfaceStubVtbl _IOPCHDA_ServerStubVtbl =
{
    &IID_IOPCHDA_Server,
    &IOPCHDA_Server_ServerInfo,
    10,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IOPCHDA_SyncRead, ver. 0.0,
   GUID={0x1F1217B2,0xDEE0,0x11d2,{0xA5,0xE5,0x00,0x00,0x86,0x33,0x93,0x99}} */

#pragma code_seg(".orpc")
static const unsigned short IOPCHDA_SyncRead_FormatStringOffsetTable[] =
    {
    604,
    684,
    764,
    832,
    906
    };

static const MIDL_STUBLESS_PROXY_INFO IOPCHDA_SyncRead_ProxyInfo =
    {
    &Object_StubDesc,
    opchda__MIDL_ProcFormatString.Format,
    &IOPCHDA_SyncRead_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IOPCHDA_SyncRead_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    opchda__MIDL_ProcFormatString.Format,
    &IOPCHDA_SyncRead_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(8) _IOPCHDA_SyncReadProxyVtbl = 
{
    &IOPCHDA_SyncRead_ProxyInfo,
    &IID_IOPCHDA_SyncRead,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IOPCHDA_SyncRead::ReadRaw */ ,
    (void *) (INT_PTR) -1 /* IOPCHDA_SyncRead::ReadProcessed */ ,
    (void *) (INT_PTR) -1 /* IOPCHDA_SyncRead::ReadAtTime */ ,
    (void *) (INT_PTR) -1 /* IOPCHDA_SyncRead::ReadModified */ ,
    (void *) (INT_PTR) -1 /* IOPCHDA_SyncRead::ReadAttribute */
};

const CInterfaceStubVtbl _IOPCHDA_SyncReadStubVtbl =
{
    &IID_IOPCHDA_SyncRead,
    &IOPCHDA_SyncRead_ServerInfo,
    8,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IOPCHDA_SyncUpdate, ver. 0.0,
   GUID={0x1F1217B3,0xDEE0,0x11d2,{0xA5,0xE5,0x00,0x00,0x86,0x33,0x93,0x99}} */

#pragma code_seg(".orpc")
static const unsigned short IOPCHDA_SyncUpdate_FormatStringOffsetTable[] =
    {
    980,
    1018,
    1086,
    1154,
    1222,
    1284
    };

static const MIDL_STUBLESS_PROXY_INFO IOPCHDA_SyncUpdate_ProxyInfo =
    {
    &Object_StubDesc,
    opchda__MIDL_ProcFormatString.Format,
    &IOPCHDA_SyncUpdate_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IOPCHDA_SyncUpdate_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    opchda__MIDL_ProcFormatString.Format,
    &IOPCHDA_SyncUpdate_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(9) _IOPCHDA_SyncUpdateProxyVtbl = 
{
    &IOPCHDA_SyncUpdate_ProxyInfo,
    &IID_IOPCHDA_SyncUpdate,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IOPCHDA_SyncUpdate::QueryCapabilities */ ,
    (void *) (INT_PTR) -1 /* IOPCHDA_SyncUpdate::Insert */ ,
    (void *) (INT_PTR) -1 /* IOPCHDA_SyncUpdate::Replace */ ,
    (void *) (INT_PTR) -1 /* IOPCHDA_SyncUpdate::InsertReplace */ ,
    (void *) (INT_PTR) -1 /* IOPCHDA_SyncUpdate::DeleteRaw */ ,
    (void *) (INT_PTR) -1 /* IOPCHDA_SyncUpdate::DeleteAtTime */
};

const CInterfaceStubVtbl _IOPCHDA_SyncUpdateStubVtbl =
{
    &IID_IOPCHDA_SyncUpdate,
    &IOPCHDA_SyncUpdate_ServerInfo,
    9,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IOPCHDA_SyncAnnotations, ver. 0.0,
   GUID={0x1F1217B4,0xDEE0,0x11d2,{0xA5,0xE5,0x00,0x00,0x86,0x33,0x93,0x99}} */

#pragma code_seg(".orpc")
static const unsigned short IOPCHDA_SyncAnnotations_FormatStringOffsetTable[] =
    {
    980,
    1340,
    1408
    };

static const MIDL_STUBLESS_PROXY_INFO IOPCHDA_SyncAnnotations_ProxyInfo =
    {
    &Object_StubDesc,
    opchda__MIDL_ProcFormatString.Format,
    &IOPCHDA_SyncAnnotations_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IOPCHDA_SyncAnnotations_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    opchda__MIDL_ProcFormatString.Format,
    &IOPCHDA_SyncAnnotations_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(6) _IOPCHDA_SyncAnnotationsProxyVtbl = 
{
    &IOPCHDA_SyncAnnotations_ProxyInfo,
    &IID_IOPCHDA_SyncAnnotations,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IOPCHDA_SyncAnnotations::QueryCapabilities */ ,
    (void *) (INT_PTR) -1 /* IOPCHDA_SyncAnnotations::Read */ ,
    (void *) (INT_PTR) -1 /* IOPCHDA_SyncAnnotations::Insert */
};

const CInterfaceStubVtbl _IOPCHDA_SyncAnnotationsStubVtbl =
{
    &IID_IOPCHDA_SyncAnnotations,
    &IOPCHDA_SyncAnnotations_ServerInfo,
    6,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IOPCHDA_AsyncRead, ver. 0.0,
   GUID={0x1F1217B5,0xDEE0,0x11d2,{0xA5,0xE5,0x00,0x00,0x86,0x33,0x93,0x99}} */

#pragma code_seg(".orpc")
static const unsigned short IOPCHDA_AsyncRead_FormatStringOffsetTable[] =
    {
    1470,
    1556,
    1630,
    1716,
    1802,
    1876,
    1956,
    2036
    };

static const MIDL_STUBLESS_PROXY_INFO IOPCHDA_AsyncRead_ProxyInfo =
    {
    &Object_StubDesc,
    opchda__MIDL_ProcFormatString.Format,
    &IOPCHDA_AsyncRead_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IOPCHDA_AsyncRead_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    opchda__MIDL_ProcFormatString.Format,
    &IOPCHDA_AsyncRead_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(11) _IOPCHDA_AsyncReadProxyVtbl = 
{
    &IOPCHDA_AsyncRead_ProxyInfo,
    &IID_IOPCHDA_AsyncRead,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IOPCHDA_AsyncRead::ReadRaw */ ,
    (void *) (INT_PTR) -1 /* IOPCHDA_AsyncRead::AdviseRaw */ ,
    (void *) (INT_PTR) -1 /* IOPCHDA_AsyncRead::ReadProcessed */ ,
    (void *) (INT_PTR) -1 /* IOPCHDA_AsyncRead::AdviseProcessed */ ,
    (void *) (INT_PTR) -1 /* IOPCHDA_AsyncRead::ReadAtTime */ ,
    (void *) (INT_PTR) -1 /* IOPCHDA_AsyncRead::ReadModified */ ,
    (void *) (INT_PTR) -1 /* IOPCHDA_AsyncRead::ReadAttribute */ ,
    (void *) (INT_PTR) -1 /* IOPCHDA_AsyncRead::Cancel */
};

const CInterfaceStubVtbl _IOPCHDA_AsyncReadStubVtbl =
{
    &IID_IOPCHDA_AsyncRead,
    &IOPCHDA_AsyncRead_ServerInfo,
    11,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IOPCHDA_AsyncUpdate, ver. 0.0,
   GUID={0x1F1217B6,0xDEE0,0x11d2,{0xA5,0xE5,0x00,0x00,0x86,0x33,0x93,0x99}} */

#pragma code_seg(".orpc")
static const unsigned short IOPCHDA_AsyncUpdate_FormatStringOffsetTable[] =
    {
    980,
    2074,
    2154,
    2234,
    2314,
    2388,
    2456
    };

static const MIDL_STUBLESS_PROXY_INFO IOPCHDA_AsyncUpdate_ProxyInfo =
    {
    &Object_StubDesc,
    opchda__MIDL_ProcFormatString.Format,
    &IOPCHDA_AsyncUpdate_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IOPCHDA_AsyncUpdate_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    opchda__MIDL_ProcFormatString.Format,
    &IOPCHDA_AsyncUpdate_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(10) _IOPCHDA_AsyncUpdateProxyVtbl = 
{
    &IOPCHDA_AsyncUpdate_ProxyInfo,
    &IID_IOPCHDA_AsyncUpdate,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IOPCHDA_AsyncUpdate::QueryCapabilities */ ,
    (void *) (INT_PTR) -1 /* IOPCHDA_AsyncUpdate::Insert */ ,
    (void *) (INT_PTR) -1 /* IOPCHDA_AsyncUpdate::Replace */ ,
    (void *) (INT_PTR) -1 /* IOPCHDA_AsyncUpdate::InsertReplace */ ,
    (void *) (INT_PTR) -1 /* IOPCHDA_AsyncUpdate::DeleteRaw */ ,
    (void *) (INT_PTR) -1 /* IOPCHDA_AsyncUpdate::DeleteAtTime */ ,
    (void *) (INT_PTR) -1 /* IOPCHDA_AsyncUpdate::Cancel */
};

const CInterfaceStubVtbl _IOPCHDA_AsyncUpdateStubVtbl =
{
    &IID_IOPCHDA_AsyncUpdate,
    &IOPCHDA_AsyncUpdate_ServerInfo,
    10,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IOPCHDA_AsyncAnnotations, ver. 0.0,
   GUID={0x1F1217B7,0xDEE0,0x11d2,{0xA5,0xE5,0x00,0x00,0x86,0x33,0x93,0x99}} */

#pragma code_seg(".orpc")
static const unsigned short IOPCHDA_AsyncAnnotations_FormatStringOffsetTable[] =
    {
    980,
    2494,
    2568,
    2642
    };

static const MIDL_STUBLESS_PROXY_INFO IOPCHDA_AsyncAnnotations_ProxyInfo =
    {
    &Object_StubDesc,
    opchda__MIDL_ProcFormatString.Format,
    &IOPCHDA_AsyncAnnotations_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IOPCHDA_AsyncAnnotations_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    opchda__MIDL_ProcFormatString.Format,
    &IOPCHDA_AsyncAnnotations_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(7) _IOPCHDA_AsyncAnnotationsProxyVtbl = 
{
    &IOPCHDA_AsyncAnnotations_ProxyInfo,
    &IID_IOPCHDA_AsyncAnnotations,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IOPCHDA_AsyncAnnotations::QueryCapabilities */ ,
    (void *) (INT_PTR) -1 /* IOPCHDA_AsyncAnnotations::Read */ ,
    (void *) (INT_PTR) -1 /* IOPCHDA_AsyncAnnotations::Insert */ ,
    (void *) (INT_PTR) -1 /* IOPCHDA_AsyncAnnotations::Cancel */
};

const CInterfaceStubVtbl _IOPCHDA_AsyncAnnotationsStubVtbl =
{
    &IID_IOPCHDA_AsyncAnnotations,
    &IOPCHDA_AsyncAnnotations_ServerInfo,
    7,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IOPCHDA_Playback, ver. 0.0,
   GUID={0x1F1217B8,0xDEE0,0x11d2,{0xA5,0xE5,0x00,0x00,0x86,0x33,0x93,0x99}} */

#pragma code_seg(".orpc")
static const unsigned short IOPCHDA_Playback_FormatStringOffsetTable[] =
    {
    2680,
    2772,
    2870
    };

static const MIDL_STUBLESS_PROXY_INFO IOPCHDA_Playback_ProxyInfo =
    {
    &Object_StubDesc,
    opchda__MIDL_ProcFormatString.Format,
    &IOPCHDA_Playback_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IOPCHDA_Playback_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    opchda__MIDL_ProcFormatString.Format,
    &IOPCHDA_Playback_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(6) _IOPCHDA_PlaybackProxyVtbl = 
{
    &IOPCHDA_Playback_ProxyInfo,
    &IID_IOPCHDA_Playback,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IOPCHDA_Playback::ReadRawWithUpdate */ ,
    (void *) (INT_PTR) -1 /* IOPCHDA_Playback::ReadProcessedWithUpdate */ ,
    (void *) (INT_PTR) -1 /* IOPCHDA_Playback::Cancel */
};

const CInterfaceStubVtbl _IOPCHDA_PlaybackStubVtbl =
{
    &IID_IOPCHDA_Playback,
    &IOPCHDA_Playback_ServerInfo,
    6,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IOPCHDA_DataCallback, ver. 0.0,
   GUID={0x1F1217B9,0xDEE0,0x11d2,{0xA5,0xE5,0x00,0x00,0x86,0x33,0x93,0x99}} */

#pragma code_seg(".orpc")
static const unsigned short IOPCHDA_DataCallback_FormatStringOffsetTable[] =
    {
    2908,
    2970,
    3032,
    3094,
    3162,
    3224,
    3286,
    3348,
    3410
    };

static const MIDL_STUBLESS_PROXY_INFO IOPCHDA_DataCallback_ProxyInfo =
    {
    &Object_StubDesc,
    opchda__MIDL_ProcFormatString.Format,
    &IOPCHDA_DataCallback_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IOPCHDA_DataCallback_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    opchda__MIDL_ProcFormatString.Format,
    &IOPCHDA_DataCallback_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(12) _IOPCHDA_DataCallbackProxyVtbl = 
{
    &IOPCHDA_DataCallback_ProxyInfo,
    &IID_IOPCHDA_DataCallback,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IOPCHDA_DataCallback::OnDataChange */ ,
    (void *) (INT_PTR) -1 /* IOPCHDA_DataCallback::OnReadComplete */ ,
    (void *) (INT_PTR) -1 /* IOPCHDA_DataCallback::OnReadModifiedComplete */ ,
    (void *) (INT_PTR) -1 /* IOPCHDA_DataCallback::OnReadAttributeComplete */ ,
    (void *) (INT_PTR) -1 /* IOPCHDA_DataCallback::OnReadAnnotations */ ,
    (void *) (INT_PTR) -1 /* IOPCHDA_DataCallback::OnInsertAnnotations */ ,
    (void *) (INT_PTR) -1 /* IOPCHDA_DataCallback::OnPlayback */ ,
    (void *) (INT_PTR) -1 /* IOPCHDA_DataCallback::OnUpdateComplete */ ,
    (void *) (INT_PTR) -1 /* IOPCHDA_DataCallback::OnCancelComplete */
};

const CInterfaceStubVtbl _IOPCHDA_DataCallbackStubVtbl =
{
    &IID_IOPCHDA_DataCallback,
    &IOPCHDA_DataCallback_ServerInfo,
    12,
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
    opchda__MIDL_TypeFormatString.Format,
    1, /* -error bounds_check flag */
    0x50002, /* Ndr library version */
    0,
    0x800025b, /* MIDL Version 8.0.603 */
    0,
    UserMarshalRoutines,
    0,  /* notify & notify_flag routine table */
    0x1, /* MIDL flag */
    0, /* cs routines */
    0,   /* proxy/server info */
    0
    };

const CInterfaceProxyVtbl * const _opchda_ProxyVtblList[] = 
{
    ( CInterfaceProxyVtbl *) &_CATID_OPCHDAServer10ProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IOPCHDA_ServerProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IOPCHDA_BrowserProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IOPCHDA_SyncReadProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IOPCHDA_SyncUpdateProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IOPCHDA_SyncAnnotationsProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IOPCHDA_AsyncReadProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IOPCHDA_AsyncUpdateProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IOPCHDA_AsyncAnnotationsProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IOPCHDA_PlaybackProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IOPCHDA_DataCallbackProxyVtbl,
    0
};

const CInterfaceStubVtbl * const _opchda_StubVtblList[] = 
{
    ( CInterfaceStubVtbl *) &_CATID_OPCHDAServer10StubVtbl,
    ( CInterfaceStubVtbl *) &_IOPCHDA_ServerStubVtbl,
    ( CInterfaceStubVtbl *) &_IOPCHDA_BrowserStubVtbl,
    ( CInterfaceStubVtbl *) &_IOPCHDA_SyncReadStubVtbl,
    ( CInterfaceStubVtbl *) &_IOPCHDA_SyncUpdateStubVtbl,
    ( CInterfaceStubVtbl *) &_IOPCHDA_SyncAnnotationsStubVtbl,
    ( CInterfaceStubVtbl *) &_IOPCHDA_AsyncReadStubVtbl,
    ( CInterfaceStubVtbl *) &_IOPCHDA_AsyncUpdateStubVtbl,
    ( CInterfaceStubVtbl *) &_IOPCHDA_AsyncAnnotationsStubVtbl,
    ( CInterfaceStubVtbl *) &_IOPCHDA_PlaybackStubVtbl,
    ( CInterfaceStubVtbl *) &_IOPCHDA_DataCallbackStubVtbl,
    0
};

PCInterfaceName const _opchda_InterfaceNamesList[] = 
{
    "CATID_OPCHDAServer10",
    "IOPCHDA_Server",
    "IOPCHDA_Browser",
    "IOPCHDA_SyncRead",
    "IOPCHDA_SyncUpdate",
    "IOPCHDA_SyncAnnotations",
    "IOPCHDA_AsyncRead",
    "IOPCHDA_AsyncUpdate",
    "IOPCHDA_AsyncAnnotations",
    "IOPCHDA_Playback",
    "IOPCHDA_DataCallback",
    0
};


#define _opchda_CHECK_IID(n)	IID_GENERIC_CHECK_IID( _opchda, pIID, n)

int __stdcall _opchda_IID_Lookup( const IID * pIID, int * pIndex )
{
    IID_BS_LOOKUP_SETUP

    IID_BS_LOOKUP_INITIAL_TEST( _opchda, 11, 8 )
    IID_BS_LOOKUP_NEXT_TEST( _opchda, 4 )
    IID_BS_LOOKUP_NEXT_TEST( _opchda, 2 )
    IID_BS_LOOKUP_NEXT_TEST( _opchda, 1 )
    IID_BS_LOOKUP_RETURN_RESULT( _opchda, 11, *pIndex )
    
}

const ExtendedProxyFileInfo opchda_ProxyFileInfo = 
{
    (PCInterfaceProxyVtblList *) & _opchda_ProxyVtblList,
    (PCInterfaceStubVtblList *) & _opchda_StubVtblList,
    (const PCInterfaceName * ) & _opchda_InterfaceNamesList,
    0, /* no delegation */
    & _opchda_IID_Lookup, 
    11,
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

