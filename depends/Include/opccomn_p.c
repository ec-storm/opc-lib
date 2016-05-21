

/* this ALWAYS GENERATED file contains the proxy stub code */


 /* File created by MIDL compiler version 8.00.0603 */
/* at Sat May 07 19:15:38 2016
 */
/* Compiler settings for opccomn.idl:
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


#include "opccomn.h"

#define TYPE_FORMAT_STRING_SIZE   167                               
#define PROC_FORMAT_STRING_SIZE   673                               
#define EXPR_FORMAT_STRING_SIZE   1                                 
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   0            

typedef struct _opccomn_MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } opccomn_MIDL_TYPE_FORMAT_STRING;

typedef struct _opccomn_MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } opccomn_MIDL_PROC_FORMAT_STRING;

typedef struct _opccomn_MIDL_EXPR_FORMAT_STRING
    {
    long          Pad;
    unsigned char  Format[ EXPR_FORMAT_STRING_SIZE ];
    } opccomn_MIDL_EXPR_FORMAT_STRING;


static const RPC_SYNTAX_IDENTIFIER  _RpcTransferSyntax = 
{{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}};


extern const opccomn_MIDL_TYPE_FORMAT_STRING opccomn__MIDL_TypeFormatString;
extern const opccomn_MIDL_PROC_FORMAT_STRING opccomn__MIDL_ProcFormatString;
extern const opccomn_MIDL_EXPR_FORMAT_STRING opccomn__MIDL_ExprFormatString;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IOPCShutdown_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IOPCShutdown_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IOPCCommon_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IOPCCommon_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IOPCServerList_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IOPCServerList_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IOPCEnumGUID_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IOPCEnumGUID_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IOPCServerList2_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IOPCServerList2_ProxyInfo;



#if !defined(__RPC_WIN64__)
#error  Invalid build platform for this stub.
#endif

static const opccomn_MIDL_PROC_FORMAT_STRING opccomn__MIDL_ProcFormatString =
    {
        0,
        {

	/* Procedure ShutdownRequest */

			0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/*  2 */	NdrFcLong( 0x0 ),	/* 0 */
/*  6 */	NdrFcShort( 0x3 ),	/* 3 */
/*  8 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 10 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12 */	NdrFcShort( 0x8 ),	/* 8 */
/* 14 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 16 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 18 */	NdrFcShort( 0x0 ),	/* 0 */
/* 20 */	NdrFcShort( 0x0 ),	/* 0 */
/* 22 */	NdrFcShort( 0x0 ),	/* 0 */
/* 24 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter szReason */

/* 26 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 28 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 30 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Return value */

/* 32 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 34 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 36 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetLocaleID */

/* 38 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 40 */	NdrFcLong( 0x0 ),	/* 0 */
/* 44 */	NdrFcShort( 0x3 ),	/* 3 */
/* 46 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 48 */	NdrFcShort( 0x8 ),	/* 8 */
/* 50 */	NdrFcShort( 0x8 ),	/* 8 */
/* 52 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 54 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 56 */	NdrFcShort( 0x0 ),	/* 0 */
/* 58 */	NdrFcShort( 0x0 ),	/* 0 */
/* 60 */	NdrFcShort( 0x0 ),	/* 0 */
/* 62 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dwLcid */

/* 64 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 66 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 68 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 70 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 72 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 74 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetLocaleID */

/* 76 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 78 */	NdrFcLong( 0x0 ),	/* 0 */
/* 82 */	NdrFcShort( 0x4 ),	/* 4 */
/* 84 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 86 */	NdrFcShort( 0x0 ),	/* 0 */
/* 88 */	NdrFcShort( 0x24 ),	/* 36 */
/* 90 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 92 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 94 */	NdrFcShort( 0x0 ),	/* 0 */
/* 96 */	NdrFcShort( 0x0 ),	/* 0 */
/* 98 */	NdrFcShort( 0x0 ),	/* 0 */
/* 100 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pdwLcid */

