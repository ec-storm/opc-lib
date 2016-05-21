

/* this ALWAYS GENERATED file contains the proxy stub code */


 /* File created by MIDL compiler version 8.00.0603 */
/* at Sat May 07 19:15:39 2016
 */
/* Compiler settings for opcbc.idl:
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


#include "opcbc.h"

#define TYPE_FORMAT_STRING_SIZE   345                               
#define PROC_FORMAT_STRING_SIZE   491                               
#define EXPR_FORMAT_STRING_SIZE   1                                 
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   0            

typedef struct _opcbc_MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } opcbc_MIDL_TYPE_FORMAT_STRING;

typedef struct _opcbc_MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } opcbc_MIDL_PROC_FORMAT_STRING;

typedef struct _opcbc_MIDL_EXPR_FORMAT_STRING
    {
    long          Pad;
    unsigned char  Format[ EXPR_FORMAT_STRING_SIZE ];
    } opcbc_MIDL_EXPR_FORMAT_STRING;


static const RPC_SYNTAX_IDENTIFIER  _RpcTransferSyntax = 
{{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}};


extern const opcbc_MIDL_TYPE_FORMAT_STRING opcbc__MIDL_TypeFormatString;
extern const opcbc_MIDL_PROC_FORMAT_STRING opcbc__MIDL_ProcFormatString;
extern const opcbc_MIDL_EXPR_FORMAT_STRING opcbc__MIDL_ExprFormatString;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO CATID_OPCBatchServer10_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO CATID_OPCBatchServer10_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO CATID_OPCBatchServer20_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO CATID_OPCBatchServer20_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IOPCBatchServer_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IOPCBatchServer_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IOPCBatchServer2_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IOPCBatchServer2_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IEnumOPCBatchSummary_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IEnumOPCBatchSummary_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IOPCEnumerationSets_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IOPCEnumerationSets_ProxyInfo;



#if !defined(__RPC_WIN64__)
#error  Invalid build platform for this stub.
#endif

static const opcbc_MIDL_PROC_FORMAT_STRING opcbc__MIDL_ProcFormatString =
    {
        0,
        {

	/* Procedure GetDelimiter */

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

	/* Parameter pszDelimiter */

/* 26 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 28 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 30 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Return value */

/* 32 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 34 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 36 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateEnumerator */

/* 38 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 40 */	NdrFcLong( 0x0 ),	/* 0 */
/* 44 */	NdrFcShort( 0x4 ),	/* 4 */
/* 46 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 48 */	NdrFcShort( 0x44 ),	/* 68 */
/* 50 */	NdrFcShort( 0x8 ),	/* 8 */
/* 52 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 54 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 56 */	NdrFcShort( 0x1 ),	/* 1 */
/* 58 */	NdrFcShort( 0x0 ),	/* 0 */
/* 60 */	NdrFcShort( 0x0 ),	/* 0 */
/* 62 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter riid */

/* 64 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 66 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 68 */	NdrFcShort( 0x14 ),	/* Type Offset=20 */

	/* Parameter ppUnk */

/* 70 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 72 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 74 */	NdrFcShort( 0x20 ),	/* Type Offset=32 */

	/* Return value */

/* 76 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 78 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 80 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateFilteredEnumerator */

/* 82 */	0x33,		/* FC_AUTO_HANDLE */
			0x6d,		/* Old Flags:  full ptr, object, Oi2 */
/* 84 */	NdrFcLong( 0x0 ),	/* 0 */
/* 88 */	NdrFcShort( 0x3 ),	/* 3 */
/* 90 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 92 */	NdrFcShort( 0x44 ),	/* 68 */
/* 94 */	NdrFcShort( 0x8 ),	/* 8 */
/* 96 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 98 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 100 */	NdrFcShort( 0x1 ),	/* 1 */
/* 102 */	NdrFcShort( 0x0 ),	/* 0 */
/* 104 */	NdrFcShort( 0x0 ),	/* 0 */
/* 106 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter riid */

/* 108 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 110 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 112 */	NdrFcShort( 0x14 ),	/* Type Offset=20 */

	/* Parameter pFilter */

