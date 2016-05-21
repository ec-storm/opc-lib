

/* this ALWAYS GENERATED file contains the proxy stub code */


 /* File created by MIDL compiler version 8.00.0603 */
/* at Sat May 07 19:15:49 2016
 */
/* Compiler settings for opc_ae.idl:
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


#include "opc_ae.h"

#define TYPE_FORMAT_STRING_SIZE   1751                              
#define PROC_FORMAT_STRING_SIZE   1995                              
#define EXPR_FORMAT_STRING_SIZE   1                                 
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   1            

typedef struct _opc_ae_MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } opc_ae_MIDL_TYPE_FORMAT_STRING;

typedef struct _opc_ae_MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } opc_ae_MIDL_PROC_FORMAT_STRING;

typedef struct _opc_ae_MIDL_EXPR_FORMAT_STRING
    {
    long          Pad;
    unsigned char  Format[ EXPR_FORMAT_STRING_SIZE ];
    } opc_ae_MIDL_EXPR_FORMAT_STRING;


static const RPC_SYNTAX_IDENTIFIER  _RpcTransferSyntax = 
{{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}};


extern const opc_ae_MIDL_TYPE_FORMAT_STRING opc_ae__MIDL_TypeFormatString;
extern const opc_ae_MIDL_PROC_FORMAT_STRING opc_ae__MIDL_ProcFormatString;
extern const opc_ae_MIDL_EXPR_FORMAT_STRING opc_ae__MIDL_ExprFormatString;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO OPCEventServerCATID_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO OPCEventServerCATID_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IOPCEventServer_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IOPCEventServer_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IOPCEventSubscriptionMgt_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IOPCEventSubscriptionMgt_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IOPCEventAreaBrowser_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IOPCEventAreaBrowser_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IOPCEventSink_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IOPCEventSink_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IOPCEventServer2_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IOPCEventServer2_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IOPCEventSubscriptionMgt2_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IOPCEventSubscriptionMgt2_ProxyInfo;


extern const USER_MARSHAL_ROUTINE_QUADRUPLE UserMarshalRoutines[ WIRE_MARSHAL_TABLE_SIZE ];

#if !defined(__RPC_WIN64__)
#error  Invalid build platform for this stub.
#endif

static const opc_ae_MIDL_PROC_FORMAT_STRING opc_ae__MIDL_ProcFormatString =
    {
        0,
        {

	/* Procedure GetStatus */

			0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/*  2 */	NdrFcLong( 0x0 ),	/* 0 */
/*  6 */	NdrFcShort( 0x3 ),	/* 3 */
/*  8 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 10 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12 */	NdrFcShort( 0x8 ),	/* 8 */
/* 14 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 16 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 18 */	NdrFcShort( 0x0 ),	/* 0 */
/* 20 */	NdrFcShort( 0x0 ),	/* 0 */
/* 22 */	NdrFcShort( 0x0 ),	/* 0 */
/* 24 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppEventServerStatus */

/* 26 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 28 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 30 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Return value */

/* 32 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 34 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 36 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateEventSubscription */

/* 38 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 40 */	NdrFcLong( 0x0 ),	/* 0 */
/* 44 */	NdrFcShort( 0x4 ),	/* 4 */
/* 46 */	NdrFcShort( 0x50 ),	/* X64 Stack size/offset = 80 */
/* 48 */	NdrFcShort( 0x64 ),	/* 100 */
/* 50 */	NdrFcShort( 0x40 ),	/* 64 */
/* 52 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x9,		/* 9 */
/* 54 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 56 */	NdrFcShort( 0x1 ),	/* 1 */
/* 58 */	NdrFcShort( 0x0 ),	/* 0 */
/* 60 */	NdrFcShort( 0x0 ),	/* 0 */
/* 62 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bActive */

/* 64 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 66 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 68 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter dwBufferTime */

/* 70 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 72 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 74 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter dwMaxSize */

/* 76 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 78 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 80 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter hClientSubscription */

/* 82 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 84 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 86 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter riid */

/* 88 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 90 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 92 */	NdrFcShort( 0x3c ),	/* Type Offset=60 */

	/* Parameter ppUnk */

/* 94 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 96 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 98 */	NdrFcShort( 0x48 ),	/* Type Offset=72 */

	/* Parameter pdwRevisedBufferTime */

/* 100 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 102 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 104 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pdwRevisedMaxSize */

/* 106 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 108 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 110 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 112 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 114 */	NdrFcShort( 0x48 ),	/* X64 Stack size/offset = 72 */
/* 116 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure QueryAvailableFilters */

/* 118 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 120 */	NdrFcLong( 0x0 ),	/* 0 */
/* 124 */	NdrFcShort( 0x5 ),	/* 5 */
/* 126 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 128 */	NdrFcShort( 0x0 ),	/* 0 */
/* 130 */	NdrFcShort( 0x24 ),	/* 36 */
/* 132 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 134 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 136 */	NdrFcShort( 0x0 ),	/* 0 */
/* 138 */	NdrFcShort( 0x0 ),	/* 0 */
/* 140 */	NdrFcShort( 0x0 ),	/* 0 */
/* 142 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pdwFilterMask */

/* 144 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 146 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 148 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 150 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 152 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 154 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure QueryEventCategories */

/* 156 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 158 */	NdrFcLong( 0x0 ),	/* 0 */
/* 162 */	NdrFcShort( 0x6 ),	/* 6 */
/* 164 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 166 */	NdrFcShort( 0x8 ),	/* 8 */
/* 168 */	NdrFcShort( 0x24 ),	/* 36 */
/* 170 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x5,		/* 5 */
/* 172 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 174 */	NdrFcShort( 0x1 ),	/* 1 */
/* 176 */	NdrFcShort( 0x0 ),	/* 0 */
/* 178 */	NdrFcShort( 0x0 ),	/* 0 */
/* 180 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dwEventType */

/* 182 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 184 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 186 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pdwCount */

/* 188 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 190 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 192 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppdwEventCategories */

/* 194 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 196 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 198 */	NdrFcShort( 0x58 ),	/* Type Offset=88 */

	/* Parameter ppszEventCategoryDescs */

/* 200 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 202 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 204 */	NdrFcShort( 0x6c ),	/* Type Offset=108 */

	/* Return value */

/* 206 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 208 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 210 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure QueryConditionNames */

/* 212 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 214 */	NdrFcLong( 0x0 ),	/* 0 */
/* 218 */	NdrFcShort( 0x7 ),	/* 7 */
/* 220 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 222 */	NdrFcShort( 0x8 ),	/* 8 */
/* 224 */	NdrFcShort( 0x24 ),	/* 36 */
/* 226 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 228 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 230 */	NdrFcShort( 0x1 ),	/* 1 */
/* 232 */	NdrFcShort( 0x0 ),	/* 0 */
/* 234 */	NdrFcShort( 0x0 ),	/* 0 */
/* 236 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dwEventCategory */

/* 238 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 240 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 242 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pdwCount */

/* 244 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 246 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 248 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppszConditionNames */

/* 250 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 252 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 254 */	NdrFcShort( 0x6c ),	/* Type Offset=108 */

	/* Return value */

/* 256 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 258 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 260 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure QuerySubConditionNames */

/* 262 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 264 */	NdrFcLong( 0x0 ),	/* 0 */
/* 268 */	NdrFcShort( 0x8 ),	/* 8 */
/* 270 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 272 */	NdrFcShort( 0x0 ),	/* 0 */
/* 274 */	NdrFcShort( 0x24 ),	/* 36 */
/* 276 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 278 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 280 */	NdrFcShort( 0x1 ),	/* 1 */
/* 282 */	NdrFcShort( 0x0 ),	/* 0 */
/* 284 */	NdrFcShort( 0x0 ),	/* 0 */
/* 286 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter szConditionName */

/* 288 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 290 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 292 */	NdrFcShort( 0x8c ),	/* Type Offset=140 */

	/* Parameter pdwCount */

/* 294 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 296 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 298 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppszSubConditionNames */

/* 300 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 302 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 304 */	NdrFcShort( 0x6c ),	/* Type Offset=108 */

	/* Return value */

/* 306 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 308 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 310 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure QuerySourceConditions */

/* 312 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 314 */	NdrFcLong( 0x0 ),	/* 0 */
/* 318 */	NdrFcShort( 0x9 ),	/* 9 */
/* 320 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 322 */	NdrFcShort( 0x0 ),	/* 0 */
/* 324 */	NdrFcShort( 0x24 ),	/* 36 */
/* 326 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 328 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 330 */	NdrFcShort( 0x1 ),	/* 1 */
/* 332 */	NdrFcShort( 0x0 ),	/* 0 */
/* 334 */	NdrFcShort( 0x0 ),	/* 0 */
/* 336 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter szSource */

/* 338 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 340 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 342 */	NdrFcShort( 0x8c ),	/* Type Offset=140 */

	/* Parameter pdwCount */

/* 344 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 346 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 348 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppszConditionNames */

/* 350 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 352 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 354 */	NdrFcShort( 0x6c ),	/* Type Offset=108 */

	/* Return value */

/* 356 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 358 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 360 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure QueryEventAttributes */

/* 362 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 364 */	NdrFcLong( 0x0 ),	/* 0 */
/* 368 */	NdrFcShort( 0xa ),	/* 10 */
/* 370 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 372 */	NdrFcShort( 0x8 ),	/* 8 */
/* 374 */	NdrFcShort( 0x24 ),	/* 36 */
/* 376 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x6,		/* 6 */
/* 378 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 380 */	NdrFcShort( 0x1 ),	/* 1 */
/* 382 */	NdrFcShort( 0x0 ),	/* 0 */
/* 384 */	NdrFcShort( 0x0 ),	/* 0 */
/* 386 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dwEventCategory */

/* 388 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 390 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 392 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pdwCount */

/* 394 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 396 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 398 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppdwAttrIDs */

/* 400 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 402 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 404 */	NdrFcShort( 0x58 ),	/* Type Offset=88 */

	/* Parameter ppszAttrDescs */

/* 406 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 408 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 410 */	NdrFcShort( 0x6c ),	/* Type Offset=108 */

	/* Parameter ppvtAttrTypes */

/* 412 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 414 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 416 */	NdrFcShort( 0x8e ),	/* Type Offset=142 */

	/* Return value */

/* 418 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 420 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 422 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure TranslateToItemIDs */

/* 424 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 426 */	NdrFcLong( 0x0 ),	/* 0 */
/* 430 */	NdrFcShort( 0xb ),	/* 11 */
/* 432 */	NdrFcShort( 0x58 ),	/* X64 Stack size/offset = 88 */
/* 434 */	NdrFcShort( 0x10 ),	/* 16 */
/* 436 */	NdrFcShort( 0x8 ),	/* 8 */
/* 438 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0xa,		/* 10 */
/* 440 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 442 */	NdrFcShort( 0x1 ),	/* 1 */
/* 444 */	NdrFcShort( 0x1 ),	/* 1 */
/* 446 */	NdrFcShort( 0x0 ),	/* 0 */
/* 448 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter szSource */