/* 102 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 104 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 106 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 108 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 110 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 112 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure QueryAvailableLocaleIDs */

/* 114 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 116 */	NdrFcLong( 0x0 ),	/* 0 */
/* 120 */	NdrFcShort( 0x5 ),	/* 5 */
/* 122 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 124 */	NdrFcShort( 0x0 ),	/* 0 */
/* 126 */	NdrFcShort( 0x24 ),	/* 36 */
/* 128 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 130 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 132 */	NdrFcShort( 0x1 ),	/* 1 */
/* 134 */	NdrFcShort( 0x0 ),	/* 0 */
/* 136 */	NdrFcShort( 0x0 ),	/* 0 */
/* 138 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pdwCount */

/* 140 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 142 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 144 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pdwLcid */

/* 146 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 148 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 150 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Return value */

/* 152 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 154 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 156 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetErrorString */

/* 158 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 160 */	NdrFcLong( 0x0 ),	/* 0 */
/* 164 */	NdrFcShort( 0x6 ),	/* 6 */
/* 166 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 168 */	NdrFcShort( 0x8 ),	/* 8 */
/* 170 */	NdrFcShort( 0x8 ),	/* 8 */
/* 172 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 174 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 176 */	NdrFcShort( 0x0 ),	/* 0 */
/* 178 */	NdrFcShort( 0x0 ),	/* 0 */
/* 180 */	NdrFcShort( 0x0 ),	/* 0 */
/* 182 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dwError */

/* 184 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 186 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 188 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppString */

/* 190 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 192 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 194 */	NdrFcShort( 0x1e ),	/* Type Offset=30 */

	/* Return value */

/* 196 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 198 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 200 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetClientName */

/* 202 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 204 */	NdrFcLong( 0x0 ),	/* 0 */
/* 208 */	NdrFcShort( 0x7 ),	/* 7 */
/* 210 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 212 */	NdrFcShort( 0x0 ),	/* 0 */
/* 214 */	NdrFcShort( 0x8 ),	/* 8 */
/* 216 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 218 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 220 */	NdrFcShort( 0x0 ),	/* 0 */
/* 222 */	NdrFcShort( 0x0 ),	/* 0 */
/* 224 */	NdrFcShort( 0x0 ),	/* 0 */
/* 226 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter szName */

/* 228 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 230 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 232 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Return value */

/* 234 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 236 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 238 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EnumClassesOfCategories */

/* 240 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 242 */	NdrFcLong( 0x0 ),	/* 0 */
/* 246 */	NdrFcShort( 0x3 ),	/* 3 */
/* 248 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 250 */	NdrFcShort( 0x10 ),	/* 16 */
/* 252 */	NdrFcShort( 0x8 ),	/* 8 */
/* 254 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 256 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 258 */	NdrFcShort( 0x0 ),	/* 0 */
/* 260 */	NdrFcShort( 0x1 ),	/* 1 */
/* 262 */	NdrFcShort( 0x0 ),	/* 0 */
/* 264 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter cImplemented */

/* 266 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 268 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 270 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter rgcatidImpl */

/* 272 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 274 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 276 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Parameter cRequired */

/* 278 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 280 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 282 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter rgcatidReq */

/* 284 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 286 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 288 */	NdrFcShort( 0x48 ),	/* Type Offset=72 */

	/* Parameter ppenumClsid */

/* 290 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 292 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 294 */	NdrFcShort( 0x58 ),	/* Type Offset=88 */

	/* Return value */

/* 296 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 298 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 300 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetClassDetails */

/* 302 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 304 */	NdrFcLong( 0x0 ),	/* 0 */
/* 308 */	NdrFcShort( 0x4 ),	/* 4 */
/* 310 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 312 */	NdrFcShort( 0x44 ),	/* 68 */
/* 314 */	NdrFcShort( 0x8 ),	/* 8 */
/* 316 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 318 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 320 */	NdrFcShort( 0x0 ),	/* 0 */
/* 322 */	NdrFcShort( 0x0 ),	/* 0 */
/* 324 */	NdrFcShort( 0x0 ),	/* 0 */
/* 326 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter clsid */

