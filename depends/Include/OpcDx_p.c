

/* this ALWAYS GENERATED file contains the proxy stub code */


 /* File created by MIDL compiler version 8.00.0603 */
/* at Sat May 07 19:15:44 2016
 */
/* Compiler settings for OpcDx.idl:
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


#include "OpcDx.h"

#define TYPE_FORMAT_STRING_SIZE   1529                              
#define PROC_FORMAT_STRING_SIZE   685                               
#define EXPR_FORMAT_STRING_SIZE   1                                 
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   1            

typedef struct _OpcDx_MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } OpcDx_MIDL_TYPE_FORMAT_STRING;

typedef struct _OpcDx_MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } OpcDx_MIDL_PROC_FORMAT_STRING;

typedef struct _OpcDx_MIDL_EXPR_FORMAT_STRING
    {
    long          Pad;
    unsigned char  Format[ EXPR_FORMAT_STRING_SIZE ];
    } OpcDx_MIDL_EXPR_FORMAT_STRING;


static const RPC_SYNTAX_IDENTIFIER  _RpcTransferSyntax = 
{{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}};


extern const OpcDx_MIDL_TYPE_FORMAT_STRING OpcDx__MIDL_TypeFormatString;
extern const OpcDx_MIDL_PROC_FORMAT_STRING OpcDx__MIDL_ProcFormatString;
extern const OpcDx_MIDL_EXPR_FORMAT_STRING OpcDx__MIDL_ExprFormatString;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO CATID_OPCDXServer10_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO CATID_OPCDXServer10_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IOPCConfiguration_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IOPCConfiguration_ProxyInfo;


extern const USER_MARSHAL_ROUTINE_QUADRUPLE UserMarshalRoutines[ WIRE_MARSHAL_TABLE_SIZE ];

#if !defined(__RPC_WIN64__)
#error  Invalid build platform for this stub.
#endif

static const OpcDx_MIDL_PROC_FORMAT_STRING OpcDx__MIDL_ProcFormatString =
    {
        0,
        {

	/* Procedure GetServers */

			0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/*  2 */	NdrFcLong( 0x0 ),	/* 0 */
/*  6 */	NdrFcShort( 0x3 ),	/* 3 */
/*  8 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 10 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12 */	NdrFcShort( 0x24 ),	/* 36 */
/* 14 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 16 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 18 */	NdrFcShort( 0x1 ),	/* 1 */
/* 20 */	NdrFcShort( 0x0 ),	/* 0 */
/* 22 */	NdrFcShort( 0x0 ),	/* 0 */
/* 24 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pdwCount */

/* 26 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 28 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 30 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppServers */

/* 32 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 34 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 36 */	NdrFcShort( 0x6 ),	/* Type Offset=6 */

	/* Return value */

/* 38 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 40 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 42 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure AddServers */

/* 44 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 46 */	NdrFcLong( 0x0 ),	/* 0 */
/* 50 */	NdrFcShort( 0x4 ),	/* 4 */
/* 52 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 54 */	NdrFcShort( 0x8 ),	/* 8 */
/* 56 */	NdrFcShort( 0x8 ),	/* 8 */
/* 58 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 60 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 62 */	NdrFcShort( 0x1 ),	/* 1 */
/* 64 */	NdrFcShort( 0x1 ),	/* 1 */
/* 66 */	NdrFcShort( 0x0 ),	/* 0 */
/* 68 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dwCount */

/* 70 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 72 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 74 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pServers */

/* 76 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 78 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 80 */	NdrFcShort( 0x58 ),	/* Type Offset=88 */

	/* Parameter pResponse */