/* 114 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 116 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 118 */	NdrFcShort( 0x2c ),	/* Type Offset=44 */

	/* Parameter szModel */

/* 120 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 122 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 124 */	NdrFcShort( 0x78 ),	/* Type Offset=120 */

	/* Parameter ppUnk */

/* 126 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 128 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 130 */	NdrFcShort( 0x7a ),	/* Type Offset=122 */

	/* Return value */

/* 132 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 134 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 136 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Next */

/* 138 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 140 */	NdrFcLong( 0x0 ),	/* 0 */
/* 144 */	NdrFcShort( 0x3 ),	/* 3 */
/* 146 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 148 */	NdrFcShort( 0x8 ),	/* 8 */
/* 150 */	NdrFcShort( 0x24 ),	/* 36 */
/* 152 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 154 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 156 */	NdrFcShort( 0x1 ),	/* 1 */
/* 158 */	NdrFcShort( 0x0 ),	/* 0 */
/* 160 */	NdrFcShort( 0x0 ),	/* 0 */
/* 162 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter celt */

/* 164 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 166 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 168 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppSummaryArray */

/* 170 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 172 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 174 */	NdrFcShort( 0x86 ),	/* Type Offset=134 */

	/* Parameter pceltFetched */

/* 176 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 178 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 180 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 182 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 184 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 186 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Skip */

/* 188 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 190 */	NdrFcLong( 0x0 ),	/* 0 */
/* 194 */	NdrFcShort( 0x4 ),	/* 4 */
/* 196 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 198 */	NdrFcShort( 0x8 ),	/* 8 */
/* 200 */	NdrFcShort( 0x8 ),	/* 8 */
/* 202 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 204 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 206 */	NdrFcShort( 0x0 ),	/* 0 */
/* 208 */	NdrFcShort( 0x0 ),	/* 0 */
/* 210 */	NdrFcShort( 0x0 ),	/* 0 */
/* 212 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter celt */

/* 214 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 216 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 218 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 220 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 222 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 224 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Reset */

/* 226 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 228 */	NdrFcLong( 0x0 ),	/* 0 */
/* 232 */	NdrFcShort( 0x5 ),	/* 5 */
/* 234 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 236 */	NdrFcShort( 0x0 ),	/* 0 */
/* 238 */	NdrFcShort( 0x8 ),	/* 8 */
/* 240 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 242 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 244 */	NdrFcShort( 0x0 ),	/* 0 */
/* 246 */	NdrFcShort( 0x0 ),	/* 0 */
/* 248 */	NdrFcShort( 0x0 ),	/* 0 */
/* 250 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 252 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 254 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 256 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Clone */

/* 258 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 260 */	NdrFcLong( 0x0 ),	/* 0 */
/* 264 */	NdrFcShort( 0x6 ),	/* 6 */
/* 266 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 268 */	NdrFcShort( 0x0 ),	/* 0 */
/* 270 */	NdrFcShort( 0x8 ),	/* 8 */
/* 272 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 274 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 276 */	NdrFcShort( 0x0 ),	/* 0 */
/* 278 */	NdrFcShort( 0x0 ),	/* 0 */
/* 280 */	NdrFcShort( 0x0 ),	/* 0 */
/* 282 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppEnumBatchSummary */

/* 284 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 286 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 288 */	NdrFcShort( 0xde ),	/* Type Offset=222 */

	/* Return value */

/* 290 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 292 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 294 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Count */

/* 296 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 298 */	NdrFcLong( 0x0 ),	/* 0 */
/* 302 */	NdrFcShort( 0x7 ),	/* 7 */
/* 304 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 306 */	NdrFcShort( 0x0 ),	/* 0 */
/* 308 */	NdrFcShort( 0x24 ),	/* 36 */
/* 310 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 312 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 314 */	NdrFcShort( 0x0 ),	/* 0 */
/* 316 */	NdrFcShort( 0x0 ),	/* 0 */
/* 318 */	NdrFcShort( 0x0 ),	/* 0 */
/* 320 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pcelt */

/* 322 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 324 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 326 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 328 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 330 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 332 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure QueryEnumerationSets */