/* 328 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 330 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 332 */	NdrFcShort( 0x2c ),	/* Type Offset=44 */

	/* Parameter ppszProgID */

/* 334 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 336 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 338 */	NdrFcShort( 0x1e ),	/* Type Offset=30 */

	/* Parameter ppszUserType */

/* 340 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 342 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 344 */	NdrFcShort( 0x1e ),	/* Type Offset=30 */

	/* Return value */

/* 346 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 348 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 350 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CLSIDFromProgID */


	/* Procedure CLSIDFromProgID */

/* 352 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 354 */	NdrFcLong( 0x0 ),	/* 0 */
/* 358 */	NdrFcShort( 0x5 ),	/* 5 */
/* 360 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 362 */	NdrFcShort( 0x0 ),	/* 0 */
/* 364 */	NdrFcShort( 0x4c ),	/* 76 */
/* 366 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 368 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 370 */	NdrFcShort( 0x0 ),	/* 0 */
/* 372 */	NdrFcShort( 0x0 ),	/* 0 */
/* 374 */	NdrFcShort( 0x0 ),	/* 0 */
/* 376 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter szProgId */


	/* Parameter szProgId */

/* 378 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 380 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 382 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Parameter clsid */


	/* Parameter clsid */

/* 384 */	NdrFcShort( 0x4112 ),	/* Flags:  must free, out, simple ref, srv alloc size=16 */
/* 386 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 388 */	NdrFcShort( 0x2c ),	/* Type Offset=44 */

	/* Return value */


	/* Return value */

/* 390 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 392 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 394 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Next */

/* 396 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 398 */	NdrFcLong( 0x0 ),	/* 0 */
/* 402 */	NdrFcShort( 0x3 ),	/* 3 */
/* 404 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 406 */	NdrFcShort( 0x8 ),	/* 8 */
/* 408 */	NdrFcShort( 0x24 ),	/* 36 */
/* 410 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 412 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 414 */	NdrFcShort( 0x1 ),	/* 1 */
/* 416 */	NdrFcShort( 0x0 ),	/* 0 */
/* 418 */	NdrFcShort( 0x0 ),	/* 0 */
/* 420 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter celt */

/* 422 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 424 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 426 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter rgelt */

/* 428 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 430 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 432 */	NdrFcShort( 0x7a ),	/* Type Offset=122 */

	/* Parameter pceltFetched */

/* 434 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 436 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 438 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 440 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 442 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 444 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Skip */

/* 446 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 448 */	NdrFcLong( 0x0 ),	/* 0 */
/* 452 */	NdrFcShort( 0x4 ),	/* 4 */
/* 454 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 456 */	NdrFcShort( 0x8 ),	/* 8 */
/* 458 */	NdrFcShort( 0x8 ),	/* 8 */
/* 460 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 462 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 464 */	NdrFcShort( 0x0 ),	/* 0 */
/* 466 */	NdrFcShort( 0x0 ),	/* 0 */
/* 468 */	NdrFcShort( 0x0 ),	/* 0 */
/* 470 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter celt */

/* 472 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 474 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 476 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 478 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 480 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 482 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Reset */

/* 484 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 486 */	NdrFcLong( 0x0 ),	/* 0 */
/* 490 */	NdrFcShort( 0x5 ),	/* 5 */
/* 492 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 494 */	NdrFcShort( 0x0 ),	/* 0 */
/* 496 */	NdrFcShort( 0x8 ),	/* 8 */
/* 498 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 500 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 502 */	NdrFcShort( 0x0 ),	/* 0 */
/* 504 */	NdrFcShort( 0x0 ),	/* 0 */
/* 506 */	NdrFcShort( 0x0 ),	/* 0 */
/* 508 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 510 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 512 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 514 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Clone */