/* 450 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 452 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 454 */	NdrFcShort( 0x8c ),	/* Type Offset=140 */

	/* Parameter dwEventCategory */

/* 456 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 458 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 460 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter szConditionName */

/* 462 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 464 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 466 */	NdrFcShort( 0x8c ),	/* Type Offset=140 */

	/* Parameter szSubconditionName */

/* 468 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 470 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 472 */	NdrFcShort( 0x8c ),	/* Type Offset=140 */

	/* Parameter dwCount */

/* 474 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 476 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 478 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pdwAssocAttrIDs */

/* 480 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 482 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 484 */	NdrFcShort( 0xa6 ),	/* Type Offset=166 */

	/* Parameter ppszAttrItemIDs */

/* 486 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 488 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 490 */	NdrFcShort( 0xb2 ),	/* Type Offset=178 */

	/* Parameter ppszNodeNames */

/* 492 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 494 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 496 */	NdrFcShort( 0xb2 ),	/* Type Offset=178 */

	/* Parameter ppCLSIDs */

/* 498 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 500 */	NdrFcShort( 0x48 ),	/* X64 Stack size/offset = 72 */
/* 502 */	NdrFcShort( 0xd0 ),	/* Type Offset=208 */

	/* Return value */

/* 504 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 506 */	NdrFcShort( 0x50 ),	/* X64 Stack size/offset = 80 */
/* 508 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetConditionState */

/* 510 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 512 */	NdrFcLong( 0x0 ),	/* 0 */
/* 516 */	NdrFcShort( 0xc ),	/* 12 */
/* 518 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 520 */	NdrFcShort( 0x8 ),	/* 8 */
/* 522 */	NdrFcShort( 0x8 ),	/* 8 */
/* 524 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 526 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 528 */	NdrFcShort( 0x1 ),	/* 1 */
/* 530 */	NdrFcShort( 0x1 ),	/* 1 */
/* 532 */	NdrFcShort( 0x0 ),	/* 0 */
/* 534 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter szSource */

/* 536 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 538 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 540 */	NdrFcShort( 0x8c ),	/* Type Offset=140 */

	/* Parameter szConditionName */

/* 542 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 544 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 546 */	NdrFcShort( 0x8c ),	/* Type Offset=140 */

	/* Parameter dwNumEventAttrs */

/* 548 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 550 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 552 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pdwAttributeIDs */

/* 554 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 556 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 558 */	NdrFcShort( 0xf2 ),	/* Type Offset=242 */

	/* Parameter ppConditionState */

/* 560 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 562 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 564 */	NdrFcShort( 0xfe ),	/* Type Offset=254 */

	/* Return value */

/* 566 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 568 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 570 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EnableConditionByArea */

/* 572 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 574 */	NdrFcLong( 0x0 ),	/* 0 */
/* 578 */	NdrFcShort( 0xd ),	/* 13 */
/* 580 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 582 */	NdrFcShort( 0x8 ),	/* 8 */
/* 584 */	NdrFcShort( 0x8 ),	/* 8 */
/* 586 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 588 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 590 */	NdrFcShort( 0x0 ),	/* 0 */
/* 592 */	NdrFcShort( 0x1 ),	/* 1 */
/* 594 */	NdrFcShort( 0x0 ),	/* 0 */
/* 596 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dwNumAreas */

/* 598 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 600 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 602 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pszAreas */

/* 604 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 606 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 608 */	NdrFcShort( 0x566 ),	/* Type Offset=1382 */

	/* Return value */

/* 610 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 612 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 614 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EnableConditionBySource */

/* 616 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 618 */	NdrFcLong( 0x0 ),	/* 0 */
/* 622 */	NdrFcShort( 0xe ),	/* 14 */
/* 624 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 626 */	NdrFcShort( 0x8 ),	/* 8 */
/* 628 */	NdrFcShort( 0x8 ),	/* 8 */
/* 630 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 632 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 634 */	NdrFcShort( 0x0 ),	/* 0 */
/* 636 */	NdrFcShort( 0x1 ),	/* 1 */
/* 638 */	NdrFcShort( 0x0 ),	/* 0 */
/* 640 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dwNumSources */

/* 642 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 644 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 646 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pszSources */

/* 648 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 650 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 652 */	NdrFcShort( 0x566 ),	/* Type Offset=1382 */

	/* Return value */

/* 654 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 656 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 658 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DisableConditionByArea */

/* 660 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 662 */	NdrFcLong( 0x0 ),	/* 0 */
/* 666 */	NdrFcShort( 0xf ),	/* 15 */
/* 668 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 670 */	NdrFcShort( 0x8 ),	/* 8 */
/* 672 */	NdrFcShort( 0x8 ),	/* 8 */
/* 674 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 676 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 678 */	NdrFcShort( 0x0 ),	/* 0 */
/* 680 */	NdrFcShort( 0x1 ),	/* 1 */
/* 682 */	NdrFcShort( 0x0 ),	/* 0 */
/* 684 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dwNumAreas */

/* 686 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 688 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 690 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pszAreas */

/* 692 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 694 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 696 */	NdrFcShort( 0x566 ),	/* Type Offset=1382 */

	/* Return value */

/* 698 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 700 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 702 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DisableConditionBySource */

/* 704 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 706 */	NdrFcLong( 0x0 ),	/* 0 */
/* 710 */	NdrFcShort( 0x10 ),	/* 16 */
/* 712 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 714 */	NdrFcShort( 0x8 ),	/* 8 */
/* 716 */	NdrFcShort( 0x8 ),	/* 8 */
/* 718 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 720 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 722 */	NdrFcShort( 0x0 ),	/* 0 */
/* 724 */	NdrFcShort( 0x1 ),	/* 1 */
/* 726 */	NdrFcShort( 0x0 ),	/* 0 */
/* 728 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dwNumSources */

/* 730 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 732 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 734 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pszSources */

/* 736 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 738 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 740 */	NdrFcShort( 0x566 ),	/* Type Offset=1382 */

	/* Return value */

/* 742 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 744 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 746 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure AckCondition */

/* 748 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 750 */	NdrFcLong( 0x0 ),	/* 0 */
/* 754 */	NdrFcShort( 0x11 ),	/* 17 */
/* 756 */	NdrFcShort( 0x50 ),	/* X64 Stack size/offset = 80 */
/* 758 */	NdrFcShort( 0x8 ),	/* 8 */
/* 760 */	NdrFcShort( 0x8 ),	/* 8 */
/* 762 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x9,		/* 9 */
/* 764 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 766 */	NdrFcShort( 0x1 ),	/* 1 */
/* 768 */	NdrFcShort( 0x1 ),	/* 1 */
/* 770 */	NdrFcShort( 0x0 ),	/* 0 */
/* 772 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dwCount */

/* 774 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 776 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 778 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter szAcknowledgerID */

/* 780 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 782 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 784 */	NdrFcShort( 0x8c ),	/* Type Offset=140 */

	/* Parameter szComment */

/* 786 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 788 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 790 */	NdrFcShort( 0x8c ),	/* Type Offset=140 */

	/* Parameter pszSource */

/* 792 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 794 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 796 */	NdrFcShort( 0x566 ),	/* Type Offset=1382 */

	/* Parameter pszConditionName */

/* 798 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 800 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 802 */	NdrFcShort( 0x566 ),	/* Type Offset=1382 */

	/* Parameter pftActiveTime */

/* 804 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 806 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 808 */	NdrFcShort( 0x580 ),	/* Type Offset=1408 */

	/* Parameter pdwCookie */

/* 810 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 812 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 814 */	NdrFcShort( 0x59a ),	/* Type Offset=1434 */

	/* Parameter ppErrors */

/* 816 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 818 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 820 */	NdrFcShort( 0x5a6 ),	/* Type Offset=1446 */

	/* Return value */

/* 822 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 824 */	NdrFcShort( 0x48 ),	/* X64 Stack size/offset = 72 */
/* 826 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateAreaBrowser */

/* 828 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 830 */	NdrFcLong( 0x0 ),	/* 0 */
/* 834 */	NdrFcShort( 0x12 ),	/* 18 */
/* 836 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 838 */	NdrFcShort( 0x44 ),	/* 68 */
/* 840 */	NdrFcShort( 0x8 ),	/* 8 */
/* 842 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 844 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 846 */	NdrFcShort( 0x1 ),	/* 1 */
/* 848 */	NdrFcShort( 0x0 ),	/* 0 */
/* 850 */	NdrFcShort( 0x0 ),	/* 0 */
/* 852 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter riid */

/* 854 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 856 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 858 */	NdrFcShort( 0x3c ),	/* Type Offset=60 */

	/* Parameter ppUnk */

/* 860 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 862 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 864 */	NdrFcShort( 0x5ae ),	/* Type Offset=1454 */

	/* Return value */

/* 866 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 868 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 870 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetFilter */

/* 872 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 874 */	NdrFcLong( 0x0 ),	/* 0 */
/* 878 */	NdrFcShort( 0x3 ),	/* 3 */
/* 880 */	NdrFcShort( 0x58 ),	/* X64 Stack size/offset = 88 */
/* 882 */	NdrFcShort( 0x30 ),	/* 48 */
/* 884 */	NdrFcShort( 0x8 ),	/* 8 */
/* 886 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0xa,		/* 10 */
/* 888 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 890 */	NdrFcShort( 0x0 ),	/* 0 */
/* 892 */	NdrFcShort( 0x1 ),	/* 1 */
/* 894 */	NdrFcShort( 0x0 ),	/* 0 */
/* 896 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dwEventType */

/* 898 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 900 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 902 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter dwNumCategories */

/* 904 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 906 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 908 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pdwEventCategories */

/* 910 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 912 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 914 */	NdrFcShort( 0x5be ),	/* Type Offset=1470 */

	/* Parameter dwLowSeverity */

/* 916 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 918 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 920 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter dwHighSeverity */

/* 922 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 924 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 926 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter dwNumAreas */

/* 928 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 930 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 932 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pszAreaList */

/* 934 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 936 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 938 */	NdrFcShort( 0x5ce ),	/* Type Offset=1486 */

	/* Parameter dwNumSources */

/* 940 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 942 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 944 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pszSourceList */

/* 946 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 948 */	NdrFcShort( 0x48 ),	/* X64 Stack size/offset = 72 */
/* 950 */	NdrFcShort( 0x5e8 ),	/* Type Offset=1512 */

	/* Return value */

/* 952 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 954 */	NdrFcShort( 0x50 ),	/* X64 Stack size/offset = 80 */
/* 956 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetFilter */

/* 958 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 960 */	NdrFcLong( 0x0 ),	/* 0 */
/* 964 */	NdrFcShort( 0x4 ),	/* 4 */
/* 966 */	NdrFcShort( 0x58 ),	/* X64 Stack size/offset = 88 */
/* 968 */	NdrFcShort( 0x0 ),	/* 0 */
/* 970 */	NdrFcShort( 0xb0 ),	/* 176 */
/* 972 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0xa,		/* 10 */
/* 974 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 976 */	NdrFcShort( 0x1 ),	/* 1 */
/* 978 */	NdrFcShort( 0x0 ),	/* 0 */
/* 980 */	NdrFcShort( 0x0 ),	/* 0 */
/* 982 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pdwEventType */