/* 334 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 336 */	NdrFcLong( 0x0 ),	/* 0 */
/* 340 */	NdrFcShort( 0x3 ),	/* 3 */
/* 342 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 344 */	NdrFcShort( 0x0 ),	/* 0 */
/* 346 */	NdrFcShort( 0x24 ),	/* 36 */
/* 348 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 350 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 352 */	NdrFcShort( 0x1 ),	/* 1 */
/* 354 */	NdrFcShort( 0x0 ),	/* 0 */
/* 356 */	NdrFcShort( 0x0 ),	/* 0 */
/* 358 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pdwCount */

/* 360 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 362 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 364 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppdwEnumSetId */

/* 366 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 368 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 370 */	NdrFcShort( 0xf4 ),	/* Type Offset=244 */

	/* Parameter ppszEnumSetName */

/* 372 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 374 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 376 */	NdrFcShort( 0x108 ),	/* Type Offset=264 */

	/* Return value */

/* 378 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 380 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 382 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure QueryEnumeration */

/* 384 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 386 */	NdrFcLong( 0x0 ),	/* 0 */
/* 390 */	NdrFcShort( 0x4 ),	/* 4 */
/* 392 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 394 */	NdrFcShort( 0x10 ),	/* 16 */
/* 396 */	NdrFcShort( 0x8 ),	/* 8 */
/* 398 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 400 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 402 */	NdrFcShort( 0x0 ),	/* 0 */
/* 404 */	NdrFcShort( 0x0 ),	/* 0 */
/* 406 */	NdrFcShort( 0x0 ),	/* 0 */
/* 408 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dwEnumSetId */

/* 410 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 412 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 414 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter dwEnumValue */

/* 416 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 418 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 420 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pszEnumName */

/* 422 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 424 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 426 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Return value */

/* 428 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 430 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 432 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure QueryEnumerationList */

/* 434 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 436 */	NdrFcLong( 0x0 ),	/* 0 */
/* 440 */	NdrFcShort( 0x5 ),	/* 5 */
/* 442 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 444 */	NdrFcShort( 0x8 ),	/* 8 */
/* 446 */	NdrFcShort( 0x24 ),	/* 36 */
/* 448 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x5,		/* 5 */
/* 450 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 452 */	NdrFcShort( 0x1 ),	/* 1 */
/* 454 */	NdrFcShort( 0x0 ),	/* 0 */
/* 456 */	NdrFcShort( 0x0 ),	/* 0 */
/* 458 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dwEnumSetId */

/* 460 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 462 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 464 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pdwCount */

/* 466 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 468 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 470 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppdwEnumValue */

/* 472 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 474 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 476 */	NdrFcShort( 0x126 ),	/* Type Offset=294 */

	/* Parameter ppszEnumName */

/* 478 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 480 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 482 */	NdrFcShort( 0x13a ),	/* Type Offset=314 */

	/* Return value */

/* 484 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 486 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 488 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

			0x0
        }
    };

static const opcbc_MIDL_TYPE_FORMAT_STRING opcbc__MIDL_TypeFormatString =
    {
        0,
        {
			NdrFcShort( 0x0 ),	/* 0 */
/*  2 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/*  4 */	NdrFcShort( 0x2 ),	/* Offset= 2 (6) */
/*  6 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/*  8 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 10 */	
			0x11, 0x0,	/* FC_RP */
/* 12 */	NdrFcShort( 0x8 ),	/* Offset= 8 (20) */
/* 14 */	
			0x1d,		/* FC_SMFARRAY */
			0x0,		/* 0 */
/* 16 */	NdrFcShort( 0x8 ),	/* 8 */
/* 18 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 20 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 22 */	NdrFcShort( 0x10 ),	/* 16 */
/* 24 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 26 */	0x6,		/* FC_SHORT */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 28 */	0x0,		/* 0 */
			NdrFcShort( 0xfff1 ),	/* Offset= -15 (14) */
			0x5b,		/* FC_END */
/* 32 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 34 */	NdrFcShort( 0x2 ),	/* Offset= 2 (36) */
/* 36 */	
			0x2f,		/* FC_IP */
			0x5c,		/* FC_PAD */
/* 38 */	0x2b,		/* Corr desc:  parameter, FC_HYPER */
			0x0,		/*  */