/* 516 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 518 */	NdrFcLong( 0x0 ),	/* 0 */
/* 522 */	NdrFcShort( 0x6 ),	/* 6 */
/* 524 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 526 */	NdrFcShort( 0x0 ),	/* 0 */
/* 528 */	NdrFcShort( 0x8 ),	/* 8 */
/* 530 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 532 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 534 */	NdrFcShort( 0x0 ),	/* 0 */
/* 536 */	NdrFcShort( 0x0 ),	/* 0 */
/* 538 */	NdrFcShort( 0x0 ),	/* 0 */
/* 540 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppenum */

/* 542 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 544 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 546 */	NdrFcShort( 0x90 ),	/* Type Offset=144 */

	/* Return value */

/* 548 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 550 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 552 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EnumClassesOfCategories */

/* 554 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 556 */	NdrFcLong( 0x0 ),	/* 0 */
/* 560 */	NdrFcShort( 0x3 ),	/* 3 */
/* 562 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 564 */	NdrFcShort( 0x10 ),	/* 16 */
/* 566 */	NdrFcShort( 0x8 ),	/* 8 */
/* 568 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 570 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 572 */	NdrFcShort( 0x0 ),	/* 0 */
/* 574 */	NdrFcShort( 0x1 ),	/* 1 */
/* 576 */	NdrFcShort( 0x0 ),	/* 0 */
/* 578 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter cImplemented */

/* 580 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 582 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 584 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter rgcatidImpl */

/* 586 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 588 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 590 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Parameter cRequired */

/* 592 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 594 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 596 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter rgcatidReq */

/* 598 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 600 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 602 */	NdrFcShort( 0x48 ),	/* Type Offset=72 */

	/* Parameter ppenumClsid */

/* 604 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 606 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 608 */	NdrFcShort( 0x90 ),	/* Type Offset=144 */

	/* Return value */

/* 610 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 612 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 614 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetClassDetails */

/* 616 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 618 */	NdrFcLong( 0x0 ),	/* 0 */
/* 622 */	NdrFcShort( 0x4 ),	/* 4 */
/* 624 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 626 */	NdrFcShort( 0x44 ),	/* 68 */
/* 628 */	NdrFcShort( 0x8 ),	/* 8 */
/* 630 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x5,		/* 5 */
/* 632 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 634 */	NdrFcShort( 0x0 ),	/* 0 */
/* 636 */	NdrFcShort( 0x0 ),	/* 0 */
/* 638 */	NdrFcShort( 0x0 ),	/* 0 */
/* 640 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter clsid */

/* 642 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 644 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 646 */	NdrFcShort( 0x2c ),	/* Type Offset=44 */

	/* Parameter ppszProgID */

/* 648 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 650 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 652 */	NdrFcShort( 0x1e ),	/* Type Offset=30 */

	/* Parameter ppszUserType */

/* 654 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 656 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 658 */	NdrFcShort( 0x1e ),	/* Type Offset=30 */

	/* Parameter ppszVerIndProgID */

/* 660 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 662 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 664 */	NdrFcShort( 0x1e ),	/* Type Offset=30 */

	/* Return value */

/* 666 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 668 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 670 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

			0x0
        }
    };

static const opccomn_MIDL_TYPE_FORMAT_STRING opccomn__MIDL_TypeFormatString =
    {
        0,
        {
			NdrFcShort( 0x0 ),	/* 0 */
/*  2 */	
			0x11, 0x8,	/* FC_RP [simple_pointer] */
/*  4 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/*  6 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/*  8 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 10 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 12 */	NdrFcShort( 0x2 ),	/* Offset= 2 (14) */
/* 14 */	
			0x13, 0x0,	/* FC_OP */