/* 984 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 986 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 988 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pdwNumCategories */

/* 990 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 992 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 994 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppdwEventCategories */

/* 996 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 998 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1000 */	NdrFcShort( 0x58 ),	/* Type Offset=88 */

	/* Parameter pdwLowSeverity */

/* 1002 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1004 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1006 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pdwHighSeverity */

/* 1008 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1010 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 1012 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pdwNumAreas */

/* 1014 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1016 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 1018 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppszAreaList */

/* 1020 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 1022 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 1024 */	NdrFcShort( 0x5fe ),	/* Type Offset=1534 */

	/* Parameter pdwNumSources */

/* 1026 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1028 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 1030 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppszSourceList */

/* 1032 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 1034 */	NdrFcShort( 0x48 ),	/* X64 Stack size/offset = 72 */
/* 1036 */	NdrFcShort( 0x61c ),	/* Type Offset=1564 */

	/* Return value */

/* 1038 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1040 */	NdrFcShort( 0x50 ),	/* X64 Stack size/offset = 80 */
/* 1042 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SelectReturnedAttributes */

/* 1044 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1046 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1050 */	NdrFcShort( 0x5 ),	/* 5 */
/* 1052 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 1054 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1056 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1058 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 1060 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1062 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1064 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1066 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1068 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dwEventCategory */

/* 1070 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1072 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1074 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter dwCount */

/* 1076 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1078 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1080 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter dwAttributeIDs */

/* 1082 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1084 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1086 */	NdrFcShort( 0x5be ),	/* Type Offset=1470 */

	/* Return value */

/* 1088 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1090 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1092 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetReturnedAttributes */

/* 1094 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1096 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1100 */	NdrFcShort( 0x6 ),	/* 6 */
/* 1102 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 1104 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1106 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1108 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 1110 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 1112 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1114 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1116 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1118 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dwEventCategory */

/* 1120 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1122 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1124 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pdwCount */

/* 1126 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1128 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1130 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppdwAttributeIDs */

/* 1132 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 1134 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1136 */	NdrFcShort( 0x58 ),	/* Type Offset=88 */

	/* Return value */

/* 1138 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1140 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1142 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Refresh */

/* 1144 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1146 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1150 */	NdrFcShort( 0x7 ),	/* 7 */
/* 1152 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1154 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1156 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1158 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1160 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1162 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1164 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1166 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1168 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dwConnection */

/* 1170 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1172 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1174 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1176 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1178 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1180 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CancelRefresh */

/* 1182 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1184 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1188 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1190 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1192 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1194 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1196 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1198 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1200 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1202 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1204 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1206 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dwConnection */

/* 1208 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1210 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1212 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1214 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1216 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1218 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetState */

/* 1220 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1222 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1226 */	NdrFcShort( 0x9 ),	/* 9 */
/* 1228 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 1230 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1232 */	NdrFcShort( 0x78 ),	/* 120 */
/* 1234 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x5,		/* 5 */
/* 1236 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1238 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1240 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1242 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1244 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pbActive */

/* 1246 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1248 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1250 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pdwBufferTime */

/* 1252 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1254 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1256 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pdwMaxSize */

/* 1258 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1260 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1262 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter phClientSubscription */

/* 1264 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1266 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1268 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1270 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1272 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 1274 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetState */

/* 1276 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1278 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1282 */	NdrFcShort( 0xa ),	/* 10 */
/* 1284 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 1286 */	NdrFcShort( 0x5c ),	/* 92 */
/* 1288 */	NdrFcShort( 0x40 ),	/* 64 */
/* 1290 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x7,		/* 7 */
/* 1292 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1294 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1296 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1298 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1300 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pbActive */

/* 1302 */	NdrFcShort( 0xa ),	/* Flags:  must free, in, */
/* 1304 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1306 */	NdrFcShort( 0x63a ),	/* Type Offset=1594 */

	/* Parameter pdwBufferTime */

/* 1308 */	NdrFcShort( 0xa ),	/* Flags:  must free, in, */
/* 1310 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1312 */	NdrFcShort( 0x63a ),	/* Type Offset=1594 */

	/* Parameter pdwMaxSize */

/* 1314 */	NdrFcShort( 0xa ),	/* Flags:  must free, in, */
/* 1316 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1318 */	NdrFcShort( 0x63a ),	/* Type Offset=1594 */

	/* Parameter hClientSubscription */

/* 1320 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1322 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1324 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pdwRevisedBufferTime */

/* 1326 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1328 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 1330 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pdwRevisedMaxSize */

/* 1332 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1334 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 1336 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1338 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1340 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 1342 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ChangeBrowsePosition */

/* 1344 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1346 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1350 */	NdrFcShort( 0x3 ),	/* 3 */
/* 1352 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1354 */	NdrFcShort( 0x6 ),	/* 6 */
/* 1356 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1358 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 1360 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1362 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1364 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1366 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1368 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dwBrowseDirection */

/* 1370 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1372 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1374 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter szString */

/* 1376 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1378 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1380 */	NdrFcShort( 0x8c ),	/* Type Offset=140 */

	/* Return value */

/* 1382 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1384 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1386 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure BrowseOPCAreas */

/* 1388 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1390 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1394 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1396 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 1398 */	NdrFcShort( 0x6 ),	/* 6 */
/* 1400 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1402 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 1404 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1406 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1408 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1410 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1412 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dwBrowseFilterType */

/* 1414 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1416 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1418 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter szFilterCriteria */

/* 1420 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1422 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1424 */	NdrFcShort( 0x8c ),	/* Type Offset=140 */

	/* Parameter ppIEnumString */

/* 1426 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 1428 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1430 */	NdrFcShort( 0x63e ),	/* Type Offset=1598 */

	/* Return value */

/* 1432 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1434 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1436 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetQualifiedAreaName */

/* 1438 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1440 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1444 */	NdrFcShort( 0x5 ),	/* 5 */
/* 1446 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1448 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1450 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1452 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 1454 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1456 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1458 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1460 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1462 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter szAreaName */

/* 1464 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1466 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1468 */	NdrFcShort( 0x8c ),	/* Type Offset=140 */

	/* Parameter pszQualifiedAreaName */

/* 1470 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 1472 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1474 */	NdrFcShort( 0x654 ),	/* Type Offset=1620 */

	/* Return value */

/* 1476 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1478 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1480 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetQualifiedSourceName */

/* 1482 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1484 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1488 */	NdrFcShort( 0x6 ),	/* 6 */
/* 1490 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1492 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1494 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1496 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 1498 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1500 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1502 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1504 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1506 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter szSourceName */

/* 1508 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1510 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1512 */	NdrFcShort( 0x8c ),	/* Type Offset=140 */

	/* Parameter pszQualifiedSourceName */

/* 1514 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 1516 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1518 */	NdrFcShort( 0x654 ),	/* Type Offset=1620 */

	/* Return value */

/* 1520 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1522 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1524 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnEvent */

/* 1526 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1528 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1532 */	NdrFcShort( 0x3 ),	/* 3 */
/* 1534 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 1536 */	NdrFcShort( 0x20 ),	/* 32 */
/* 1538 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1540 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 1542 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1544 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1546 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1548 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1550 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hClientSubscription */

/* 1552 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1554 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1556 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter bRefresh */

/* 1558 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1560 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1562 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter bLastRefresh */

/* 1564 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1566 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1568 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter dwCount */

/* 1570 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1572 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1574 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pEvents */

/* 1576 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1578 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 1580 */	NdrFcShort( 0x6c0 ),	/* Type Offset=1728 */

	/* Return value */

/* 1582 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1584 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 1586 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EnableConditionByArea2 */

/* 1588 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1590 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1594 */	NdrFcShort( 0x13 ),	/* 19 */
/* 1596 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 1598 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1600 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1602 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 1604 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 1606 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1608 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1610 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1612 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dwNumAreas */

/* 1614 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1616 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1618 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pszAreas */

/* 1620 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1622 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1624 */	NdrFcShort( 0x566 ),	/* Type Offset=1382 */

	/* Parameter ppErrors */

/* 1626 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 1628 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1630 */	NdrFcShort( 0x5a6 ),	/* Type Offset=1446 */

	/* Return value */

/* 1632 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1634 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1636 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EnableConditionBySource2 */

/* 1638 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1640 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1644 */	NdrFcShort( 0x14 ),	/* 20 */
/* 1646 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 1648 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1650 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1652 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 1654 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 1656 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1658 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1660 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1662 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dwNumSources */

/* 1664 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1666 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1668 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pszSources */

/* 1670 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1672 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1674 */	NdrFcShort( 0x566 ),	/* Type Offset=1382 */

	/* Parameter ppErrors */

/* 1676 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 1678 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1680 */	NdrFcShort( 0x5a6 ),	/* Type Offset=1446 */

	/* Return value */

/* 1682 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1684 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1686 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DisableConditionByArea2 */

/* 1688 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1690 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1694 */	NdrFcShort( 0x15 ),	/* 21 */
/* 1696 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 1698 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1700 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1702 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 1704 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 1706 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1708 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1710 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1712 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dwNumAreas */

/* 1714 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1716 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1718 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pszAreas */

/* 1720 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1722 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1724 */	NdrFcShort( 0x566 ),	/* Type Offset=1382 */

	/* Parameter ppErrors */

/* 1726 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 1728 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1730 */	NdrFcShort( 0x5a6 ),	/* Type Offset=1446 */

	/* Return value */

/* 1732 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1734 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1736 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DisableConditionBySource2 */

/* 1738 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1740 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1744 */	NdrFcShort( 0x16 ),	/* 22 */
/* 1746 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 1748 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1750 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1752 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 1754 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 1756 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1758 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1760 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1762 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dwNumSources */

/* 1764 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1766 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1768 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pszSources */

/* 1770 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1772 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1774 */	NdrFcShort( 0x566 ),	/* Type Offset=1382 */

	/* Parameter ppErrors */

/* 1776 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 1778 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1780 */	NdrFcShort( 0x5a6 ),	/* Type Offset=1446 */

	/* Return value */

/* 1782 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1784 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1786 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetEnableStateByArea */

/* 1788 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1790 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1794 */	NdrFcShort( 0x17 ),	/* 23 */
/* 1796 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 1798 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1800 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1802 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 1804 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 1806 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1808 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1810 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1812 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dwNumAreas */

/* 1814 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1816 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1818 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pszAreas */

/* 1820 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1822 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1824 */	NdrFcShort( 0x566 ),	/* Type Offset=1382 */

	/* Parameter pbEnabled */

/* 1826 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 1828 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1830 */	NdrFcShort( 0x5a6 ),	/* Type Offset=1446 */

	/* Parameter pbEffectivelyEnabled */