/* 40 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 42 */	NdrFcShort( 0x5 ),	/* Corr flags:  early, iid_is, */
/* 44 */	
			0x14, 0x0,	/* FC_FP */
/* 46 */	NdrFcShort( 0xa ),	/* Offset= 10 (56) */
/* 48 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 50 */	NdrFcShort( 0x8 ),	/* 8 */
/* 52 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 54 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 56 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 58 */	NdrFcShort( 0x60 ),	/* 96 */
/* 60 */	NdrFcShort( 0x0 ),	/* 0 */
/* 62 */	NdrFcShort( 0x1c ),	/* Offset= 28 (90) */
/* 64 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 66 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 68 */	0xa,		/* FC_FLOAT */
			0xa,		/* FC_FLOAT */
/* 70 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 72 */	0x36,		/* FC_POINTER */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 74 */	0x0,		/* 0 */
			NdrFcShort( 0xffe5 ),	/* Offset= -27 (48) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 78 */	0x0,		/* 0 */
			NdrFcShort( 0xffe1 ),	/* Offset= -31 (48) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 82 */	0x0,		/* 0 */
			NdrFcShort( 0xffdd ),	/* Offset= -35 (48) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 86 */	0x0,		/* 0 */
			NdrFcShort( 0xffd9 ),	/* Offset= -39 (48) */
			0x5b,		/* FC_END */
/* 90 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 92 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 94 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 96 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 98 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 100 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 102 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 104 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 106 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 108 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 110 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 112 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 114 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 116 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 118 */	
			0x11, 0x8,	/* FC_RP [simple_pointer] */
/* 120 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 122 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 124 */	NdrFcShort( 0x2 ),	/* Offset= 2 (126) */
/* 126 */	
			0x2f,		/* FC_IP */
			0x5c,		/* FC_PAD */
/* 128 */	0x2b,		/* Corr desc:  parameter, FC_HYPER */
			0x0,		/*  */
/* 130 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 132 */	NdrFcShort( 0x5 ),	/* Corr flags:  early, iid_is, */
/* 134 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 136 */	NdrFcShort( 0x2 ),	/* Offset= 2 (138) */
/* 138 */	
			0x13, 0x0,	/* FC_OP */
/* 140 */	NdrFcShort( 0x38 ),	/* Offset= 56 (196) */
/* 142 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 144 */	NdrFcShort( 0x50 ),	/* 80 */
/* 146 */	NdrFcShort( 0x0 ),	/* 0 */
/* 148 */	NdrFcShort( 0x14 ),	/* Offset= 20 (168) */
/* 150 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 152 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 154 */	0xa,		/* FC_FLOAT */
			0x40,		/* FC_STRUCTPAD4 */
/* 156 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 158 */	0x36,		/* FC_POINTER */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 160 */	0x0,		/* 0 */
			NdrFcShort( 0xff8f ),	/* Offset= -113 (48) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 164 */	0x0,		/* 0 */
			NdrFcShort( 0xff8b ),	/* Offset= -117 (48) */
			0x5b,		/* FC_END */
/* 168 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 170 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 172 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 174 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 176 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 178 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 180 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 182 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 184 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 186 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 188 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 190 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 192 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 194 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 196 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 198 */	NdrFcShort( 0x0 ),	/* 0 */
/* 200 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x54,		/* FC_DEREFERENCE */
/* 202 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 204 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 206 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 210 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 212 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 214 */	NdrFcShort( 0xffb8 ),	/* Offset= -72 (142) */
/* 216 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 218 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 220 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 222 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 224 */	NdrFcShort( 0x2 ),	/* Offset= 2 (226) */
/* 226 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 228 */	NdrFcLong( 0xa8080da2 ),	/* -1475867230 */
/* 232 */	NdrFcShort( 0xe23e ),	/* -7618 */
/* 234 */	NdrFcShort( 0x11d2 ),	/* 4562 */
/* 236 */	0xaf,		/* 175 */
			0xa7,		/* 167 */
/* 238 */	0x0,		/* 0 */
			0xc0,		/* 192 */
/* 240 */	0x4f,		/* 79 */
			0x53,		/* 83 */