/* 16 */	NdrFcShort( 0x2 ),	/* Offset= 2 (18) */
/* 18 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 20 */	NdrFcShort( 0x4 ),	/* 4 */
/* 22 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x54,		/* FC_DEREFERENCE */
/* 24 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 26 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 28 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 30 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 32 */	NdrFcShort( 0x2 ),	/* Offset= 2 (34) */
/* 34 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 36 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 38 */	
			0x1d,		/* FC_SMFARRAY */
			0x0,		/* 0 */
/* 40 */	NdrFcShort( 0x8 ),	/* 8 */
/* 42 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 44 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 46 */	NdrFcShort( 0x10 ),	/* 16 */
/* 48 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 50 */	0x6,		/* FC_SHORT */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 52 */	0x0,		/* 0 */
			NdrFcShort( 0xfff1 ),	/* Offset= -15 (38) */
			0x5b,		/* FC_END */
/* 56 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 58 */	NdrFcShort( 0x10 ),	/* 16 */
/* 60 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 62 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 64 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 66 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 68 */	NdrFcShort( 0xffe8 ),	/* Offset= -24 (44) */
/* 70 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 72 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 74 */	NdrFcShort( 0x10 ),	/* 16 */
/* 76 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 78 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 80 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 82 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 84 */	NdrFcShort( 0xffd8 ),	/* Offset= -40 (44) */
/* 86 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 88 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 90 */	NdrFcShort( 0x2 ),	/* Offset= 2 (92) */
/* 92 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 94 */	NdrFcLong( 0x2e000 ),	/* 188416 */
/* 98 */	NdrFcShort( 0x0 ),	/* 0 */
/* 100 */	NdrFcShort( 0x0 ),	/* 0 */
/* 102 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 104 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 106 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 108 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 110 */	
			0x11, 0x0,	/* FC_RP */
/* 112 */	NdrFcShort( 0xffbc ),	/* Offset= -68 (44) */
/* 114 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 116 */	NdrFcShort( 0xffb8 ),	/* Offset= -72 (44) */
/* 118 */	
			0x11, 0x0,	/* FC_RP */
/* 120 */	NdrFcShort( 0x2 ),	/* Offset= 2 (122) */
/* 122 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 124 */	NdrFcShort( 0x0 ),	/* 0 */
/* 126 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 128 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 130 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 132 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x54,		/* FC_DEREFERENCE */
/* 134 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 136 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 138 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 140 */	NdrFcShort( 0xffa0 ),	/* Offset= -96 (44) */
/* 142 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 144 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 146 */	NdrFcShort( 0x2 ),	/* Offset= 2 (148) */
/* 148 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 150 */	NdrFcLong( 0x55c382c8 ),	/* 1438876360 */
/* 154 */	NdrFcShort( 0x21c7 ),	/* 8647 */
/* 156 */	NdrFcShort( 0x4e88 ),	/* 20104 */
/* 158 */	0x96,		/* 150 */
			0xc1,		/* 193 */
/* 160 */	0xbe,		/* 190 */
			0xcf,		/* 207 */
/* 162 */	0xb1,		/* 177 */
			0xe3,		/* 227 */
/* 164 */	0xf4,		/* 244 */
			0x83,		/* 131 */

			0x0
        }
    };


/* Object interface: IUnknown, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IOPCShutdown, ver. 0.0,
   GUID={0xF31DFDE1,0x07B6,0x11d2,{0xB2,0xD8,0x00,0x60,0x08,0x3B,0xA1,0xFB}} */