/* 1832 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 1834 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1836 */	NdrFcShort( 0x5a6 ),	/* Type Offset=1446 */

	/* Parameter ppErrors */

/* 1838 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 1840 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 1842 */	NdrFcShort( 0x5a6 ),	/* Type Offset=1446 */

	/* Return value */

/* 1844 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1846 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 1848 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetEnableStateBySource */

/* 1850 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1852 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1856 */	NdrFcShort( 0x18 ),	/* 24 */
/* 1858 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 1860 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1862 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1864 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 1866 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 1868 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1870 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1872 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1874 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dwNumSources */

/* 1876 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1878 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1880 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pszSources */

/* 1882 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1884 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1886 */	NdrFcShort( 0x566 ),	/* Type Offset=1382 */

	/* Parameter pbEnabled */

/* 1888 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 1890 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1892 */	NdrFcShort( 0x5a6 ),	/* Type Offset=1446 */

	/* Parameter pbEffectivelyEnabled */

/* 1894 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 1896 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1898 */	NdrFcShort( 0x5a6 ),	/* Type Offset=1446 */

	/* Parameter ppErrors */

/* 1900 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 1902 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 1904 */	NdrFcShort( 0x5a6 ),	/* Type Offset=1446 */

	/* Return value */

/* 1906 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1908 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 1910 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetKeepAlive */

/* 1912 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1914 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1918 */	NdrFcShort( 0xb ),	/* 11 */
/* 1920 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1922 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1924 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1926 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 1928 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1930 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1932 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1934 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1936 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dwKeepAliveTime */

/* 1938 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1940 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1942 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pdwRevisedKeepAliveTime */

/* 1944 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1946 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1948 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1950 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1952 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1954 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetKeepAlive */

/* 1956 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1958 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1962 */	NdrFcShort( 0xc ),	/* 12 */
/* 1964 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1966 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1968 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1970 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1972 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1974 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1976 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1978 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1980 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pdwKeepAliveTime */

/* 1982 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1984 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1986 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1988 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1990 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1992 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

			0x0
        }
    };

static const opc_ae_MIDL_TYPE_FORMAT_STRING opc_ae__MIDL_TypeFormatString =
    {
        0,
        {
			NdrFcShort( 0x0 ),	/* 0 */
/*  2 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/*  4 */	NdrFcShort( 0x2 ),	/* Offset= 2 (6) */
/*  6 */	
			0x13, 0x0,	/* FC_OP */
/*  8 */	NdrFcShort( 0xa ),	/* Offset= 10 (18) */
/* 10 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 12 */	NdrFcShort( 0x8 ),	/* 8 */
/* 14 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 16 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 18 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 20 */	NdrFcShort( 0x30 ),	/* 48 */
/* 22 */	NdrFcShort( 0x0 ),	/* 0 */
/* 24 */	NdrFcShort( 0x16 ),	/* Offset= 22 (46) */
/* 26 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 28 */	NdrFcShort( 0xffee ),	/* Offset= -18 (10) */
/* 30 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 32 */	NdrFcShort( 0xffea ),	/* Offset= -22 (10) */
/* 34 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 36 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (10) */
/* 38 */	0xd,		/* FC_ENUM16 */
			0x6,		/* FC_SHORT */
/* 40 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 42 */	0x6,		/* FC_SHORT */
			0x40,		/* FC_STRUCTPAD4 */
/* 44 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 46 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 48 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 50 */	
			0x11, 0x0,	/* FC_RP */
/* 52 */	NdrFcShort( 0x8 ),	/* Offset= 8 (60) */
/* 54 */	
			0x1d,		/* FC_SMFARRAY */
			0x0,		/* 0 */
/* 56 */	NdrFcShort( 0x8 ),	/* 8 */
/* 58 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 60 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 62 */	NdrFcShort( 0x10 ),	/* 16 */
/* 64 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 66 */	0x6,		/* FC_SHORT */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 68 */	0x0,		/* 0 */
			NdrFcShort( 0xfff1 ),	/* Offset= -15 (54) */
			0x5b,		/* FC_END */
/* 72 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 74 */	NdrFcShort( 0x2 ),	/* Offset= 2 (76) */
/* 76 */	
			0x2f,		/* FC_IP */
			0x5c,		/* FC_PAD */
/* 78 */	0x2b,		/* Corr desc:  parameter, FC_HYPER */
			0x0,		/*  */
/* 80 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 82 */	NdrFcShort( 0x5 ),	/* Corr flags:  early, iid_is, */
/* 84 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 86 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 88 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 90 */	NdrFcShort( 0x2 ),	/* Offset= 2 (92) */
/* 92 */	
			0x13, 0x0,	/* FC_OP */
/* 94 */	NdrFcShort( 0x2 ),	/* Offset= 2 (96) */
/* 96 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 98 */	NdrFcShort( 0x4 ),	/* 4 */
/* 100 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x54,		/* FC_DEREFERENCE */
/* 102 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 104 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 106 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 108 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 110 */	NdrFcShort( 0x2 ),	/* Offset= 2 (112) */
/* 112 */	
			0x13, 0x0,	/* FC_OP */
/* 114 */	NdrFcShort( 0x2 ),	/* Offset= 2 (116) */
/* 116 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 118 */	NdrFcShort( 0x0 ),	/* 0 */
/* 120 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x54,		/* FC_DEREFERENCE */
/* 122 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 124 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 126 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 130 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 132 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 134 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 136 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 138 */	
			0x11, 0x8,	/* FC_RP [simple_pointer] */
/* 140 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 142 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 144 */	NdrFcShort( 0x2 ),	/* Offset= 2 (146) */
/* 146 */	
			0x13, 0x0,	/* FC_OP */
/* 148 */	NdrFcShort( 0x2 ),	/* Offset= 2 (150) */
/* 150 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 152 */	NdrFcShort( 0x2 ),	/* 2 */
/* 154 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x54,		/* FC_DEREFERENCE */
/* 156 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 158 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 160 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 162 */	
			0x11, 0x0,	/* FC_RP */
/* 164 */	NdrFcShort( 0x2 ),	/* Offset= 2 (166) */
/* 166 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 168 */	NdrFcShort( 0x4 ),	/* 4 */
/* 170 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 172 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 174 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 176 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 178 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 180 */	NdrFcShort( 0x2 ),	/* Offset= 2 (182) */
/* 182 */	
			0x13, 0x0,	/* FC_OP */
/* 184 */	NdrFcShort( 0x2 ),	/* Offset= 2 (186) */
/* 186 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 188 */	NdrFcShort( 0x0 ),	/* 0 */
/* 190 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 192 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 194 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 196 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 200 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 202 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 204 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 206 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 208 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 210 */	NdrFcShort( 0x2 ),	/* Offset= 2 (212) */
/* 212 */	
			0x13, 0x0,	/* FC_OP */
/* 214 */	NdrFcShort( 0x2 ),	/* Offset= 2 (216) */
/* 216 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 218 */	NdrFcShort( 0x0 ),	/* 0 */
/* 220 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 222 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 224 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 226 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 230 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 232 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 234 */	NdrFcShort( 0xff52 ),	/* Offset= -174 (60) */
/* 236 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 238 */	
			0x11, 0x0,	/* FC_RP */
/* 240 */	NdrFcShort( 0x2 ),	/* Offset= 2 (242) */
/* 242 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 244 */	NdrFcShort( 0x4 ),	/* 4 */
/* 246 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 248 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 250 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 252 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 254 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 256 */	NdrFcShort( 0x2 ),	/* Offset= 2 (258) */
/* 258 */	
			0x13, 0x0,	/* FC_OP */
/* 260 */	NdrFcShort( 0x402 ),	/* Offset= 1026 (1286) */
/* 262 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 264 */	NdrFcShort( 0x0 ),	/* 0 */
/* 266 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 268 */	NdrFcShort( 0x60 ),	/* 96 */
/* 270 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 272 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 276 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 278 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 280 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 282 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 284 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 286 */	NdrFcShort( 0x4 ),	/* 4 */
/* 288 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 290 */	NdrFcShort( 0x60 ),	/* 96 */
/* 292 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 294 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 296 */	
			0x13, 0x0,	/* FC_OP */
/* 298 */	NdrFcShort( 0x39c ),	/* Offset= 924 (1222) */
/* 300 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 302 */	0x7,		/* Corr desc: FC_USHORT */
			0x0,		/*  */