/* 242 */	0x94,		/* 148 */
			0x21,		/* 33 */
/* 244 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 246 */	NdrFcShort( 0x2 ),	/* Offset= 2 (248) */
/* 248 */	
			0x13, 0x0,	/* FC_OP */
/* 250 */	NdrFcShort( 0x2 ),	/* Offset= 2 (252) */
/* 252 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 254 */	NdrFcShort( 0x4 ),	/* 4 */
/* 256 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x54,		/* FC_DEREFERENCE */
/* 258 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 260 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 262 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 264 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 266 */	NdrFcShort( 0x2 ),	/* Offset= 2 (268) */
/* 268 */	
			0x13, 0x0,	/* FC_OP */
/* 270 */	NdrFcShort( 0x2 ),	/* Offset= 2 (272) */
/* 272 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 274 */	NdrFcShort( 0x0 ),	/* 0 */
/* 276 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x54,		/* FC_DEREFERENCE */
/* 278 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 280 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 282 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 286 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 288 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 290 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 292 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 294 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 296 */	NdrFcShort( 0x2 ),	/* Offset= 2 (298) */
/* 298 */	
			0x13, 0x0,	/* FC_OP */
/* 300 */	NdrFcShort( 0x2 ),	/* Offset= 2 (302) */
/* 302 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 304 */	NdrFcShort( 0x4 ),	/* 4 */
/* 306 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x54,		/* FC_DEREFERENCE */
/* 308 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 310 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 312 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 314 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 316 */	NdrFcShort( 0x2 ),	/* Offset= 2 (318) */
/* 318 */	
			0x13, 0x0,	/* FC_OP */
/* 320 */	NdrFcShort( 0x2 ),	/* Offset= 2 (322) */
/* 322 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 324 */	NdrFcShort( 0x0 ),	/* 0 */
/* 326 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x54,		/* FC_DEREFERENCE */
/* 328 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 330 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 332 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 336 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 338 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 340 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 342 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */

			0x0
        }
    };


/* Object interface: IUnknown, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: CATID_OPCBatchServer10, ver. 0.0,
   GUID={0xA8080DA0,0xE23E,0x11D2,{0xAF,0xA7,0x00,0xC0,0x4F,0x53,0x94,0x21}} */

#pragma code_seg(".orpc")
static const unsigned short CATID_OPCBatchServer10_FormatStringOffsetTable[] =
    {
    0
    };