#pragma code_seg(".orpc")
static const unsigned short IOPCShutdown_FormatStringOffsetTable[] =
    {
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IOPCShutdown_ProxyInfo =
    {
    &Object_StubDesc,
    opccomn__MIDL_ProcFormatString.Format,
    &IOPCShutdown_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IOPCShutdown_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    opccomn__MIDL_ProcFormatString.Format,
    &IOPCShutdown_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(4) _IOPCShutdownProxyVtbl = 
{
    &IOPCShutdown_ProxyInfo,
    &IID_IOPCShutdown,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IOPCShutdown::ShutdownRequest */
};

const CInterfaceStubVtbl _IOPCShutdownStubVtbl =
{
    &IID_IOPCShutdown,
    &IOPCShutdown_ServerInfo,
    4,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IOPCCommon, ver. 0.0,
   GUID={0xF31DFDE2,0x07B6,0x11d2,{0xB2,0xD8,0x00,0x60,0x08,0x3B,0xA1,0xFB}} */

#pragma code_seg(".orpc")
static const unsigned short IOPCCommon_FormatStringOffsetTable[] =
    {
    38,
    76,
    114,
    158,
    202
    };

static const MIDL_STUBLESS_PROXY_INFO IOPCCommon_ProxyInfo =
    {
    &Object_StubDesc,
    opccomn__MIDL_ProcFormatString.Format,
    &IOPCCommon_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IOPCCommon_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    opccomn__MIDL_ProcFormatString.Format,
    &IOPCCommon_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(8) _IOPCCommonProxyVtbl = 
{
    &IOPCCommon_ProxyInfo,
    &IID_IOPCCommon,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IOPCCommon::SetLocaleID */ ,
    (void *) (INT_PTR) -1 /* IOPCCommon::GetLocaleID */ ,
    (void *) (INT_PTR) -1 /* IOPCCommon::QueryAvailableLocaleIDs */ ,
    (void *) (INT_PTR) -1 /* IOPCCommon::GetErrorString */ ,
    (void *) (INT_PTR) -1 /* IOPCCommon::SetClientName */
};

const CInterfaceStubVtbl _IOPCCommonStubVtbl =
{
    &IID_IOPCCommon,
    &IOPCCommon_ServerInfo,
    8,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IOPCServerList, ver. 0.0,
   GUID={0x13486D50,0x4821,0x11D2,{0xA4,0x94,0x3C,0xB3,0x06,0xC1,0x00,0x00}} */

#pragma code_seg(".orpc")
static const unsigned short IOPCServerList_FormatStringOffsetTable[] =
    {
    240,
    302,
    352
    };

static const MIDL_STUBLESS_PROXY_INFO IOPCServerList_ProxyInfo =
    {
    &Object_StubDesc,
    opccomn__MIDL_ProcFormatString.Format,
    &IOPCServerList_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IOPCServerList_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    opccomn__MIDL_ProcFormatString.Format,
    &IOPCServerList_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(6) _IOPCServerListProxyVtbl = 
{
    &IOPCServerList_ProxyInfo,
    &IID_IOPCServerList,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IOPCServerList::EnumClassesOfCategories */ ,
    (void *) (INT_PTR) -1 /* IOPCServerList::GetClassDetails */ ,
    (void *) (INT_PTR) -1 /* IOPCServerList::CLSIDFromProgID */
};

const CInterfaceStubVtbl _IOPCServerListStubVtbl =
{
    &IID_IOPCServerList,
    &IOPCServerList_ServerInfo,
    6,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IOPCEnumGUID, ver. 0.0,
   GUID={0x55C382C8,0x21C7,0x4e88,{0x96,0xC1,0xBE,0xCF,0xB1,0xE3,0xF4,0x83}} */

#pragma code_seg(".orpc")
static const unsigned short IOPCEnumGUID_FormatStringOffsetTable[] =
    {
    396,
    446,
    484,
    516
    };

static const MIDL_STUBLESS_PROXY_INFO IOPCEnumGUID_ProxyInfo =
    {
    &Object_StubDesc,
    opccomn__MIDL_ProcFormatString.Format,
    &IOPCEnumGUID_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IOPCEnumGUID_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    opccomn__MIDL_ProcFormatString.Format,
    &IOPCEnumGUID_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(7) _IOPCEnumGUIDProxyVtbl = 
{
    &IOPCEnumGUID_ProxyInfo,
    &IID_IOPCEnumGUID,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IOPCEnumGUID::Next */ ,
    (void *) (INT_PTR) -1 /* IOPCEnumGUID::Skip */ ,
    (void *) (INT_PTR) -1 /* IOPCEnumGUID::Reset */ ,
    (void *) (INT_PTR) -1 /* IOPCEnumGUID::Clone */
};

const CInterfaceStubVtbl _IOPCEnumGUIDStubVtbl =
{
    &IID_IOPCEnumGUID,
    &IOPCEnumGUID_ServerInfo,
    7,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IOPCServerList2, ver. 0.0,
   GUID={0x9DD0B56C,0xAD9E,0x43ee,{0x83,0x05,0x48,0x7F,0x31,0x88,0xBF,0x7A}} */

#pragma code_seg(".orpc")
static const unsigned short IOPCServerList2_FormatStringOffsetTable[] =
    {
    554,
    616,
    352
    };

static const MIDL_STUBLESS_PROXY_INFO IOPCServerList2_ProxyInfo =
    {
    &Object_StubDesc,
    opccomn__MIDL_ProcFormatString.Format,
    &IOPCServerList2_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IOPCServerList2_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    opccomn__MIDL_ProcFormatString.Format,
    &IOPCServerList2_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(6) _IOPCServerList2ProxyVtbl = 
{
    &IOPCServerList2_ProxyInfo,
    &IID_IOPCServerList2,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IOPCServerList2::EnumClassesOfCategories */ ,
    (void *) (INT_PTR) -1 /* IOPCServerList2::GetClassDetails */ ,
    (void *) (INT_PTR) -1 /* IOPCServerList2::CLSIDFromProgID */
};

const CInterfaceStubVtbl _IOPCServerList2StubVtbl =
{
    &IID_IOPCServerList2,
    &IOPCServerList2_ServerInfo,
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
    opccomn__MIDL_TypeFormatString.Format,
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

const CInterfaceProxyVtbl * const _opccomn_ProxyVtblList[] = 
{
    ( CInterfaceProxyVtbl *) &_IOPCServerListProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IOPCServerList2ProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IOPCEnumGUIDProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IOPCShutdownProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IOPCCommonProxyVtbl,
    0
};

const CInterfaceStubVtbl * const _opccomn_StubVtblList[] = 
{
    ( CInterfaceStubVtbl *) &_IOPCServerListStubVtbl,
    ( CInterfaceStubVtbl *) &_IOPCServerList2StubVtbl,
    ( CInterfaceStubVtbl *) &_IOPCEnumGUIDStubVtbl,
    ( CInterfaceStubVtbl *) &_IOPCShutdownStubVtbl,
    ( CInterfaceStubVtbl *) &_IOPCCommonStubVtbl,
    0
};

PCInterfaceName const _opccomn_InterfaceNamesList[] = 
{
    "IOPCServerList",
    "IOPCServerList2",
    "IOPCEnumGUID",
    "IOPCShutdown",
    "IOPCCommon",
    0
};


#define _opccomn_CHECK_IID(n)	IID_GENERIC_CHECK_IID( _opccomn, pIID, n)

int __stdcall _opccomn_IID_Lookup( const IID * pIID, int * pIndex )
{
    IID_BS_LOOKUP_SETUP

    IID_BS_LOOKUP_INITIAL_TEST( _opccomn, 5, 4 )
    IID_BS_LOOKUP_NEXT_TEST( _opccomn, 2 )
    IID_BS_LOOKUP_NEXT_TEST( _opccomn, 1 )
    IID_BS_LOOKUP_RETURN_RESULT( _opccomn, 5, *pIndex )
    
}

const ExtendedProxyFileInfo opccomn_ProxyFileInfo = 
{
    (PCInterfaceProxyVtblList *) & _opccomn_ProxyVtblList,
    (PCInterfaceStubVtblList *) & _opccomn_StubVtblList,
    (const PCInterfaceName * ) & _opccomn_InterfaceNamesList,
    0, /* no delegation */
    & _opccomn_IID_Lookup, 
    5,
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