/* 304 */	NdrFcShort( 0xfff8 ),	/* -8 */
/* 306 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 308 */	NdrFcShort( 0x2 ),	/* Offset= 2 (310) */
/* 310 */	NdrFcShort( 0x10 ),	/* 16 */
/* 312 */	NdrFcShort( 0x2f ),	/* 47 */
/* 314 */	NdrFcLong( 0x14 ),	/* 20 */
/* 318 */	NdrFcShort( 0x800b ),	/* Simple arm type: FC_HYPER */
/* 320 */	NdrFcLong( 0x3 ),	/* 3 */
/* 324 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 326 */	NdrFcLong( 0x11 ),	/* 17 */
/* 330 */	NdrFcShort( 0x8001 ),	/* Simple arm type: FC_BYTE */
/* 332 */	NdrFcLong( 0x2 ),	/* 2 */
/* 336 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 338 */	NdrFcLong( 0x4 ),	/* 4 */
/* 342 */	NdrFcShort( 0x800a ),	/* Simple arm type: FC_FLOAT */
/* 344 */	NdrFcLong( 0x5 ),	/* 5 */
/* 348 */	NdrFcShort( 0x800c ),	/* Simple arm type: FC_DOUBLE */
/* 350 */	NdrFcLong( 0xb ),	/* 11 */
/* 354 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 356 */	NdrFcLong( 0xa ),	/* 10 */
/* 360 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 362 */	NdrFcLong( 0x6 ),	/* 6 */
/* 366 */	NdrFcShort( 0xe8 ),	/* Offset= 232 (598) */
/* 368 */	NdrFcLong( 0x7 ),	/* 7 */
/* 372 */	NdrFcShort( 0x800c ),	/* Simple arm type: FC_DOUBLE */
/* 374 */	NdrFcLong( 0x8 ),	/* 8 */
/* 378 */	NdrFcShort( 0xe2 ),	/* Offset= 226 (604) */
/* 380 */	NdrFcLong( 0xd ),	/* 13 */
/* 384 */	NdrFcShort( 0xf6 ),	/* Offset= 246 (630) */
/* 386 */	NdrFcLong( 0x9 ),	/* 9 */
/* 390 */	NdrFcShort( 0x102 ),	/* Offset= 258 (648) */
/* 392 */	NdrFcLong( 0x2000 ),	/* 8192 */
/* 396 */	NdrFcShort( 0x10e ),	/* Offset= 270 (666) */
/* 398 */	NdrFcLong( 0x24 ),	/* 36 */
/* 402 */	NdrFcShort( 0x2ea ),	/* Offset= 746 (1148) */
/* 404 */	NdrFcLong( 0x4024 ),	/* 16420 */
/* 408 */	NdrFcShort( 0x2e4 ),	/* Offset= 740 (1148) */
/* 410 */	NdrFcLong( 0x4011 ),	/* 16401 */
/* 414 */	NdrFcShort( 0x2e2 ),	/* Offset= 738 (1152) */
/* 416 */	NdrFcLong( 0x4002 ),	/* 16386 */
/* 420 */	NdrFcShort( 0x2e0 ),	/* Offset= 736 (1156) */
/* 422 */	NdrFcLong( 0x4003 ),	/* 16387 */
/* 426 */	NdrFcShort( 0x2de ),	/* Offset= 734 (1160) */
/* 428 */	NdrFcLong( 0x4014 ),	/* 16404 */
/* 432 */	NdrFcShort( 0x2dc ),	/* Offset= 732 (1164) */
/* 434 */	NdrFcLong( 0x4004 ),	/* 16388 */
/* 438 */	NdrFcShort( 0x2da ),	/* Offset= 730 (1168) */
/* 440 */	NdrFcLong( 0x4005 ),	/* 16389 */
/* 444 */	NdrFcShort( 0x2d8 ),	/* Offset= 728 (1172) */
/* 446 */	NdrFcLong( 0x400b ),	/* 16395 */
/* 450 */	NdrFcShort( 0x2c2 ),	/* Offset= 706 (1156) */
/* 452 */	NdrFcLong( 0x400a ),	/* 16394 */
/* 456 */	NdrFcShort( 0x2c0 ),	/* Offset= 704 (1160) */
/* 458 */	NdrFcLong( 0x4006 ),	/* 16390 */
/* 462 */	NdrFcShort( 0x2ca ),	/* Offset= 714 (1176) */
/* 464 */	NdrFcLong( 0x4007 ),	/* 16391 */
/* 468 */	NdrFcShort( 0x2c0 ),	/* Offset= 704 (1172) */
/* 470 */	NdrFcLong( 0x4008 ),	/* 16392 */
/* 474 */	NdrFcShort( 0x2c2 ),	/* Offset= 706 (1180) */
/* 476 */	NdrFcLong( 0x400d ),	/* 16397 */
/* 480 */	NdrFcShort( 0x2c0 ),	/* Offset= 704 (1184) */
/* 482 */	NdrFcLong( 0x4009 ),	/* 16393 */
/* 486 */	NdrFcShort( 0x2be ),	/* Offset= 702 (1188) */
/* 488 */	NdrFcLong( 0x6000 ),	/* 24576 */
/* 492 */	NdrFcShort( 0x2bc ),	/* Offset= 700 (1192) */
/* 494 */	NdrFcLong( 0x400c ),	/* 16396 */
/* 498 */	NdrFcShort( 0x2ba ),	/* Offset= 698 (1196) */
/* 500 */	NdrFcLong( 0x10 ),	/* 16 */
/* 504 */	NdrFcShort( 0x8002 ),	/* Simple arm type: FC_CHAR */
/* 506 */	NdrFcLong( 0x12 ),	/* 18 */
/* 510 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 512 */	NdrFcLong( 0x13 ),	/* 19 */
/* 516 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 518 */	NdrFcLong( 0x15 ),	/* 21 */
/* 522 */	NdrFcShort( 0x800b ),	/* Simple arm type: FC_HYPER */
/* 524 */	NdrFcLong( 0x16 ),	/* 22 */
/* 528 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 530 */	NdrFcLong( 0x17 ),	/* 23 */
/* 534 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 536 */	NdrFcLong( 0xe ),	/* 14 */
/* 540 */	NdrFcShort( 0x298 ),	/* Offset= 664 (1204) */
/* 542 */	NdrFcLong( 0x400e ),	/* 16398 */
/* 546 */	NdrFcShort( 0x29c ),	/* Offset= 668 (1214) */
/* 548 */	NdrFcLong( 0x4010 ),	/* 16400 */
/* 552 */	NdrFcShort( 0x29a ),	/* Offset= 666 (1218) */
/* 554 */	NdrFcLong( 0x4012 ),	/* 16402 */
/* 558 */	NdrFcShort( 0x256 ),	/* Offset= 598 (1156) */
/* 560 */	NdrFcLong( 0x4013 ),	/* 16403 */
/* 564 */	NdrFcShort( 0x254 ),	/* Offset= 596 (1160) */
/* 566 */	NdrFcLong( 0x4015 ),	/* 16405 */
/* 570 */	NdrFcShort( 0x252 ),	/* Offset= 594 (1164) */
/* 572 */	NdrFcLong( 0x4016 ),	/* 16406 */
/* 576 */	NdrFcShort( 0x248 ),	/* Offset= 584 (1160) */
/* 578 */	NdrFcLong( 0x4017 ),	/* 16407 */
/* 582 */	NdrFcShort( 0x242 ),	/* Offset= 578 (1160) */
/* 584 */	NdrFcLong( 0x0 ),	/* 0 */
/* 588 */	NdrFcShort( 0x0 ),	/* Offset= 0 (588) */
/* 590 */	NdrFcLong( 0x1 ),	/* 1 */
/* 594 */	NdrFcShort( 0x0 ),	/* Offset= 0 (594) */
/* 596 */	NdrFcShort( 0xffff ),	/* Offset= -1 (595) */
/* 598 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 600 */	NdrFcShort( 0x8 ),	/* 8 */
/* 602 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 604 */	
			0x13, 0x0,	/* FC_OP */
/* 606 */	NdrFcShort( 0xe ),	/* Offset= 14 (620) */
/* 608 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 610 */	NdrFcShort( 0x2 ),	/* 2 */
/* 612 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 614 */	NdrFcShort( 0xfffc ),	/* -4 */
/* 616 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 618 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 620 */	
			0x17,		/* FC_CSTRUCT */
			0x3,		/* 3 */
/* 622 */	NdrFcShort( 0x8 ),	/* 8 */
/* 624 */	NdrFcShort( 0xfff0 ),	/* Offset= -16 (608) */
/* 626 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 628 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 630 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 632 */	NdrFcLong( 0x0 ),	/* 0 */
/* 636 */	NdrFcShort( 0x0 ),	/* 0 */
/* 638 */	NdrFcShort( 0x0 ),	/* 0 */
/* 640 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 642 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 644 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 646 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 648 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 650 */	NdrFcLong( 0x20400 ),	/* 132096 */
/* 654 */	NdrFcShort( 0x0 ),	/* 0 */
/* 656 */	NdrFcShort( 0x0 ),	/* 0 */
/* 658 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 660 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 662 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 664 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 666 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 668 */	NdrFcShort( 0x2 ),	/* Offset= 2 (670) */
/* 670 */	
			0x13, 0x0,	/* FC_OP */
/* 672 */	NdrFcShort( 0x1ca ),	/* Offset= 458 (1130) */
/* 674 */	
			0x2a,		/* FC_ENCAPSULATED_UNION */
			0x89,		/* 137 */
/* 676 */	NdrFcShort( 0x20 ),	/* 32 */
/* 678 */	NdrFcShort( 0xa ),	/* 10 */
/* 680 */	NdrFcLong( 0x8 ),	/* 8 */
/* 684 */	NdrFcShort( 0x50 ),	/* Offset= 80 (764) */
/* 686 */	NdrFcLong( 0xd ),	/* 13 */
/* 690 */	NdrFcShort( 0x70 ),	/* Offset= 112 (802) */
/* 692 */	NdrFcLong( 0x9 ),	/* 9 */
/* 696 */	NdrFcShort( 0x90 ),	/* Offset= 144 (840) */
/* 698 */	NdrFcLong( 0xc ),	/* 12 */
/* 702 */	NdrFcShort( 0xb0 ),	/* Offset= 176 (878) */
/* 704 */	NdrFcLong( 0x24 ),	/* 36 */
/* 708 */	NdrFcShort( 0x102 ),	/* Offset= 258 (966) */
/* 710 */	NdrFcLong( 0x800d ),	/* 32781 */
/* 714 */	NdrFcShort( 0x10c ),	/* Offset= 268 (982) */
/* 716 */	NdrFcLong( 0x10 ),	/* 16 */
/* 720 */	NdrFcShort( 0x126 ),	/* Offset= 294 (1014) */
/* 722 */	NdrFcLong( 0x2 ),	/* 2 */
/* 726 */	NdrFcShort( 0x13c ),	/* Offset= 316 (1042) */
/* 728 */	NdrFcLong( 0x3 ),	/* 3 */
/* 732 */	NdrFcShort( 0x152 ),	/* Offset= 338 (1070) */
/* 734 */	NdrFcLong( 0x14 ),	/* 20 */
/* 738 */	NdrFcShort( 0x168 ),	/* Offset= 360 (1098) */
/* 740 */	NdrFcShort( 0xffff ),	/* Offset= -1 (739) */
/* 742 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 744 */	NdrFcShort( 0x0 ),	/* 0 */
/* 746 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 748 */	NdrFcShort( 0x0 ),	/* 0 */
/* 750 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 752 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 756 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 758 */	
			0x13, 0x0,	/* FC_OP */
/* 760 */	NdrFcShort( 0xff74 ),	/* Offset= -140 (620) */
/* 762 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 764 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 766 */	NdrFcShort( 0x10 ),	/* 16 */
/* 768 */	NdrFcShort( 0x0 ),	/* 0 */
/* 770 */	NdrFcShort( 0x6 ),	/* Offset= 6 (776) */
/* 772 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 774 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 776 */	
			0x11, 0x0,	/* FC_RP */
/* 778 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (742) */
/* 780 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 782 */	NdrFcShort( 0x0 ),	/* 0 */
/* 784 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 786 */	NdrFcShort( 0x0 ),	/* 0 */
/* 788 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 790 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 794 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 796 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 798 */	NdrFcShort( 0xff58 ),	/* Offset= -168 (630) */
/* 800 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 802 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 804 */	NdrFcShort( 0x10 ),	/* 16 */
/* 806 */	NdrFcShort( 0x0 ),	/* 0 */
/* 808 */	NdrFcShort( 0x6 ),	/* Offset= 6 (814) */
/* 810 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 812 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 814 */	
			0x11, 0x0,	/* FC_RP */
/* 816 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (780) */
/* 818 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 820 */	NdrFcShort( 0x0 ),	/* 0 */
/* 822 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 824 */	NdrFcShort( 0x0 ),	/* 0 */
/* 826 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 828 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 832 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 834 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 836 */	NdrFcShort( 0xff44 ),	/* Offset= -188 (648) */
/* 838 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 840 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 842 */	NdrFcShort( 0x10 ),	/* 16 */
/* 844 */	NdrFcShort( 0x0 ),	/* 0 */
/* 846 */	NdrFcShort( 0x6 ),	/* Offset= 6 (852) */
/* 848 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 850 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 852 */	
			0x11, 0x0,	/* FC_RP */
/* 854 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (818) */
/* 856 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 858 */	NdrFcShort( 0x0 ),	/* 0 */
/* 860 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 862 */	NdrFcShort( 0x0 ),	/* 0 */
/* 864 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 866 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 870 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 872 */	
			0x13, 0x0,	/* FC_OP */