/* 82 */	NdrFcShort( 0x8113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=32 */
/* 84 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 86 */	NdrFcShort( 0xa2 ),	/* Type Offset=162 */

	/* Return value */

/* 88 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 90 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 92 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ModifyServers */

/* 94 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 96 */	NdrFcLong( 0x0 ),	/* 0 */
/* 100 */	NdrFcShort( 0x5 ),	/* 5 */
/* 102 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 104 */	NdrFcShort( 0x8 ),	/* 8 */
/* 106 */	NdrFcShort( 0x8 ),	/* 8 */
/* 108 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 110 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 112 */	NdrFcShort( 0x1 ),	/* 1 */
/* 114 */	NdrFcShort( 0x1 ),	/* 1 */
/* 116 */	NdrFcShort( 0x0 ),	/* 0 */
/* 118 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dwCount */

/* 120 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 122 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 124 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pServers */

/* 126 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 128 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 130 */	NdrFcShort( 0x58 ),	/* Type Offset=88 */

	/* Parameter pResponse */

/* 132 */	NdrFcShort( 0x8113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=32 */
/* 134 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 136 */	NdrFcShort( 0xa2 ),	/* Type Offset=162 */

	/* Return value */

/* 138 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 140 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 142 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DeleteServers */

/* 144 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 146 */	NdrFcLong( 0x0 ),	/* 0 */
/* 150 */	NdrFcShort( 0x6 ),	/* 6 */
/* 152 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 154 */	NdrFcShort( 0x8 ),	/* 8 */
/* 156 */	NdrFcShort( 0x8 ),	/* 8 */
/* 158 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 160 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 162 */	NdrFcShort( 0x1 ),	/* 1 */
/* 164 */	NdrFcShort( 0x1 ),	/* 1 */
/* 166 */	NdrFcShort( 0x0 ),	/* 0 */
/* 168 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dwCount */

/* 170 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 172 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 174 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pServers */

/* 176 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 178 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 180 */	NdrFcShort( 0xd8 ),	/* Type Offset=216 */

	/* Parameter pResponse */

/* 182 */	NdrFcShort( 0x8113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=32 */
/* 184 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 186 */	NdrFcShort( 0xa2 ),	/* Type Offset=162 */

	/* Return value */

/* 188 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 190 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 192 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CopyDefaultServerAttributes */

/* 194 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 196 */	NdrFcLong( 0x0 ),	/* 0 */
/* 200 */	NdrFcShort( 0x7 ),	/* 7 */
/* 202 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 204 */	NdrFcShort( 0x10 ),	/* 16 */
/* 206 */	NdrFcShort( 0x8 ),	/* 8 */
/* 208 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 210 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 212 */	NdrFcShort( 0x1 ),	/* 1 */
/* 214 */	NdrFcShort( 0x1 ),	/* 1 */
/* 216 */	NdrFcShort( 0x0 ),	/* 0 */
/* 218 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bConfigToStatus */

/* 220 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 222 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 224 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter dwCount */

/* 226 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 228 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 230 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pServers */

/* 232 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 234 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 236 */	NdrFcShort( 0xf2 ),	/* Type Offset=242 */

	/* Parameter pResponse */

/* 238 */	NdrFcShort( 0x8113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=32 */
/* 240 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 242 */	NdrFcShort( 0xa2 ),	/* Type Offset=162 */

	/* Return value */

/* 244 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 246 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 248 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure QueryDXConnections */

/* 250 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 252 */	NdrFcLong( 0x0 ),	/* 0 */
/* 256 */	NdrFcShort( 0x8 ),	/* 8 */
/* 258 */	NdrFcShort( 0x48 ),	/* X64 Stack size/offset = 72 */
/* 260 */	NdrFcShort( 0x10 ),	/* 16 */
/* 262 */	NdrFcShort( 0x24 ),	/* 36 */
/* 264 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x8,		/* 8 */
/* 266 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 268 */	NdrFcShort( 0x1 ),	/* 1 */
/* 270 */	NdrFcShort( 0x1 ),	/* 1 */
/* 272 */	NdrFcShort( 0x0 ),	/* 0 */
/* 274 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter szBrowsePath */

/* 276 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 278 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 280 */	NdrFcShort( 0x10a ),	/* Type Offset=266 */

	/* Parameter dwNoOfMasks */

/* 282 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 284 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 286 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pDXConnectionMasks */

/* 288 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 290 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 292 */	NdrFcShort( 0x55c ),	/* Type Offset=1372 */

	/* Parameter bRecursive */

/* 294 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 296 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 298 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppErrors */

/* 300 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 302 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 304 */	NdrFcShort( 0x572 ),	/* Type Offset=1394 */

	/* Parameter pdwCount */

/* 306 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 308 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 310 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppConnections */

/* 312 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 314 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 316 */	NdrFcShort( 0x586 ),	/* Type Offset=1414 */

	/* Return value */

/* 318 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 320 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 322 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure AddDXConnections */

/* 324 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 326 */	NdrFcLong( 0x0 ),	/* 0 */
/* 330 */	NdrFcShort( 0x9 ),	/* 9 */
/* 332 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 334 */	NdrFcShort( 0x8 ),	/* 8 */
/* 336 */	NdrFcShort( 0x8 ),	/* 8 */
/* 338 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 340 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 342 */	NdrFcShort( 0x1 ),	/* 1 */
/* 344 */	NdrFcShort( 0x1 ),	/* 1 */
/* 346 */	NdrFcShort( 0x0 ),	/* 0 */
/* 348 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dwCount */

/* 350 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 352 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 354 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pConnections */

/* 356 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 358 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 360 */	NdrFcShort( 0x5a8 ),	/* Type Offset=1448 */

	/* Parameter pResponse */

/* 362 */	NdrFcShort( 0x8113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=32 */
/* 364 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 366 */	NdrFcShort( 0xa2 ),	/* Type Offset=162 */

	/* Return value */

/* 368 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 370 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 372 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure UpdateDXConnections */

/* 374 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 376 */	NdrFcLong( 0x0 ),	/* 0 */
/* 380 */	NdrFcShort( 0xa ),	/* 10 */
/* 382 */	NdrFcShort( 0x48 ),	/* X64 Stack size/offset = 72 */
/* 384 */	NdrFcShort( 0x10 ),	/* 16 */
/* 386 */	NdrFcShort( 0x8 ),	/* 8 */
/* 388 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x8,		/* 8 */
/* 390 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 392 */	NdrFcShort( 0x1 ),	/* 1 */
/* 394 */	NdrFcShort( 0x1 ),	/* 1 */
/* 396 */	NdrFcShort( 0x0 ),	/* 0 */
/* 398 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter szBrowsePath */

/* 400 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 402 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 404 */	NdrFcShort( 0x10a ),	/* Type Offset=266 */

	/* Parameter dwNoOfMasks */

/* 406 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 408 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 410 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pDXConnectionMasks */

/* 412 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 414 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 416 */	NdrFcShort( 0x55c ),	/* Type Offset=1372 */

	/* Parameter bRecursive */

/* 418 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 420 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 422 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pDXConnectionDefinition */

/* 424 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 426 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 428 */	NdrFcShort( 0x4fc ),	/* Type Offset=1276 */

	/* Parameter ppErrors */

/* 430 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 432 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 434 */	NdrFcShort( 0x572 ),	/* Type Offset=1394 */

	/* Parameter pResponse */

/* 436 */	NdrFcShort( 0x8113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=32 */
/* 438 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 440 */	NdrFcShort( 0xa2 ),	/* Type Offset=162 */

	/* Return value */

/* 442 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 444 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 446 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ModifyDXConnections */

/* 448 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 450 */	NdrFcLong( 0x0 ),	/* 0 */
/* 454 */	NdrFcShort( 0xb ),	/* 11 */
/* 456 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 458 */	NdrFcShort( 0x8 ),	/* 8 */
/* 460 */	NdrFcShort( 0x8 ),	/* 8 */
/* 462 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 464 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 466 */	NdrFcShort( 0x1 ),	/* 1 */
/* 468 */	NdrFcShort( 0x1 ),	/* 1 */
/* 470 */	NdrFcShort( 0x0 ),	/* 0 */
/* 472 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dwCount */

/* 474 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 476 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 478 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pDXConnectionDefinitions */

/* 480 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 482 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 484 */	NdrFcShort( 0x5a8 ),	/* Type Offset=1448 */

	/* Parameter pResponse */

/* 486 */	NdrFcShort( 0x8113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=32 */
/* 488 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 490 */	NdrFcShort( 0xa2 ),	/* Type Offset=162 */

	/* Return value */

/* 492 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 494 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 496 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DeleteDXConnections */

/* 498 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 500 */	NdrFcLong( 0x0 ),	/* 0 */
/* 504 */	NdrFcShort( 0xc ),	/* 12 */
/* 506 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 508 */	NdrFcShort( 0x10 ),	/* 16 */
/* 510 */	NdrFcShort( 0x8 ),	/* 8 */
/* 512 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 514 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 516 */	NdrFcShort( 0x1 ),	/* 1 */
/* 518 */	NdrFcShort( 0x1 ),	/* 1 */
/* 520 */	NdrFcShort( 0x0 ),	/* 0 */
/* 522 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter szBrowsePath */

/* 524 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 526 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 528 */	NdrFcShort( 0x10a ),	/* Type Offset=266 */

	/* Parameter dwNoOfMasks */

/* 530 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 532 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 534 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pDXConnectionMasks */

/* 536 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 538 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 540 */	NdrFcShort( 0x55c ),	/* Type Offset=1372 */

	/* Parameter bRecursive */

/* 542 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 544 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 546 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppErrors */

/* 548 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 550 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 552 */	NdrFcShort( 0x572 ),	/* Type Offset=1394 */

	/* Parameter pResponse */

/* 554 */	NdrFcShort( 0x8113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=32 */
/* 556 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 558 */	NdrFcShort( 0xa2 ),	/* Type Offset=162 */

	/* Return value */

/* 560 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 562 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 564 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CopyDXConnectionDefaultAttributes */

/* 566 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 568 */	NdrFcLong( 0x0 ),	/* 0 */
/* 572 */	NdrFcShort( 0xd ),	/* 13 */
/* 574 */	NdrFcShort( 0x48 ),	/* X64 Stack size/offset = 72 */
/* 576 */	NdrFcShort( 0x18 ),	/* 24 */
/* 578 */	NdrFcShort( 0x8 ),	/* 8 */
/* 580 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x8,		/* 8 */
/* 582 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 584 */	NdrFcShort( 0x1 ),	/* 1 */
/* 586 */	NdrFcShort( 0x1 ),	/* 1 */
/* 588 */	NdrFcShort( 0x0 ),	/* 0 */
/* 590 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bConfigToStatus */

/* 592 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 594 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 596 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter szBrowsePath */

/* 598 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 600 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 602 */	NdrFcShort( 0x10a ),	/* Type Offset=266 */

	/* Parameter dwNoOfMasks */

/* 604 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 606 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 608 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pDXConnectionMasks */

/* 610 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 612 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 614 */	NdrFcShort( 0x5c6 ),	/* Type Offset=1478 */

	/* Parameter bRecursive */

/* 616 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 618 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 620 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppErrors */

/* 622 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 624 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 626 */	NdrFcShort( 0x5dc ),	/* Type Offset=1500 */

	/* Parameter pResponse */

/* 628 */	NdrFcShort( 0x8113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=32 */
/* 630 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 632 */	NdrFcShort( 0xa2 ),	/* Type Offset=162 */

	/* Return value */

/* 634 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 636 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 638 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ResetConfiguration */

/* 640 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 642 */	NdrFcLong( 0x0 ),	/* 0 */
/* 646 */	NdrFcShort( 0xe ),	/* 14 */
/* 648 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 650 */	NdrFcShort( 0x0 ),	/* 0 */
/* 652 */	NdrFcShort( 0x8 ),	/* 8 */
/* 654 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 656 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 658 */	NdrFcShort( 0x0 ),	/* 0 */
/* 660 */	NdrFcShort( 0x0 ),	/* 0 */
/* 662 */	NdrFcShort( 0x0 ),	/* 0 */
/* 664 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter szConfigurationVersion */

/* 666 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 668 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 670 */	NdrFcShort( 0x10a ),	/* Type Offset=266 */

	/* Parameter pszConfigurationVersion */

/* 672 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 674 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 676 */	NdrFcShort( 0x5f0 ),	/* Type Offset=1520 */

	/* Return value */

/* 678 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 680 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 682 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

			0x0
        }
    };

static const OpcDx_MIDL_TYPE_FORMAT_STRING OpcDx__MIDL_TypeFormatString =
    {
        0,
        {
			NdrFcShort( 0x0 ),	/* 0 */
/*  2 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/*  4 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/*  6 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/*  8 */	NdrFcShort( 0x2 ),	/* Offset= 2 (10) */
/* 10 */	
			0x13, 0x0,	/* FC_OP */
/* 12 */	NdrFcShort( 0x32 ),	/* Offset= 50 (62) */
/* 14 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 16 */	NdrFcShort( 0x48 ),	/* 72 */
/* 18 */	NdrFcShort( 0x0 ),	/* 0 */
/* 20 */	NdrFcShort( 0xe ),	/* Offset= 14 (34) */
/* 22 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 24 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 26 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 28 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 30 */	0x36,		/* FC_POINTER */
			0x8,		/* FC_LONG */
/* 32 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 34 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 36 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 38 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 40 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 42 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 44 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 46 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 48 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 50 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 52 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 54 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 56 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 58 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 60 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 62 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 64 */	NdrFcShort( 0x0 ),	/* 0 */
/* 66 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x54,		/* FC_DEREFERENCE */
/* 68 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 70 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 72 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 76 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 78 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 80 */	NdrFcShort( 0xffbe ),	/* Offset= -66 (14) */
/* 82 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 84 */	
			0x11, 0x0,	/* FC_RP */
/* 86 */	NdrFcShort( 0x2 ),	/* Offset= 2 (88) */
/* 88 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 90 */	NdrFcShort( 0x0 ),	/* 0 */
/* 92 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 94 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 96 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 98 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 102 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 104 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 106 */	NdrFcShort( 0xffa4 ),	/* Offset= -92 (14) */
/* 108 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 110 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 112 */	NdrFcShort( 0x32 ),	/* Offset= 50 (162) */
/* 114 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 116 */	NdrFcShort( 0x20 ),	/* 32 */
/* 118 */	NdrFcShort( 0x0 ),	/* 0 */
/* 120 */	NdrFcShort( 0x8 ),	/* Offset= 8 (128) */
/* 122 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 124 */	0x36,		/* FC_POINTER */
			0x8,		/* FC_LONG */
/* 126 */	0x40,		/* FC_STRUCTPAD4 */
			0x5b,		/* FC_END */
/* 128 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 130 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 132 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 134 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 136 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 138 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 140 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 142 */	NdrFcShort( 0x0 ),	/* 0 */
/* 144 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 146 */	NdrFcShort( 0x8 ),	/* 8 */
/* 148 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 150 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 154 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 156 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 158 */	NdrFcShort( 0xffd4 ),	/* Offset= -44 (114) */
/* 160 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 162 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 164 */	NdrFcShort( 0x20 ),	/* 32 */
/* 166 */	NdrFcShort( 0x0 ),	/* 0 */
/* 168 */	NdrFcShort( 0xa ),	/* Offset= 10 (178) */
/* 170 */	0x36,		/* FC_POINTER */
			0x8,		/* FC_LONG */
/* 172 */	0x40,		/* FC_STRUCTPAD4 */
			0x36,		/* FC_POINTER */
/* 174 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 176 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 178 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 180 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 182 */	
			0x13, 0x0,	/* FC_OP */
/* 184 */	NdrFcShort( 0xffd4 ),	/* Offset= -44 (140) */
/* 186 */	
			0x11, 0x0,	/* FC_RP */
/* 188 */	NdrFcShort( 0x1c ),	/* Offset= 28 (216) */
/* 190 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 192 */	NdrFcShort( 0x20 ),	/* 32 */
/* 194 */	NdrFcShort( 0x0 ),	/* 0 */
/* 196 */	NdrFcShort( 0x8 ),	/* Offset= 8 (204) */
/* 198 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 200 */	0x36,		/* FC_POINTER */
			0x8,		/* FC_LONG */
/* 202 */	0x40,		/* FC_STRUCTPAD4 */
			0x5b,		/* FC_END */
/* 204 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 206 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 208 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 210 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 212 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 214 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 216 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 218 */	NdrFcShort( 0x0 ),	/* 0 */
/* 220 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 222 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 224 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 226 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 230 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 232 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 234 */	NdrFcShort( 0xffd4 ),	/* Offset= -44 (190) */
/* 236 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 238 */	
			0x11, 0x0,	/* FC_RP */
/* 240 */	NdrFcShort( 0x2 ),	/* Offset= 2 (242) */
/* 242 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 244 */	NdrFcShort( 0x0 ),	/* 0 */
/* 246 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 248 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 250 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 252 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 256 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 258 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 260 */	NdrFcShort( 0xffba ),	/* Offset= -70 (190) */
/* 262 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 264 */	
			0x11, 0x8,	/* FC_RP [simple_pointer] */
/* 266 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 268 */	
			0x11, 0x0,	/* FC_RP */
/* 270 */	NdrFcShort( 0x44e ),	/* Offset= 1102 (1372) */
/* 272 */	
			0x12, 0x0,	/* FC_UP */
/* 274 */	NdrFcShort( 0x3b6 ),	/* Offset= 950 (1224) */
/* 276 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 278 */	0x7,		/* Corr desc: FC_USHORT */
			0x0,		/*  */
/* 280 */	NdrFcShort( 0xfff8 ),	/* -8 */
/* 282 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 284 */	NdrFcShort( 0x2 ),	/* Offset= 2 (286) */
/* 286 */	NdrFcShort( 0x10 ),	/* 16 */
/* 288 */	NdrFcShort( 0x2f ),	/* 47 */
/* 290 */	NdrFcLong( 0x14 ),	/* 20 */
/* 294 */	NdrFcShort( 0x800b ),	/* Simple arm type: FC_HYPER */
/* 296 */	NdrFcLong( 0x3 ),	/* 3 */
/* 300 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 302 */	NdrFcLong( 0x11 ),	/* 17 */
/* 306 */	NdrFcShort( 0x8001 ),	/* Simple arm type: FC_BYTE */
/* 308 */	NdrFcLong( 0x2 ),	/* 2 */
/* 312 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 314 */	NdrFcLong( 0x4 ),	/* 4 */
/* 318 */	NdrFcShort( 0x800a ),	/* Simple arm type: FC_FLOAT */
/* 320 */	NdrFcLong( 0x5 ),	/* 5 */
/* 324 */	NdrFcShort( 0x800c ),	/* Simple arm type: FC_DOUBLE */
/* 326 */	NdrFcLong( 0xb ),	/* 11 */
/* 330 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 332 */	NdrFcLong( 0xa ),	/* 10 */
/* 336 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 338 */	NdrFcLong( 0x6 ),	/* 6 */
/* 342 */	NdrFcShort( 0xe8 ),	/* Offset= 232 (574) */
/* 344 */	NdrFcLong( 0x7 ),	/* 7 */
/* 348 */	NdrFcShort( 0x800c ),	/* Simple arm type: FC_DOUBLE */
/* 350 */	NdrFcLong( 0x8 ),	/* 8 */
/* 354 */	NdrFcShort( 0xe2 ),	/* Offset= 226 (580) */
/* 356 */	NdrFcLong( 0xd ),	/* 13 */
/* 360 */	NdrFcShort( 0xf6 ),	/* Offset= 246 (606) */
/* 362 */	NdrFcLong( 0x9 ),	/* 9 */
/* 366 */	NdrFcShort( 0x102 ),	/* Offset= 258 (624) */
/* 368 */	NdrFcLong( 0x2000 ),	/* 8192 */
/* 372 */	NdrFcShort( 0x10e ),	/* Offset= 270 (642) */
/* 374 */	NdrFcLong( 0x24 ),	/* 36 */
/* 378 */	NdrFcShort( 0x304 ),	/* Offset= 772 (1150) */
/* 380 */	NdrFcLong( 0x4024 ),	/* 16420 */
/* 384 */	NdrFcShort( 0x2fe ),	/* Offset= 766 (1150) */
/* 386 */	NdrFcLong( 0x4011 ),	/* 16401 */
/* 390 */	NdrFcShort( 0x2fc ),	/* Offset= 764 (1154) */
/* 392 */	NdrFcLong( 0x4002 ),	/* 16386 */
/* 396 */	NdrFcShort( 0x2fa ),	/* Offset= 762 (1158) */
/* 398 */	NdrFcLong( 0x4003 ),	/* 16387 */
/* 402 */	NdrFcShort( 0x2f8 ),	/* Offset= 760 (1162) */
/* 404 */	NdrFcLong( 0x4014 ),	/* 16404 */
/* 408 */	NdrFcShort( 0x2f6 ),	/* Offset= 758 (1166) */
/* 410 */	NdrFcLong( 0x4004 ),	/* 16388 */
/* 414 */	NdrFcShort( 0x2f4 ),	/* Offset= 756 (1170) */
/* 416 */	NdrFcLong( 0x4005 ),	/* 16389 */
/* 420 */	NdrFcShort( 0x2f2 ),	/* Offset= 754 (1174) */
/* 422 */	NdrFcLong( 0x400b ),	/* 16395 */
/* 426 */	NdrFcShort( 0x2dc ),	/* Offset= 732 (1158) */
/* 428 */	NdrFcLong( 0x400a ),	/* 16394 */
/* 432 */	NdrFcShort( 0x2da ),	/* Offset= 730 (1162) */
/* 434 */	NdrFcLong( 0x4006 ),	/* 16390 */
/* 438 */	NdrFcShort( 0x2e4 ),	/* Offset= 740 (1178) */
/* 440 */	NdrFcLong( 0x4007 ),	/* 16391 */
/* 444 */	NdrFcShort( 0x2da ),	/* Offset= 730 (1174) */
/* 446 */	NdrFcLong( 0x4008 ),	/* 16392 */
/* 450 */	NdrFcShort( 0x2dc ),	/* Offset= 732 (1182) */
/* 452 */	NdrFcLong( 0x400d ),	/* 16397 */
/* 456 */	NdrFcShort( 0x2da ),	/* Offset= 730 (1186) */
/* 458 */	NdrFcLong( 0x4009 ),	/* 16393 */
/* 462 */	NdrFcShort( 0x2d8 ),	/* Offset= 728 (1190) */
/* 464 */	NdrFcLong( 0x6000 ),	/* 24576 */
/* 468 */	NdrFcShort( 0x2d6 ),	/* Offset= 726 (1194) */
/* 470 */	NdrFcLong( 0x400c ),	/* 16396 */
/* 474 */	NdrFcShort( 0x2d4 ),	/* Offset= 724 (1198) */
/* 476 */	NdrFcLong( 0x10 ),	/* 16 */
/* 480 */	NdrFcShort( 0x8002 ),	/* Simple arm type: FC_CHAR */
/* 482 */	NdrFcLong( 0x12 ),	/* 18 */
/* 486 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 488 */	NdrFcLong( 0x13 ),	/* 19 */
/* 492 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 494 */	NdrFcLong( 0x15 ),	/* 21 */
/* 498 */	NdrFcShort( 0x800b ),	/* Simple arm type: FC_HYPER */
/* 500 */	NdrFcLong( 0x16 ),	/* 22 */
/* 504 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 506 */	NdrFcLong( 0x17 ),	/* 23 */
/* 510 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 512 */	NdrFcLong( 0xe ),	/* 14 */
/* 516 */	NdrFcShort( 0x2b2 ),	/* Offset= 690 (1206) */
/* 518 */	NdrFcLong( 0x400e ),	/* 16398 */
/* 522 */	NdrFcShort( 0x2b6 ),	/* Offset= 694 (1216) */
/* 524 */	NdrFcLong( 0x4010 ),	/* 16400 */
/* 528 */	NdrFcShort( 0x2b4 ),	/* Offset= 692 (1220) */
/* 530 */	NdrFcLong( 0x4012 ),	/* 16402 */
/* 534 */	NdrFcShort( 0x270 ),	/* Offset= 624 (1158) */
/* 536 */	NdrFcLong( 0x4013 ),	/* 16403 */
/* 540 */	NdrFcShort( 0x26e ),	/* Offset= 622 (1162) */
/* 542 */	NdrFcLong( 0x4015 ),	/* 16405 */
/* 546 */	NdrFcShort( 0x26c ),	/* Offset= 620 (1166) */
/* 548 */	NdrFcLong( 0x4016 ),	/* 16406 */
/* 552 */	NdrFcShort( 0x262 ),	/* Offset= 610 (1162) */
/* 554 */	NdrFcLong( 0x4017 ),	/* 16407 */
/* 558 */	NdrFcShort( 0x25c ),	/* Offset= 604 (1162) */
/* 560 */	NdrFcLong( 0x0 ),	/* 0 */
/* 564 */	NdrFcShort( 0x0 ),	/* Offset= 0 (564) */
/* 566 */	NdrFcLong( 0x1 ),	/* 1 */
/* 570 */	NdrFcShort( 0x0 ),	/* Offset= 0 (570) */
/* 572 */	NdrFcShort( 0xffff ),	/* Offset= -1 (571) */
/* 574 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 576 */	NdrFcShort( 0x8 ),	/* 8 */
/* 578 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 580 */	
			0x12, 0x0,	/* FC_UP */
/* 582 */	NdrFcShort( 0xe ),	/* Offset= 14 (596) */
/* 584 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 586 */	NdrFcShort( 0x2 ),	/* 2 */
/* 588 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 590 */	NdrFcShort( 0xfffc ),	/* -4 */
/* 592 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 594 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 596 */	
			0x17,		/* FC_CSTRUCT */
			0x3,		/* 3 */
/* 598 */	NdrFcShort( 0x8 ),	/* 8 */
/* 600 */	NdrFcShort( 0xfff0 ),	/* Offset= -16 (584) */
/* 602 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 604 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 606 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 608 */	NdrFcLong( 0x0 ),	/* 0 */
/* 612 */	NdrFcShort( 0x0 ),	/* 0 */
/* 614 */	NdrFcShort( 0x0 ),	/* 0 */
/* 616 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 618 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 620 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 622 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 624 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 626 */	NdrFcLong( 0x20400 ),	/* 132096 */
/* 630 */	NdrFcShort( 0x0 ),	/* 0 */
/* 632 */	NdrFcShort( 0x0 ),	/* 0 */
/* 634 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 636 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 638 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 640 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 642 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 644 */	NdrFcShort( 0x2 ),	/* Offset= 2 (646) */
/* 646 */	
			0x12, 0x0,	/* FC_UP */
/* 648 */	NdrFcShort( 0x1e4 ),	/* Offset= 484 (1132) */
/* 650 */	
			0x2a,		/* FC_ENCAPSULATED_UNION */
			0x89,		/* 137 */
/* 652 */	NdrFcShort( 0x20 ),	/* 32 */
/* 654 */	NdrFcShort( 0xa ),	/* 10 */
/* 656 */	NdrFcLong( 0x8 ),	/* 8 */
/* 660 */	NdrFcShort( 0x50 ),	/* Offset= 80 (740) */
/* 662 */	NdrFcLong( 0xd ),	/* 13 */
/* 666 */	NdrFcShort( 0x70 ),	/* Offset= 112 (778) */
/* 668 */	NdrFcLong( 0x9 ),	/* 9 */
/* 672 */	NdrFcShort( 0x90 ),	/* Offset= 144 (816) */
/* 674 */	NdrFcLong( 0xc ),	/* 12 */
/* 678 */	NdrFcShort( 0xb0 ),	/* Offset= 176 (854) */
/* 680 */	NdrFcLong( 0x24 ),	/* 36 */
/* 684 */	NdrFcShort( 0x102 ),	/* Offset= 258 (942) */
/* 686 */	NdrFcLong( 0x800d ),	/* 32781 */
/* 690 */	NdrFcShort( 0x11e ),	/* Offset= 286 (976) */
/* 692 */	NdrFcLong( 0x10 ),	/* 16 */
/* 696 */	NdrFcShort( 0x138 ),	/* Offset= 312 (1008) */
/* 698 */	NdrFcLong( 0x2 ),	/* 2 */
/* 702 */	NdrFcShort( 0x14e ),	/* Offset= 334 (1036) */
/* 704 */	NdrFcLong( 0x3 ),	/* 3 */
/* 708 */	NdrFcShort( 0x164 ),	/* Offset= 356 (1064) */
/* 710 */	NdrFcLong( 0x14 ),	/* 20 */
/* 714 */	NdrFcShort( 0x17a ),	/* Offset= 378 (1092) */
/* 716 */	NdrFcShort( 0xffff ),	/* Offset= -1 (715) */
/* 718 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 720 */	NdrFcShort( 0x0 ),	/* 0 */
/* 722 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 724 */	NdrFcShort( 0x0 ),	/* 0 */
/* 726 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 728 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 732 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 734 */	
			0x12, 0x0,	/* FC_UP */
/* 736 */	NdrFcShort( 0xff74 ),	/* Offset= -140 (596) */
/* 738 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 740 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 742 */	NdrFcShort( 0x10 ),	/* 16 */
/* 744 */	NdrFcShort( 0x0 ),	/* 0 */
/* 746 */	NdrFcShort( 0x6 ),	/* Offset= 6 (752) */
/* 748 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 750 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 752 */	
			0x11, 0x0,	/* FC_RP */
/* 754 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (718) */
/* 756 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 758 */	NdrFcShort( 0x0 ),	/* 0 */
/* 760 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 762 */	NdrFcShort( 0x0 ),	/* 0 */
/* 764 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 766 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 770 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 772 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 774 */	NdrFcShort( 0xff58 ),	/* Offset= -168 (606) */
/* 776 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 778 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 780 */	NdrFcShort( 0x10 ),	/* 16 */
/* 782 */	NdrFcShort( 0x0 ),	/* 0 */
/* 784 */	NdrFcShort( 0x6 ),	/* Offset= 6 (790) */
/* 786 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 788 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 790 */	
			0x11, 0x0,	/* FC_RP */
/* 792 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (756) */
/* 794 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 796 */	NdrFcShort( 0x0 ),	/* 0 */
/* 798 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 800 */	NdrFcShort( 0x0 ),	/* 0 */
/* 802 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 804 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 808 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 810 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 812 */	NdrFcShort( 0xff44 ),	/* Offset= -188 (624) */
/* 814 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 816 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 818 */	NdrFcShort( 0x10 ),	/* 16 */
/* 820 */	NdrFcShort( 0x0 ),	/* 0 */
/* 822 */	NdrFcShort( 0x6 ),	/* Offset= 6 (828) */
/* 824 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 826 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 828 */	
			0x11, 0x0,	/* FC_RP */
/* 830 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (794) */
/* 832 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 834 */	NdrFcShort( 0x0 ),	/* 0 */
/* 836 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 838 */	NdrFcShort( 0x0 ),	/* 0 */
/* 840 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 842 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 846 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 848 */	
			0x12, 0x0,	/* FC_UP */
/* 850 */	NdrFcShort( 0x176 ),	/* Offset= 374 (1224) */
/* 852 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 854 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 856 */	NdrFcShort( 0x10 ),	/* 16 */
/* 858 */	NdrFcShort( 0x0 ),	/* 0 */
/* 860 */	NdrFcShort( 0x6 ),	/* Offset= 6 (866) */
/* 862 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 864 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 866 */	
			0x11, 0x0,	/* FC_RP */
/* 868 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (832) */
/* 870 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 872 */	NdrFcLong( 0x2f ),	/* 47 */
/* 876 */	NdrFcShort( 0x0 ),	/* 0 */
/* 878 */	NdrFcShort( 0x0 ),	/* 0 */
/* 880 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 882 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 884 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 886 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 888 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 890 */	NdrFcShort( 0x1 ),	/* 1 */
/* 892 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 894 */	NdrFcShort( 0x4 ),	/* 4 */
/* 896 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 898 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 900 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 902 */	NdrFcShort( 0x18 ),	/* 24 */
/* 904 */	NdrFcShort( 0x0 ),	/* 0 */
/* 906 */	NdrFcShort( 0xa ),	/* Offset= 10 (916) */
/* 908 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 910 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 912 */	NdrFcShort( 0xffd6 ),	/* Offset= -42 (870) */
/* 914 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 916 */	
			0x12, 0x0,	/* FC_UP */
/* 918 */	NdrFcShort( 0xffe2 ),	/* Offset= -30 (888) */
/* 920 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 922 */	NdrFcShort( 0x0 ),	/* 0 */
/* 924 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 926 */	NdrFcShort( 0x0 ),	/* 0 */
/* 928 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 930 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 934 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 936 */	
			0x12, 0x0,	/* FC_UP */
/* 938 */	NdrFcShort( 0xffda ),	/* Offset= -38 (900) */
/* 940 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 942 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 944 */	NdrFcShort( 0x10 ),	/* 16 */
/* 946 */	NdrFcShort( 0x0 ),	/* 0 */
/* 948 */	NdrFcShort( 0x6 ),	/* Offset= 6 (954) */
/* 950 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 952 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 954 */	
			0x11, 0x0,	/* FC_RP */
/* 956 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (920) */
/* 958 */	
			0x1d,		/* FC_SMFARRAY */
			0x0,		/* 0 */
/* 960 */	NdrFcShort( 0x8 ),	/* 8 */
/* 962 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 964 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 966 */	NdrFcShort( 0x10 ),	/* 16 */
/* 968 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 970 */	0x6,		/* FC_SHORT */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 972 */	0x0,		/* 0 */
			NdrFcShort( 0xfff1 ),	/* Offset= -15 (958) */
			0x5b,		/* FC_END */
/* 976 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 978 */	NdrFcShort( 0x20 ),	/* 32 */
/* 980 */	NdrFcShort( 0x0 ),	/* 0 */
/* 982 */	NdrFcShort( 0xa ),	/* Offset= 10 (992) */
/* 984 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 986 */	0x36,		/* FC_POINTER */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 988 */	0x0,		/* 0 */
			NdrFcShort( 0xffe7 ),	/* Offset= -25 (964) */
			0x5b,		/* FC_END */
/* 992 */	
			0x11, 0x0,	/* FC_RP */
/* 994 */	NdrFcShort( 0xff12 ),	/* Offset= -238 (756) */
/* 996 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 998 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1000 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1002 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1004 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1006 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 1008 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1010 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1012 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1014 */	NdrFcShort( 0x6 ),	/* Offset= 6 (1020) */
/* 1016 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 1018 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 1020 */	
			0x12, 0x0,	/* FC_UP */
/* 1022 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (996) */
/* 1024 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 1026 */	NdrFcShort( 0x2 ),	/* 2 */
/* 1028 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1030 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1032 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1034 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 1036 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1038 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1040 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1042 */	NdrFcShort( 0x6 ),	/* Offset= 6 (1048) */
/* 1044 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 1046 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 1048 */	
			0x12, 0x0,	/* FC_UP */
/* 1050 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (1024) */
/* 1052 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 1054 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1056 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1058 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1060 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1062 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1064 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1066 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1068 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1070 */	NdrFcShort( 0x6 ),	/* Offset= 6 (1076) */
/* 1072 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 1074 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 1076 */	
			0x12, 0x0,	/* FC_UP */
/* 1078 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (1052) */
/* 1080 */	
			0x1b,		/* FC_CARRAY */
			0x7,		/* 7 */
/* 1082 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1084 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1086 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1088 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1090 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 1092 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1094 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1096 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1098 */	NdrFcShort( 0x6 ),	/* Offset= 6 (1104) */
/* 1100 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 1102 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 1104 */	
			0x12, 0x0,	/* FC_UP */
/* 1106 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (1080) */
/* 1108 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 1110 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1112 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1114 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1116 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 1118 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1120 */	0x7,		/* Corr desc: FC_USHORT */
			0x0,		/*  */
/* 1122 */	NdrFcShort( 0xffc8 ),	/* -56 */
/* 1124 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1126 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1128 */	NdrFcShort( 0xffec ),	/* Offset= -20 (1108) */
/* 1130 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1132 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1134 */	NdrFcShort( 0x38 ),	/* 56 */
/* 1136 */	NdrFcShort( 0xffec ),	/* Offset= -20 (1116) */
/* 1138 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1138) */
/* 1140 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 1142 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1144 */	0x40,		/* FC_STRUCTPAD4 */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1146 */	0x0,		/* 0 */
			NdrFcShort( 0xfe0f ),	/* Offset= -497 (650) */
			0x5b,		/* FC_END */
/* 1150 */	
			0x12, 0x0,	/* FC_UP */
/* 1152 */	NdrFcShort( 0xff04 ),	/* Offset= -252 (900) */
/* 1154 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1156 */	0x1,		/* FC_BYTE */
			0x5c,		/* FC_PAD */
/* 1158 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1160 */	0x6,		/* FC_SHORT */
			0x5c,		/* FC_PAD */
/* 1162 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1164 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 1166 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1168 */	0xb,		/* FC_HYPER */
			0x5c,		/* FC_PAD */
/* 1170 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1172 */	0xa,		/* FC_FLOAT */
			0x5c,		/* FC_PAD */
/* 1174 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1176 */	0xc,		/* FC_DOUBLE */
			0x5c,		/* FC_PAD */
/* 1178 */	
			0x12, 0x0,	/* FC_UP */
/* 1180 */	NdrFcShort( 0xfda2 ),	/* Offset= -606 (574) */
/* 1182 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 1184 */	NdrFcShort( 0xfda4 ),	/* Offset= -604 (580) */
/* 1186 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 1188 */	NdrFcShort( 0xfdba ),	/* Offset= -582 (606) */
/* 1190 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 1192 */	NdrFcShort( 0xfdc8 ),	/* Offset= -568 (624) */
/* 1194 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 1196 */	NdrFcShort( 0xfdd6 ),	/* Offset= -554 (642) */
/* 1198 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 1200 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1202) */
/* 1202 */	
			0x12, 0x0,	/* FC_UP */
/* 1204 */	NdrFcShort( 0x14 ),	/* Offset= 20 (1224) */
/* 1206 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 1208 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1210 */	0x6,		/* FC_SHORT */
			0x1,		/* FC_BYTE */
/* 1212 */	0x1,		/* FC_BYTE */
			0x8,		/* FC_LONG */
/* 1214 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 1216 */	
			0x12, 0x0,	/* FC_UP */
/* 1218 */	NdrFcShort( 0xfff4 ),	/* Offset= -12 (1206) */
/* 1220 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1222 */	0x2,		/* FC_CHAR */
			0x5c,		/* FC_PAD */
/* 1224 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 1226 */	NdrFcShort( 0x20 ),	/* 32 */
/* 1228 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1230 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1230) */
/* 1232 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1234 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 1236 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 1238 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1240 */	NdrFcShort( 0xfc3c ),	/* Offset= -964 (276) */
/* 1242 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1244 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 1246 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1248 */	NdrFcShort( 0x18 ),	/* 24 */
/* 1250 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1252 */	NdrFcShort( 0xfc2c ),	/* Offset= -980 (272) */
/* 1254 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 1256 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1258 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1260 */	NdrFcShort( 0x20 ),	/* 32 */
/* 1262 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1264 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 1268 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 1270 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1272 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1274 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1276 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1278 */	NdrFcShort( 0xd0 ),	/* 208 */
/* 1280 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1282 */	NdrFcShort( 0x26 ),	/* Offset= 38 (1320) */
/* 1284 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 1286 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 1288 */	0x36,		/* FC_POINTER */
			0x8,		/* FC_LONG */
/* 1290 */	0x40,		/* FC_STRUCTPAD4 */
			0x36,		/* FC_POINTER */
/* 1292 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 1294 */	0x36,		/* FC_POINTER */
			0x8,		/* FC_LONG */
/* 1296 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1298 */	0x40,		/* FC_STRUCTPAD4 */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1300 */	0x0,		/* 0 */
			NdrFcShort( 0xffc7 ),	/* Offset= -57 (1244) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1304 */	0x0,		/* 0 */
			NdrFcShort( 0xffc3 ),	/* Offset= -61 (1244) */
			0x8,		/* FC_LONG */
/* 1308 */	0x40,		/* FC_STRUCTPAD4 */
			0x36,		/* FC_POINTER */
/* 1310 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 1312 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 1314 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1316 */	0xa,		/* FC_FLOAT */
			0x40,		/* FC_STRUCTPAD4 */
/* 1318 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 1320 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1322 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1324 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1326 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1328 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1330 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1332 */	
			0x12, 0x0,	/* FC_UP */
/* 1334 */	NdrFcShort( 0xffb0 ),	/* Offset= -80 (1254) */
/* 1336 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1338 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1340 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1342 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1344 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1346 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1348 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1350 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1352 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1354 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1356 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1358 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1360 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1362 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1364 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1366 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1368 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1370 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1372 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 1374 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1376 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 1378 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1380 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1382 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 1386 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 1388 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1390 */	NdrFcShort( 0xff8e ),	/* Offset= -114 (1276) */
/* 1392 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1394 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 1396 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1398) */
/* 1398 */	
			0x13, 0x0,	/* FC_OP */
/* 1400 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1402) */
/* 1402 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 1404 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1406 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 1408 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1410 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1412 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1414 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 1416 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1418) */
/* 1418 */	
			0x13, 0x0,	/* FC_OP */
/* 1420 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1422) */
/* 1422 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 1424 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1426 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x54,		/* FC_DEREFERENCE */
/* 1428 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 1430 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1432 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 1436 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 1438 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1440 */	NdrFcShort( 0xff5c ),	/* Offset= -164 (1276) */
/* 1442 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1444 */	
			0x11, 0x0,	/* FC_RP */
/* 1446 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1448) */
/* 1448 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 1450 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1452 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 1454 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1456 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1458 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 1462 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 1464 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1466 */	NdrFcShort( 0xff42 ),	/* Offset= -190 (1276) */
/* 1468 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1470 */	
			0x11, 0x0,	/* FC_RP */
/* 1472 */	NdrFcShort( 0xff3c ),	/* Offset= -196 (1276) */
/* 1474 */	
			0x11, 0x0,	/* FC_RP */
/* 1476 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1478) */
/* 1478 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 1480 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1482 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 1484 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1486 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1488 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 1492 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 1494 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1496 */	NdrFcShort( 0xff24 ),	/* Offset= -220 (1276) */
/* 1498 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1500 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 1502 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1504) */
/* 1504 */	
			0x13, 0x0,	/* FC_OP */
/* 1506 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1508) */
/* 1508 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 1510 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1512 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 1514 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1516 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1518 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1520 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 1522 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1524) */
/* 1524 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 1526 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */

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


/* Object interface: CATID_OPCDXServer10, ver. 0.0,
   GUID={0xA0C85BB8,0x4161,0x4fd6,{0x86,0x55,0xBB,0x58,0x46,0x01,0xC9,0xE0}} */

#pragma code_seg(".orpc")
static const unsigned short CATID_OPCDXServer10_FormatStringOffsetTable[] =
    {
    0
    };

static const MIDL_STUBLESS_PROXY_INFO CATID_OPCDXServer10_ProxyInfo =
    {
    &Object_StubDesc,
    OpcDx__MIDL_ProcFormatString.Format,
    &CATID_OPCDXServer10_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO CATID_OPCDXServer10_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    OpcDx__MIDL_ProcFormatString.Format,
    &CATID_OPCDXServer10_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(3) _CATID_OPCDXServer10ProxyVtbl = 
{
    0,
    &IID_CATID_OPCDXServer10,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy
};

const CInterfaceStubVtbl _CATID_OPCDXServer10StubVtbl =
{
    &IID_CATID_OPCDXServer10,
    &CATID_OPCDXServer10_ServerInfo,
    3,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Standard interface: __MIDL_itf_OpcDx_0000_0001, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IOPCConfiguration, ver. 0.0,
   GUID={0xC130D281,0xF4AA,0x4779,{0x88,0x46,0xC2,0xC4,0xCB,0x44,0x4F,0x2A}} */

#pragma code_seg(".orpc")
static const unsigned short IOPCConfiguration_FormatStringOffsetTable[] =
    {
    0,
    44,
    94,
    144,
    194,
    250,
    324,
    374,
    448,
    498,
    566,
    640
    };

static const MIDL_STUBLESS_PROXY_INFO IOPCConfiguration_ProxyInfo =
    {
    &Object_StubDesc,
    OpcDx__MIDL_ProcFormatString.Format,
    &IOPCConfiguration_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IOPCConfiguration_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    OpcDx__MIDL_ProcFormatString.Format,
    &IOPCConfiguration_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(15) _IOPCConfigurationProxyVtbl = 
{
    &IOPCConfiguration_ProxyInfo,
    &IID_IOPCConfiguration,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IOPCConfiguration::GetServers */ ,
    (void *) (INT_PTR) -1 /* IOPCConfiguration::AddServers */ ,
    (void *) (INT_PTR) -1 /* IOPCConfiguration::ModifyServers */ ,
    (void *) (INT_PTR) -1 /* IOPCConfiguration::DeleteServers */ ,
    (void *) (INT_PTR) -1 /* IOPCConfiguration::CopyDefaultServerAttributes */ ,
    (void *) (INT_PTR) -1 /* IOPCConfiguration::QueryDXConnections */ ,
    (void *) (INT_PTR) -1 /* IOPCConfiguration::AddDXConnections */ ,
    (void *) (INT_PTR) -1 /* IOPCConfiguration::UpdateDXConnections */ ,
    (void *) (INT_PTR) -1 /* IOPCConfiguration::ModifyDXConnections */ ,
    (void *) (INT_PTR) -1 /* IOPCConfiguration::DeleteDXConnections */ ,
    (void *) (INT_PTR) -1 /* IOPCConfiguration::CopyDXConnectionDefaultAttributes */ ,
    (void *) (INT_PTR) -1 /* IOPCConfiguration::ResetConfiguration */
};

const CInterfaceStubVtbl _IOPCConfigurationStubVtbl =
{
    &IID_IOPCConfiguration,
    &IOPCConfiguration_ServerInfo,
    15,
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
    OpcDx__MIDL_TypeFormatString.Format,
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

const CInterfaceProxyVtbl * const _OpcDx_ProxyVtblList[] = 
{
    ( CInterfaceProxyVtbl *) &_IOPCConfigurationProxyVtbl,
    ( CInterfaceProxyVtbl *) &_CATID_OPCDXServer10ProxyVtbl,
    0
};

const CInterfaceStubVtbl * const _OpcDx_StubVtblList[] = 
{
    ( CInterfaceStubVtbl *) &_IOPCConfigurationStubVtbl,
    ( CInterfaceStubVtbl *) &_CATID_OPCDXServer10StubVtbl,
    0
};

PCInterfaceName const _OpcDx_InterfaceNamesList[] = 
{
    "IOPCConfiguration",
    "CATID_OPCDXServer10",
    0
};


#define _OpcDx_CHECK_IID(n)	IID_GENERIC_CHECK_IID( _OpcDx, pIID, n)

int __stdcall _OpcDx_IID_Lookup( const IID * pIID, int * pIndex )
{
    IID_BS_LOOKUP_SETUP

    IID_BS_LOOKUP_INITIAL_TEST( _OpcDx, 2, 1 )
    IID_BS_LOOKUP_RETURN_RESULT( _OpcDx, 2, *pIndex )
    
}

const ExtendedProxyFileInfo OpcDx_ProxyFileInfo = 
{
    (PCInterfaceProxyVtblList *) & _OpcDx_ProxyVtblList,
    (PCInterfaceStubVtblList *) & _OpcDx_StubVtblList,
    (const PCInterfaceName * ) & _OpcDx_InterfaceNamesList,
    0, /* no delegation */
    & _OpcDx_IID_Lookup, 
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