static const MIDL_STUBLESS_PROXY_INFO CATID_OPCBatchServer10_ProxyInfo =
    {
    &Object_StubDesc,
    opcbc__MIDL_ProcFormatString.Format,
    &CATID_OPCBatchServer10_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO CATID_OPCBatchServer10_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    opcbc__MIDL_ProcFormatString.Format,
    &CATID_OPCBatchServer10_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(3) _CATID_OPCBatchServer10ProxyVtbl = 
{
    0,
    &IID_CATID_OPCBatchServer10,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy
};

const CInterfaceStubVtbl _CATID_OPCBatchServer10StubVtbl =
{
    &IID_CATID_OPCBatchServer10,
    &CATID_OPCBatchServer10_ServerInfo,
    3,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: CATID_OPCBatchServer20, ver. 0.0,
   GUID={0x843DE67B,0xB0C9,0x11d4,{0xA0,0xB7,0x00,0x01,0x02,0xA9,0x80,0xB1}} */

#pragma code_seg(".orpc")
static const unsigned short CATID_OPCBatchServer20_FormatStringOffsetTable[] =
    {
    0
    };

static const MIDL_STUBLESS_PROXY_INFO CATID_OPCBatchServer20_ProxyInfo =
    {
    &Object_StubDesc,
    opcbc__MIDL_ProcFormatString.Format,
    &CATID_OPCBatchServer20_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO CATID_OPCBatchServer20_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    opcbc__MIDL_ProcFormatString.Format,
    &CATID_OPCBatchServer20_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(3) _CATID_OPCBatchServer20ProxyVtbl = 
{
    0,
    &IID_CATID_OPCBatchServer20,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy
};

const CInterfaceStubVtbl _CATID_OPCBatchServer20StubVtbl =
{
    &IID_CATID_OPCBatchServer20,
    &CATID_OPCBatchServer20_ServerInfo,
    3,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Standard interface: __MIDL_itf_opcbc_0000_0002, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IOPCBatchServer, ver. 0.0,
   GUID={0x8BB4ED50,0xB314,0x11d3,{0xB3,0xEA,0x00,0xC0,0x4F,0x8E,0xCE,0xAA}} */

#pragma code_seg(".orpc")
static const unsigned short IOPCBatchServer_FormatStringOffsetTable[] =
    {
    0,
    38
    };

static const MIDL_STUBLESS_PROXY_INFO IOPCBatchServer_ProxyInfo =
    {
    &Object_StubDesc,
    opcbc__MIDL_ProcFormatString.Format,
    &IOPCBatchServer_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IOPCBatchServer_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    opcbc__MIDL_ProcFormatString.Format,
    &IOPCBatchServer_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(5) _IOPCBatchServerProxyVtbl = 
{
    &IOPCBatchServer_ProxyInfo,
    &IID_IOPCBatchServer,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IOPCBatchServer::GetDelimiter */ ,
    (void *) (INT_PTR) -1 /* IOPCBatchServer::CreateEnumerator */
};

const CInterfaceStubVtbl _IOPCBatchServerStubVtbl =
{
    &IID_IOPCBatchServer,
    &IOPCBatchServer_ServerInfo,
    5,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IOPCBatchServer2, ver. 0.0,
   GUID={0x895A78CF,0xB0C5,0x11d4,{0xA0,0xB7,0x00,0x01,0x02,0xA9,0x80,0xB1}} */

#pragma code_seg(".orpc")
static const unsigned short IOPCBatchServer2_FormatStringOffsetTable[] =
    {
    82
    };

static const MIDL_STUBLESS_PROXY_INFO IOPCBatchServer2_ProxyInfo =
    {
    &Object_StubDesc,
    opcbc__MIDL_ProcFormatString.Format,
    &IOPCBatchServer2_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IOPCBatchServer2_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    opcbc__MIDL_ProcFormatString.Format,
    &IOPCBatchServer2_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(4) _IOPCBatchServer2ProxyVtbl = 
{
    &IOPCBatchServer2_ProxyInfo,
    &IID_IOPCBatchServer2,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IOPCBatchServer2::CreateFilteredEnumerator */
};

const CInterfaceStubVtbl _IOPCBatchServer2StubVtbl =
{
    &IID_IOPCBatchServer2,
    &IOPCBatchServer2_ServerInfo,
    4,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IEnumOPCBatchSummary, ver. 0.0,
   GUID={0xa8080da2,0xe23e,0x11d2,{0xaf,0xa7,0x00,0xc0,0x4f,0x53,0x94,0x21}} */

#pragma code_seg(".orpc")
static const unsigned short IEnumOPCBatchSummary_FormatStringOffsetTable[] =
    {
    138,
    188,
    226,
    258,
    296
    };

static const MIDL_STUBLESS_PROXY_INFO IEnumOPCBatchSummary_ProxyInfo =
    {
    &Object_StubDesc,
    opcbc__MIDL_ProcFormatString.Format,
    &IEnumOPCBatchSummary_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IEnumOPCBatchSummary_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    opcbc__MIDL_ProcFormatString.Format,
    &IEnumOPCBatchSummary_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(8) _IEnumOPCBatchSummaryProxyVtbl = 
{
    &IEnumOPCBatchSummary_ProxyInfo,
    &IID_IEnumOPCBatchSummary,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IEnumOPCBatchSummary::Next */ ,
    (void *) (INT_PTR) -1 /* IEnumOPCBatchSummary::Skip */ ,
    (void *) (INT_PTR) -1 /* IEnumOPCBatchSummary::Reset */ ,
    (void *) (INT_PTR) -1 /* IEnumOPCBatchSummary::Clone */ ,
    (void *) (INT_PTR) -1 /* IEnumOPCBatchSummary::Count */
};

const CInterfaceStubVtbl _IEnumOPCBatchSummaryStubVtbl =
{
    &IID_IEnumOPCBatchSummary,
    &IEnumOPCBatchSummary_ServerInfo,
    8,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IOPCEnumerationSets, ver. 0.0,
   GUID={0xa8080da3,0xe23e,0x11d2,{0xaf,0xa7,0x00,0xc0,0x4f,0x53,0x94,0x21}} */

#pragma code_seg(".orpc")
static const unsigned short IOPCEnumerationSets_FormatStringOffsetTable[] =
    {
    334,
    384,
    434
    };

static const MIDL_STUBLESS_PROXY_INFO IOPCEnumerationSets_ProxyInfo =
    {
    &Object_StubDesc,
    opcbc__MIDL_ProcFormatString.Format,
    &IOPCEnumerationSets_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IOPCEnumerationSets_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    opcbc__MIDL_ProcFormatString.Format,
    &IOPCEnumerationSets_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(6) _IOPCEnumerationSetsProxyVtbl = 
{
    &IOPCEnumerationSets_ProxyInfo,
    &IID_IOPCEnumerationSets,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IOPCEnumerationSets::QueryEnumerationSets */ ,
    (void *) (INT_PTR) -1 /* IOPCEnumerationSets::QueryEnumeration */ ,
    (void *) (INT_PTR) -1 /* IOPCEnumerationSets::QueryEnumerationList */
};

const CInterfaceStubVtbl _IOPCEnumerationSetsStubVtbl =
{
    &IID_IOPCEnumerationSets,
    &IOPCEnumerationSets_ServerInfo,
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
    opcbc__MIDL_TypeFormatString.Format,
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

const CInterfaceProxyVtbl * const _opcbc_ProxyVtblList[] = 
{
    ( CInterfaceProxyVtbl *) &_IOPCBatchServerProxyVtbl,
    ( CInterfaceProxyVtbl *) &_CATID_OPCBatchServer20ProxyVtbl,
    ( CInterfaceProxyVtbl *) &_CATID_OPCBatchServer10ProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IEnumOPCBatchSummaryProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IOPCEnumerationSetsProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IOPCBatchServer2ProxyVtbl,
    0
};

const CInterfaceStubVtbl * const _opcbc_StubVtblList[] = 
{
    ( CInterfaceStubVtbl *) &_IOPCBatchServerStubVtbl,
    ( CInterfaceStubVtbl *) &_CATID_OPCBatchServer20StubVtbl,
    ( CInterfaceStubVtbl *) &_CATID_OPCBatchServer10StubVtbl,
    ( CInterfaceStubVtbl *) &_IEnumOPCBatchSummaryStubVtbl,
    ( CInterfaceStubVtbl *) &_IOPCEnumerationSetsStubVtbl,
    ( CInterfaceStubVtbl *) &_IOPCBatchServer2StubVtbl,
    0
};

PCInterfaceName const _opcbc_InterfaceNamesList[] = 
{
    "IOPCBatchServer",
    "CATID_OPCBatchServer20",
    "CATID_OPCBatchServer10",
    "IEnumOPCBatchSummary",
    "IOPCEnumerationSets",
    "IOPCBatchServer2",
    0
};


#define _opcbc_CHECK_IID(n)	IID_GENERIC_CHECK_IID( _opcbc, pIID, n)

int __stdcall _opcbc_IID_Lookup( const IID * pIID, int * pIndex )
{
    IID_BS_LOOKUP_SETUP

    IID_BS_LOOKUP_INITIAL_TEST( _opcbc, 6, 4 )
    IID_BS_LOOKUP_NEXT_TEST( _opcbc, 2 )
    IID_BS_LOOKUP_NEXT_TEST( _opcbc, 1 )
    IID_BS_LOOKUP_RETURN_RESULT( _opcbc, 6, *pIndex )
    
}

const ExtendedProxyFileInfo opcbc_ProxyFileInfo = 
{
    (PCInterfaceProxyVtblList *) & _opcbc_ProxyVtblList,
    (PCInterfaceStubVtblList *) & _opcbc_StubVtblList,
    (const PCInterfaceName * ) & _opcbc_InterfaceNamesList,
    0, /* no delegation */
    & _opcbc_IID_Lookup, 
    6,
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