/* 874 */	NdrFcShort( 0x15c ),	/* Offset= 348 (1222) */
/* 876 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 878 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 880 */	NdrFcShort( 0x10 ),	/* 16 */
/* 882 */	NdrFcShort( 0x0 ),	/* 0 */
/* 884 */	NdrFcShort( 0x6 ),	/* Offset= 6 (890) */
/* 886 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 888 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 890 */	
			0x11, 0x0,	/* FC_RP */
/* 892 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (856) */
/* 894 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 896 */	NdrFcLong( 0x2f ),	/* 47 */
/* 900 */	NdrFcShort( 0x0 ),	/* 0 */
/* 902 */	NdrFcShort( 0x0 ),	/* 0 */
/* 904 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 906 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 908 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 910 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 912 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 914 */	NdrFcShort( 0x1 ),	/* 1 */
/* 916 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 918 */	NdrFcShort( 0x4 ),	/* 4 */
/* 920 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 922 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 924 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 926 */	NdrFcShort( 0x18 ),	/* 24 */
/* 928 */	NdrFcShort( 0x0 ),	/* 0 */
/* 930 */	NdrFcShort( 0xa ),	/* Offset= 10 (940) */
/* 932 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 934 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 936 */	NdrFcShort( 0xffd6 ),	/* Offset= -42 (894) */
/* 938 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 940 */	
			0x13, 0x0,	/* FC_OP */
/* 942 */	NdrFcShort( 0xffe2 ),	/* Offset= -30 (912) */
/* 944 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 946 */	NdrFcShort( 0x0 ),	/* 0 */
/* 948 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 950 */	NdrFcShort( 0x0 ),	/* 0 */
/* 952 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 954 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 958 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 960 */	
			0x13, 0x0,	/* FC_OP */
/* 962 */	NdrFcShort( 0xffda ),	/* Offset= -38 (924) */
/* 964 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 966 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 968 */	NdrFcShort( 0x10 ),	/* 16 */
/* 970 */	NdrFcShort( 0x0 ),	/* 0 */
/* 972 */	NdrFcShort( 0x6 ),	/* Offset= 6 (978) */
/* 974 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 976 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 978 */	
			0x11, 0x0,	/* FC_RP */
/* 980 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (944) */
/* 982 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 984 */	NdrFcShort( 0x20 ),	/* 32 */
/* 986 */	NdrFcShort( 0x0 ),	/* 0 */
/* 988 */	NdrFcShort( 0xa ),	/* Offset= 10 (998) */
/* 990 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 992 */	0x36,		/* FC_POINTER */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 994 */	0x0,		/* 0 */
			NdrFcShort( 0xfc59 ),	/* Offset= -935 (60) */
			0x5b,		/* FC_END */
/* 998 */	
			0x11, 0x0,	/* FC_RP */
/* 1000 */	NdrFcShort( 0xff24 ),	/* Offset= -220 (780) */
/* 1002 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 1004 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1006 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1008 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1010 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1012 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 1014 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1016 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1018 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1020 */	NdrFcShort( 0x6 ),	/* Offset= 6 (1026) */
/* 1022 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 1024 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 1026 */	
			0x13, 0x0,	/* FC_OP */
/* 1028 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (1002) */
/* 1030 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 1032 */	NdrFcShort( 0x2 ),	/* 2 */
/* 1034 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1036 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1038 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1040 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 1042 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1044 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1046 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1048 */	NdrFcShort( 0x6 ),	/* Offset= 6 (1054) */
/* 1050 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 1052 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 1054 */	
			0x13, 0x0,	/* FC_OP */
/* 1056 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (1030) */
/* 1058 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 1060 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1062 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1064 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1066 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1068 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1070 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1072 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1074 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1076 */	NdrFcShort( 0x6 ),	/* Offset= 6 (1082) */
/* 1078 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 1080 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 1082 */	
			0x13, 0x0,	/* FC_OP */
/* 1084 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (1058) */
/* 1086 */	
			0x1b,		/* FC_CARRAY */
			0x7,		/* 7 */
/* 1088 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1090 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1092 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1094 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1096 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 1098 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1100 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1102 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1104 */	NdrFcShort( 0x6 ),	/* Offset= 6 (1110) */
/* 1106 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 1108 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 1110 */	
			0x13, 0x0,	/* FC_OP */
/* 1112 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (1086) */
/* 1114 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 1116 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1118 */	0x7,		/* Corr desc: FC_USHORT */
			0x0,		/*  */
/* 1120 */	NdrFcShort( 0xffc8 ),	/* -56 */
/* 1122 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1124 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1126 */	NdrFcShort( 0xfba4 ),	/* Offset= -1116 (10) */
/* 1128 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1130 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1132 */	NdrFcShort( 0x38 ),	/* 56 */
/* 1134 */	NdrFcShort( 0xffec ),	/* Offset= -20 (1114) */
/* 1136 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1136) */
/* 1138 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 1140 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1142 */	0x40,		/* FC_STRUCTPAD4 */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1144 */	0x0,		/* 0 */
			NdrFcShort( 0xfe29 ),	/* Offset= -471 (674) */
			0x5b,		/* FC_END */
/* 1148 */	
			0x13, 0x0,	/* FC_OP */
/* 1150 */	NdrFcShort( 0xff1e ),	/* Offset= -226 (924) */
/* 1152 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 1154 */	0x1,		/* FC_BYTE */
			0x5c,		/* FC_PAD */
/* 1156 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 1158 */	0x6,		/* FC_SHORT */
			0x5c,		/* FC_PAD */
/* 1160 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 1162 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 1164 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 1166 */	0xb,		/* FC_HYPER */
			0x5c,		/* FC_PAD */
/* 1168 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 1170 */	0xa,		/* FC_FLOAT */
			0x5c,		/* FC_PAD */
/* 1172 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 1174 */	0xc,		/* FC_DOUBLE */
			0x5c,		/* FC_PAD */
/* 1176 */	
			0x13, 0x0,	/* FC_OP */
/* 1178 */	NdrFcShort( 0xfdbc ),	/* Offset= -580 (598) */
/* 1180 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 1182 */	NdrFcShort( 0xfdbe ),	/* Offset= -578 (604) */
/* 1184 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 1186 */	NdrFcShort( 0xfdd4 ),	/* Offset= -556 (630) */
/* 1188 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 1190 */	NdrFcShort( 0xfde2 ),	/* Offset= -542 (648) */
/* 1192 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 1194 */	NdrFcShort( 0xfdf0 ),	/* Offset= -528 (666) */
/* 1196 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 1198 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1200) */
/* 1200 */	
			0x13, 0x0,	/* FC_OP */
/* 1202 */	NdrFcShort( 0x14 ),	/* Offset= 20 (1222) */
/* 1204 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 1206 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1208 */	0x6,		/* FC_SHORT */
			0x1,		/* FC_BYTE */
/* 1210 */	0x1,		/* FC_BYTE */
			0x8,		/* FC_LONG */
/* 1212 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 1214 */	
			0x13, 0x0,	/* FC_OP */
/* 1216 */	NdrFcShort( 0xfff4 ),	/* Offset= -12 (1204) */
/* 1218 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 1220 */	0x2,		/* FC_CHAR */
			0x5c,		/* FC_PAD */
/* 1222 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 1224 */	NdrFcShort( 0x20 ),	/* 32 */
/* 1226 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1228 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1228) */
/* 1230 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1232 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 1234 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 1236 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1238 */	NdrFcShort( 0xfc56 ),	/* Offset= -938 (300) */
/* 1240 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1242 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 1244 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1246 */	NdrFcShort( 0x18 ),	/* 24 */
/* 1248 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1250 */	NdrFcShort( 0xfc46 ),	/* Offset= -954 (296) */
/* 1252 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 1254 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1256 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1258 */	NdrFcShort( 0x88 ),	/* 136 */
/* 1260 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1262 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 1266 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 1268 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1270 */	NdrFcShort( 0xffe4 ),	/* Offset= -28 (1242) */
/* 1272 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1274 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 1276 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1278 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1280 */	NdrFcShort( 0x88 ),	/* 136 */
/* 1282 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1284 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1286 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1288 */	NdrFcShort( 0xa0 ),	/* 160 */
/* 1290 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1292 */	NdrFcShort( 0x2a ),	/* Offset= 42 (1334) */
/* 1294 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 1296 */	0x40,		/* FC_STRUCTPAD4 */
			0x36,		/* FC_POINTER */
/* 1298 */	0x36,		/* FC_POINTER */
			0x8,		/* FC_LONG */
/* 1300 */	0x40,		/* FC_STRUCTPAD4 */
			0x36,		/* FC_POINTER */
/* 1302 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 1304 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1306 */	NdrFcShort( 0xfaf0 ),	/* Offset= -1296 (10) */
/* 1308 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1310 */	NdrFcShort( 0xfaec ),	/* Offset= -1300 (10) */
/* 1312 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1314 */	NdrFcShort( 0xfae8 ),	/* Offset= -1304 (10) */
/* 1316 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1318 */	NdrFcShort( 0xfae4 ),	/* Offset= -1308 (10) */
/* 1320 */	0x40,		/* FC_STRUCTPAD4 */
			0x36,		/* FC_POINTER */
/* 1322 */	0x36,		/* FC_POINTER */
			0x8,		/* FC_LONG */
/* 1324 */	0x40,		/* FC_STRUCTPAD4 */
			0x36,		/* FC_POINTER */
/* 1326 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 1328 */	0x36,		/* FC_POINTER */
			0x8,		/* FC_LONG */
/* 1330 */	0x40,		/* FC_STRUCTPAD4 */
			0x36,		/* FC_POINTER */
/* 1332 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 1334 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 1336 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1338 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 1340 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1342 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 1344 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1346 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 1348 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1350 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 1352 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1354 */	
			0x13, 0x0,	/* FC_OP */
/* 1356 */	NdrFcShort( 0xfbba ),	/* Offset= -1094 (262) */
/* 1358 */	
			0x13, 0x0,	/* FC_OP */
/* 1360 */	NdrFcShort( 0xfbb6 ),	/* Offset= -1098 (262) */
/* 1362 */	
			0x13, 0x0,	/* FC_OP */
/* 1364 */	NdrFcShort( 0xfbc8 ),	/* Offset= -1080 (284) */
/* 1366 */	
			0x13, 0x0,	/* FC_OP */
/* 1368 */	NdrFcShort( 0xfbae ),	/* Offset= -1106 (262) */
/* 1370 */	
			0x13, 0x0,	/* FC_OP */
/* 1372 */	NdrFcShort( 0xff88 ),	/* Offset= -120 (1252) */
/* 1374 */	
			0x13, 0x0,	/* FC_OP */
/* 1376 */	NdrFcShort( 0xff9a ),	/* Offset= -102 (1274) */
/* 1378 */	
			0x11, 0x0,	/* FC_RP */
/* 1380 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1382) */
/* 1382 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 1384 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1386 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 1388 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1390 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1392 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 1396 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 1398 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1400 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1402 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1404 */	
			0x11, 0x0,	/* FC_RP */
/* 1406 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1408) */
/* 1408 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 1410 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1412 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 1414 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1416 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1418 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 1422 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 1424 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1426 */	NdrFcShort( 0xfa78 ),	/* Offset= -1416 (10) */
/* 1428 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1430 */	
			0x11, 0x0,	/* FC_RP */
/* 1432 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1434) */
/* 1434 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 1436 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1438 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 1440 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1442 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1444 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1446 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 1448 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1450) */
/* 1450 */	
			0x13, 0x0,	/* FC_OP */
/* 1452 */	NdrFcShort( 0xffee ),	/* Offset= -18 (1434) */
/* 1454 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1456 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1458) */
/* 1458 */	
			0x2f,		/* FC_IP */
			0x5c,		/* FC_PAD */
/* 1460 */	0x2b,		/* Corr desc:  parameter, FC_HYPER */
			0x0,		/*  */
/* 1462 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1464 */	NdrFcShort( 0x5 ),	/* Corr flags:  early, iid_is, */
/* 1466 */	
			0x11, 0x0,	/* FC_RP */
/* 1468 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1470) */
/* 1470 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 1472 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1474 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 1476 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1478 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1480 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1482 */	
			0x11, 0x0,	/* FC_RP */
/* 1484 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1486) */
/* 1486 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 1488 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1490 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 1492 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 1494 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1496 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 1500 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 1502 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1504 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1506 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1508 */	
			0x11, 0x0,	/* FC_RP */
/* 1510 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1512) */
/* 1512 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 1514 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1516 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 1518 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 1520 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1522 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 1526 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 1528 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1530 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1532 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1534 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 1536 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1538) */
/* 1538 */	
			0x13, 0x0,	/* FC_OP */
/* 1540 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1542) */
/* 1542 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 1544 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1546 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x54,		/* FC_DEREFERENCE */
/* 1548 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 1550 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1552 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 1556 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 1558 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 1560 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1562 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1564 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 1566 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1568) */
/* 1568 */	
			0x13, 0x0,	/* FC_OP */
/* 1570 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1572) */
/* 1572 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 1574 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1576 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x54,		/* FC_DEREFERENCE */
/* 1578 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 1580 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1582 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 1586 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 1588 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 1590 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1592 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1594 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1596 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 1598 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1600 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1602) */
/* 1602 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1604 */	NdrFcLong( 0x101 ),	/* 257 */
/* 1608 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1610 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1612 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 1614 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1616 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1618 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 1620 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 1622 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1624) */
/* 1624 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 1626 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1628 */	
			0x11, 0x0,	/* FC_RP */
/* 1630 */	NdrFcShort( 0x62 ),	/* Offset= 98 (1728) */
/* 1632 */	
			0x12, 0x0,	/* FC_UP */
/* 1634 */	NdrFcShort( 0xfe64 ),	/* Offset= -412 (1222) */
/* 1636 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 1638 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1640 */	NdrFcShort( 0x18 ),	/* 24 */
/* 1642 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1644 */	NdrFcShort( 0xfff4 ),	/* Offset= -12 (1632) */
/* 1646 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 1648 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1650 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1652 */	NdrFcShort( 0x54 ),	/* 84 */
/* 1654 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1656 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 1660 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 1662 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1664 */	NdrFcShort( 0xffe4 ),	/* Offset= -28 (1636) */
/* 1666 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1668 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1670 */	NdrFcShort( 0x68 ),	/* 104 */
/* 1672 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1674 */	NdrFcShort( 0x1e ),	/* Offset= 30 (1704) */
/* 1676 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 1678 */	0x40,		/* FC_STRUCTPAD4 */
			0x36,		/* FC_POINTER */
/* 1680 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1682 */	NdrFcShort( 0xf978 ),	/* Offset= -1672 (10) */
/* 1684 */	0x36,		/* FC_POINTER */
			0x8,		/* FC_LONG */
/* 1686 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1688 */	0x40,		/* FC_STRUCTPAD4 */
			0x36,		/* FC_POINTER */
/* 1690 */	0x36,		/* FC_POINTER */
			0x6,		/* FC_SHORT */
/* 1692 */	0x6,		/* FC_SHORT */
			0x8,		/* FC_LONG */
/* 1694 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1696 */	NdrFcShort( 0xf96a ),	/* Offset= -1686 (10) */
/* 1698 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1700 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 1702 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1704 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1706 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1708 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1710 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1712 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1714 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1716 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1718 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1720 */	
			0x12, 0x0,	/* FC_UP */
/* 1722 */	NdrFcShort( 0xffb4 ),	/* Offset= -76 (1646) */
/* 1724 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1726 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1728 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 1730 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1732 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 1734 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1736 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1738 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 1742 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 1744 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1746 */	NdrFcShort( 0xffb2 ),	/* Offset= -78 (1668) */
/* 1748 */	0x5c,		/* FC_PAD */
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


/* Object interface: OPCEventServerCATID, ver. 0.0,
   GUID={0x58E13251,0xAC87,0x11d1,{0x84,0xD5,0x00,0x60,0x8C,0xB8,0xA7,0xE9}} */

#pragma code_seg(".orpc")
static const unsigned short OPCEventServerCATID_FormatStringOffsetTable[] =
    {
    0
    };

static const MIDL_STUBLESS_PROXY_INFO OPCEventServerCATID_ProxyInfo =
    {
    &Object_StubDesc,
    opc_ae__MIDL_ProcFormatString.Format,
    &OPCEventServerCATID_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO OPCEventServerCATID_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    opc_ae__MIDL_ProcFormatString.Format,
    &OPCEventServerCATID_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(3) _OPCEventServerCATIDProxyVtbl = 
{
    0,
    &IID_OPCEventServerCATID,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy
};

const CInterfaceStubVtbl _OPCEventServerCATIDStubVtbl =
{
    &IID_OPCEventServerCATID,
    &OPCEventServerCATID_ServerInfo,
    3,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Standard interface: __MIDL_itf_opc_ae_0000_0001, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IOPCEventServer, ver. 0.0,
   GUID={0x65168851,0x5783,0x11D1,{0x84,0xA0,0x00,0x60,0x8C,0xB8,0xA7,0xE9}} */

#pragma code_seg(".orpc")
static const unsigned short IOPCEventServer_FormatStringOffsetTable[] =
    {
    0,
    38,
    118,
    156,
    212,
    262,
    312,
    362,
    424,
    510,
    572,
    616,
    660,
    704,
    748,
    828
    };

static const MIDL_STUBLESS_PROXY_INFO IOPCEventServer_ProxyInfo =
    {
    &Object_StubDesc,
    opc_ae__MIDL_ProcFormatString.Format,
    &IOPCEventServer_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IOPCEventServer_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    opc_ae__MIDL_ProcFormatString.Format,
    &IOPCEventServer_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(19) _IOPCEventServerProxyVtbl = 
{
    &IOPCEventServer_ProxyInfo,
    &IID_IOPCEventServer,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IOPCEventServer::GetStatus */ ,
    (void *) (INT_PTR) -1 /* IOPCEventServer::CreateEventSubscription */ ,
    (void *) (INT_PTR) -1 /* IOPCEventServer::QueryAvailableFilters */ ,
    (void *) (INT_PTR) -1 /* IOPCEventServer::QueryEventCategories */ ,
    (void *) (INT_PTR) -1 /* IOPCEventServer::QueryConditionNames */ ,
    (void *) (INT_PTR) -1 /* IOPCEventServer::QuerySubConditionNames */ ,
    (void *) (INT_PTR) -1 /* IOPCEventServer::QuerySourceConditions */ ,
    (void *) (INT_PTR) -1 /* IOPCEventServer::QueryEventAttributes */ ,
    (void *) (INT_PTR) -1 /* IOPCEventServer::TranslateToItemIDs */ ,
    (void *) (INT_PTR) -1 /* IOPCEventServer::GetConditionState */ ,
    (void *) (INT_PTR) -1 /* IOPCEventServer::EnableConditionByArea */ ,
    (void *) (INT_PTR) -1 /* IOPCEventServer::EnableConditionBySource */ ,
    (void *) (INT_PTR) -1 /* IOPCEventServer::DisableConditionByArea */ ,
    (void *) (INT_PTR) -1 /* IOPCEventServer::DisableConditionBySource */ ,
    (void *) (INT_PTR) -1 /* IOPCEventServer::AckCondition */ ,
    (void *) (INT_PTR) -1 /* IOPCEventServer::CreateAreaBrowser */
};

const CInterfaceStubVtbl _IOPCEventServerStubVtbl =
{
    &IID_IOPCEventServer,
    &IOPCEventServer_ServerInfo,
    19,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IOPCEventSubscriptionMgt, ver. 0.0,
   GUID={0x65168855,0x5783,0x11D1,{0x84,0xA0,0x00,0x60,0x8C,0xB8,0xA7,0xE9}} */

#pragma code_seg(".orpc")
static const unsigned short IOPCEventSubscriptionMgt_FormatStringOffsetTable[] =
    {
    872,
    958,
    1044,
    1094,
    1144,
    1182,
    1220,
    1276
    };

static const MIDL_STUBLESS_PROXY_INFO IOPCEventSubscriptionMgt_ProxyInfo =
    {
    &Object_StubDesc,
    opc_ae__MIDL_ProcFormatString.Format,
    &IOPCEventSubscriptionMgt_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IOPCEventSubscriptionMgt_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    opc_ae__MIDL_ProcFormatString.Format,
    &IOPCEventSubscriptionMgt_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(11) _IOPCEventSubscriptionMgtProxyVtbl = 
{
    &IOPCEventSubscriptionMgt_ProxyInfo,
    &IID_IOPCEventSubscriptionMgt,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IOPCEventSubscriptionMgt::SetFilter */ ,
    (void *) (INT_PTR) -1 /* IOPCEventSubscriptionMgt::GetFilter */ ,
    (void *) (INT_PTR) -1 /* IOPCEventSubscriptionMgt::SelectReturnedAttributes */ ,
    (void *) (INT_PTR) -1 /* IOPCEventSubscriptionMgt::GetReturnedAttributes */ ,
    (void *) (INT_PTR) -1 /* IOPCEventSubscriptionMgt::Refresh */ ,
    (void *) (INT_PTR) -1 /* IOPCEventSubscriptionMgt::CancelRefresh */ ,
    (void *) (INT_PTR) -1 /* IOPCEventSubscriptionMgt::GetState */ ,
    (void *) (INT_PTR) -1 /* IOPCEventSubscriptionMgt::SetState */
};

const CInterfaceStubVtbl _IOPCEventSubscriptionMgtStubVtbl =
{
    &IID_IOPCEventSubscriptionMgt,
    &IOPCEventSubscriptionMgt_ServerInfo,
    11,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IOPCEventAreaBrowser, ver. 0.0,
   GUID={0x65168857,0x5783,0x11D1,{0x84,0xA0,0x00,0x60,0x8C,0xB8,0xA7,0xE9}} */

#pragma code_seg(".orpc")
static const unsigned short IOPCEventAreaBrowser_FormatStringOffsetTable[] =
    {
    1344,
    1388,
    1438,
    1482
    };

static const MIDL_STUBLESS_PROXY_INFO IOPCEventAreaBrowser_ProxyInfo =
    {
    &Object_StubDesc,
    opc_ae__MIDL_ProcFormatString.Format,
    &IOPCEventAreaBrowser_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IOPCEventAreaBrowser_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    opc_ae__MIDL_ProcFormatString.Format,
    &IOPCEventAreaBrowser_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(7) _IOPCEventAreaBrowserProxyVtbl = 
{
    &IOPCEventAreaBrowser_ProxyInfo,
    &IID_IOPCEventAreaBrowser,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IOPCEventAreaBrowser::ChangeBrowsePosition */ ,
    (void *) (INT_PTR) -1 /* IOPCEventAreaBrowser::BrowseOPCAreas */ ,
    (void *) (INT_PTR) -1 /* IOPCEventAreaBrowser::GetQualifiedAreaName */ ,
    (void *) (INT_PTR) -1 /* IOPCEventAreaBrowser::GetQualifiedSourceName */
};

const CInterfaceStubVtbl _IOPCEventAreaBrowserStubVtbl =
{
    &IID_IOPCEventAreaBrowser,
    &IOPCEventAreaBrowser_ServerInfo,
    7,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IOPCEventSink, ver. 0.0,
   GUID={0x6516885F,0x5783,0x11D1,{0x84,0xA0,0x00,0x60,0x8C,0xB8,0xA7,0xE9}} */

#pragma code_seg(".orpc")
static const unsigned short IOPCEventSink_FormatStringOffsetTable[] =
    {
    1526
    };

static const MIDL_STUBLESS_PROXY_INFO IOPCEventSink_ProxyInfo =
    {
    &Object_StubDesc,
    opc_ae__MIDL_ProcFormatString.Format,
    &IOPCEventSink_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IOPCEventSink_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    opc_ae__MIDL_ProcFormatString.Format,
    &IOPCEventSink_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(4) _IOPCEventSinkProxyVtbl = 
{
    &IOPCEventSink_ProxyInfo,
    &IID_IOPCEventSink,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IOPCEventSink::OnEvent */
};

const CInterfaceStubVtbl _IOPCEventSinkStubVtbl =
{
    &IID_IOPCEventSink,
    &IOPCEventSink_ServerInfo,
    4,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IOPCEventServer2, ver. 0.0,
   GUID={0x71BBE88E,0x9564,0x4bcd,{0xBC,0xFC,0x71,0xC5,0x58,0xD9,0x4F,0x2D}} */

#pragma code_seg(".orpc")
static const unsigned short IOPCEventServer2_FormatStringOffsetTable[] =
    {
    0,
    38,
    118,
    156,
    212,
    262,
    312,
    362,
    424,
    510,
    572,
    616,
    660,
    704,
    748,
    828,
    1588,
    1638,
    1688,
    1738,
    1788,
    1850
    };

static const MIDL_STUBLESS_PROXY_INFO IOPCEventServer2_ProxyInfo =
    {
    &Object_StubDesc,
    opc_ae__MIDL_ProcFormatString.Format,
    &IOPCEventServer2_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IOPCEventServer2_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    opc_ae__MIDL_ProcFormatString.Format,
    &IOPCEventServer2_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(25) _IOPCEventServer2ProxyVtbl = 
{
    &IOPCEventServer2_ProxyInfo,
    &IID_IOPCEventServer2,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IOPCEventServer::GetStatus */ ,
    (void *) (INT_PTR) -1 /* IOPCEventServer::CreateEventSubscription */ ,
    (void *) (INT_PTR) -1 /* IOPCEventServer::QueryAvailableFilters */ ,
    (void *) (INT_PTR) -1 /* IOPCEventServer::QueryEventCategories */ ,
    (void *) (INT_PTR) -1 /* IOPCEventServer::QueryConditionNames */ ,
    (void *) (INT_PTR) -1 /* IOPCEventServer::QuerySubConditionNames */ ,
    (void *) (INT_PTR) -1 /* IOPCEventServer::QuerySourceConditions */ ,
    (void *) (INT_PTR) -1 /* IOPCEventServer::QueryEventAttributes */ ,
    (void *) (INT_PTR) -1 /* IOPCEventServer::TranslateToItemIDs */ ,
    (void *) (INT_PTR) -1 /* IOPCEventServer::GetConditionState */ ,
    (void *) (INT_PTR) -1 /* IOPCEventServer::EnableConditionByArea */ ,
    (void *) (INT_PTR) -1 /* IOPCEventServer::EnableConditionBySource */ ,
    (void *) (INT_PTR) -1 /* IOPCEventServer::DisableConditionByArea */ ,
    (void *) (INT_PTR) -1 /* IOPCEventServer::DisableConditionBySource */ ,
    (void *) (INT_PTR) -1 /* IOPCEventServer::AckCondition */ ,
    (void *) (INT_PTR) -1 /* IOPCEventServer::CreateAreaBrowser */ ,
    (void *) (INT_PTR) -1 /* IOPCEventServer2::EnableConditionByArea2 */ ,
    (void *) (INT_PTR) -1 /* IOPCEventServer2::EnableConditionBySource2 */ ,
    (void *) (INT_PTR) -1 /* IOPCEventServer2::DisableConditionByArea2 */ ,
    (void *) (INT_PTR) -1 /* IOPCEventServer2::DisableConditionBySource2 */ ,
    (void *) (INT_PTR) -1 /* IOPCEventServer2::GetEnableStateByArea */ ,
    (void *) (INT_PTR) -1 /* IOPCEventServer2::GetEnableStateBySource */
};

const CInterfaceStubVtbl _IOPCEventServer2StubVtbl =
{
    &IID_IOPCEventServer2,
    &IOPCEventServer2_ServerInfo,
    25,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IOPCEventSubscriptionMgt2, ver. 0.0,
   GUID={0x94C955DC,0x3684,0x4ccb,{0xAF,0xAB,0xF8,0x98,0xCE,0x19,0xAA,0xC3}} */

#pragma code_seg(".orpc")
static const unsigned short IOPCEventSubscriptionMgt2_FormatStringOffsetTable[] =
    {
    872,
    958,
    1044,
    1094,
    1144,
    1182,
    1220,
    1276,
    1912,
    1956
    };

static const MIDL_STUBLESS_PROXY_INFO IOPCEventSubscriptionMgt2_ProxyInfo =
    {
    &Object_StubDesc,
    opc_ae__MIDL_ProcFormatString.Format,
    &IOPCEventSubscriptionMgt2_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IOPCEventSubscriptionMgt2_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    opc_ae__MIDL_ProcFormatString.Format,
    &IOPCEventSubscriptionMgt2_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(13) _IOPCEventSubscriptionMgt2ProxyVtbl = 
{
    &IOPCEventSubscriptionMgt2_ProxyInfo,
    &IID_IOPCEventSubscriptionMgt2,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IOPCEventSubscriptionMgt::SetFilter */ ,
    (void *) (INT_PTR) -1 /* IOPCEventSubscriptionMgt::GetFilter */ ,
    (void *) (INT_PTR) -1 /* IOPCEventSubscriptionMgt::SelectReturnedAttributes */ ,
    (void *) (INT_PTR) -1 /* IOPCEventSubscriptionMgt::GetReturnedAttributes */ ,
    (void *) (INT_PTR) -1 /* IOPCEventSubscriptionMgt::Refresh */ ,
    (void *) (INT_PTR) -1 /* IOPCEventSubscriptionMgt::CancelRefresh */ ,
    (void *) (INT_PTR) -1 /* IOPCEventSubscriptionMgt::GetState */ ,
    (void *) (INT_PTR) -1 /* IOPCEventSubscriptionMgt::SetState */ ,
    (void *) (INT_PTR) -1 /* IOPCEventSubscriptionMgt2::SetKeepAlive */ ,
    (void *) (INT_PTR) -1 /* IOPCEventSubscriptionMgt2::GetKeepAlive */
};

const CInterfaceStubVtbl _IOPCEventSubscriptionMgt2StubVtbl =
{
    &IID_IOPCEventSubscriptionMgt2,
    &IOPCEventSubscriptionMgt2_ServerInfo,
    13,
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
    opc_ae__MIDL_TypeFormatString.Format,
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

const CInterfaceProxyVtbl * const _opc_ae_ProxyVtblList[] = 
{
    ( CInterfaceProxyVtbl *) &_OPCEventServerCATIDProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IOPCEventServerProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IOPCEventSubscriptionMgtProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IOPCEventAreaBrowserProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IOPCEventSinkProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IOPCEventServer2ProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IOPCEventSubscriptionMgt2ProxyVtbl,
    0
};

const CInterfaceStubVtbl * const _opc_ae_StubVtblList[] = 
{
    ( CInterfaceStubVtbl *) &_OPCEventServerCATIDStubVtbl,
    ( CInterfaceStubVtbl *) &_IOPCEventServerStubVtbl,
    ( CInterfaceStubVtbl *) &_IOPCEventSubscriptionMgtStubVtbl,
    ( CInterfaceStubVtbl *) &_IOPCEventAreaBrowserStubVtbl,
    ( CInterfaceStubVtbl *) &_IOPCEventSinkStubVtbl,
    ( CInterfaceStubVtbl *) &_IOPCEventServer2StubVtbl,
    ( CInterfaceStubVtbl *) &_IOPCEventSubscriptionMgt2StubVtbl,
    0
};

PCInterfaceName const _opc_ae_InterfaceNamesList[] = 
{
    "OPCEventServerCATID",
    "IOPCEventServer",
    "IOPCEventSubscriptionMgt",
    "IOPCEventAreaBrowser",
    "IOPCEventSink",
    "IOPCEventServer2",
    "IOPCEventSubscriptionMgt2",
    0
};


#define _opc_ae_CHECK_IID(n)	IID_GENERIC_CHECK_IID( _opc_ae, pIID, n)

int __stdcall _opc_ae_IID_Lookup( const IID * pIID, int * pIndex )
{
    IID_BS_LOOKUP_SETUP

    IID_BS_LOOKUP_INITIAL_TEST( _opc_ae, 7, 4 )
    IID_BS_LOOKUP_NEXT_TEST( _opc_ae, 2 )
    IID_BS_LOOKUP_NEXT_TEST( _opc_ae, 1 )
    IID_BS_LOOKUP_RETURN_RESULT( _opc_ae, 7, *pIndex )
    
}

const ExtendedProxyFileInfo opc_ae_ProxyFileInfo = 
{
    (PCInterfaceProxyVtblList *) & _opc_ae_ProxyVtblList,
    (PCInterfaceStubVtblList *) & _opc_ae_StubVtblList,
    (const PCInterfaceName * ) & _opc_ae_InterfaceNamesList,
    0, /* no delegation */
    & _opc_ae_IID_Lookup, 
    7,
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

