

/* this ALWAYS GENERATED file contains the proxy stub code */


 /* File created by MIDL compiler version 8.00.0603 */
/* at Sat May 07 19:15:44 2016
 */
/* Compiler settings for OpcCmd.idl:
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


#include "OpcCmd.h"

#define TYPE_FORMAT_STRING_SIZE   1987                              
#define PROC_FORMAT_STRING_SIZE   671                               
#define EXPR_FORMAT_STRING_SIZE   1                                 
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   1            

typedef struct _OpcCmd_MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } OpcCmd_MIDL_TYPE_FORMAT_STRING;

typedef struct _OpcCmd_MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } OpcCmd_MIDL_PROC_FORMAT_STRING;

typedef struct _OpcCmd_MIDL_EXPR_FORMAT_STRING
    {
    long          Pad;
    unsigned char  Format[ EXPR_FORMAT_STRING_SIZE ];
    } OpcCmd_MIDL_EXPR_FORMAT_STRING;


static const RPC_SYNTAX_IDENTIFIER  _RpcTransferSyntax = 
{{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}};


extern const OpcCmd_MIDL_TYPE_FORMAT_STRING OpcCmd__MIDL_TypeFormatString;
extern const OpcCmd_MIDL_PROC_FORMAT_STRING OpcCmd__MIDL_ProcFormatString;
extern const OpcCmd_MIDL_EXPR_FORMAT_STRING OpcCmd__MIDL_ExprFormatString;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO CATID_OPCCMDServer10_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO CATID_OPCCMDServer10_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IOPCComandCallback_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IOPCComandCallback_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IOPCCommandInformation_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IOPCCommandInformation_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IOPCCommandExecution_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IOPCCommandExecution_ProxyInfo;


extern const USER_MARSHAL_ROUTINE_QUADRUPLE UserMarshalRoutines[ WIRE_MARSHAL_TABLE_SIZE ];

#if !defined(__RPC_WIN64__)
#error  Invalid build platform for this stub.
#endif

static const OpcCmd_MIDL_PROC_FORMAT_STRING OpcCmd__MIDL_ProcFormatString =
    {
        0,
        {

	/* Procedure OnStateChange */

			0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/*  2 */	NdrFcLong( 0x0 ),	/* 0 */
/*  6 */	NdrFcShort( 0x3 ),	/* 3 */
/*  8 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 10 */	NdrFcShort( 0x18 ),	/* 24 */
/* 12 */	NdrFcShort( 0x8 ),	/* 8 */
/* 14 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 16 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 18 */	NdrFcShort( 0x0 ),	/* 0 */
/* 20 */	NdrFcShort( 0x1 ),	/* 1 */
/* 22 */	NdrFcShort( 0x0 ),	/* 0 */
/* 24 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dwNoOfEvents */

/* 26 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 28 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 30 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pEvents */

/* 32 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 34 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 36 */	NdrFcShort( 0x450 ),	/* Type Offset=1104 */

	/* Parameter dwNoOfPermittedControls */

/* 38 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 40 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 42 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pszPermittedControls */

/* 44 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 46 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 48 */	NdrFcShort( 0x46a ),	/* Type Offset=1130 */

	/* Parameter bNoStateChange */

/* 50 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 52 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 54 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 56 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 58 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 60 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure QueryCapabilities */

/* 62 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 64 */	NdrFcLong( 0x0 ),	/* 0 */
/* 68 */	NdrFcShort( 0x3 ),	/* 3 */
/* 70 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 72 */	NdrFcShort( 0x0 ),	/* 0 */
/* 74 */	NdrFcShort( 0x48 ),	/* 72 */
/* 76 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 78 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 80 */	NdrFcShort( 0x0 ),	/* 0 */
/* 82 */	NdrFcShort( 0x0 ),	/* 0 */
/* 84 */	NdrFcShort( 0x0 ),	/* 0 */
/* 86 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pdblMaxStorageTime */

/* 88 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 90 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 92 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter pbSupportsEventFilter */

/* 94 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 96 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 98 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 100 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 102 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 104 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure QueryComands */

/* 106 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 108 */	NdrFcLong( 0x0 ),	/* 0 */
/* 112 */	NdrFcShort( 0x4 ),	/* 4 */
/* 114 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 116 */	NdrFcShort( 0x0 ),	/* 0 */
/* 118 */	NdrFcShort( 0x24 ),	/* 36 */
/* 120 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 122 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 124 */	NdrFcShort( 0x1 ),	/* 1 */
/* 126 */	NdrFcShort( 0x0 ),	/* 0 */
/* 128 */	NdrFcShort( 0x0 ),	/* 0 */
/* 130 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pdwCount */

/* 132 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 134 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 136 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppNamespaces */

/* 138 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 140 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 142 */	NdrFcShort( 0x488 ),	/* Type Offset=1160 */

	/* Return value */

/* 144 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 146 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 148 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure BrowseCommandTargets */

/* 150 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 152 */	NdrFcLong( 0x0 ),	/* 0 */
/* 156 */	NdrFcShort( 0x5 ),	/* 5 */
/* 158 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 160 */	NdrFcShort( 0x6 ),	/* 6 */
/* 162 */	NdrFcShort( 0x24 ),	/* 36 */
/* 164 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 166 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 168 */	NdrFcShort( 0x1 ),	/* 1 */
/* 170 */	NdrFcShort( 0x0 ),	/* 0 */
/* 172 */	NdrFcShort( 0x0 ),	/* 0 */
/* 174 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter szTargetID */

/* 176 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 178 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 180 */	NdrFcShort( 0x4d8 ),	/* Type Offset=1240 */

	/* Parameter szNamespaceUri */

/* 182 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 184 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 186 */	NdrFcShort( 0x4d8 ),	/* Type Offset=1240 */

	/* Parameter eBrowseFilter */

/* 188 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 190 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 192 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter pdwCount */

/* 194 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 196 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 198 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppTargets */

/* 200 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 202 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 204 */	NdrFcShort( 0x4da ),	/* Type Offset=1242 */

	/* Return value */

/* 206 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 208 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 210 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetCommandDescription */

/* 212 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 214 */	NdrFcLong( 0x0 ),	/* 0 */
/* 218 */	NdrFcShort( 0x6 ),	/* 6 */
/* 220 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 222 */	NdrFcShort( 0x0 ),	/* 0 */
/* 224 */	NdrFcShort( 0x8 ),	/* 8 */
/* 226 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 228 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 230 */	NdrFcShort( 0x1 ),	/* 1 */
/* 232 */	NdrFcShort( 0x0 ),	/* 0 */
/* 234 */	NdrFcShort( 0x0 ),	/* 0 */
/* 236 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter szCommandName */

/* 238 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 240 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 242 */	NdrFcShort( 0x4d8 ),	/* Type Offset=1240 */

	/* Parameter szNamespaceUri */

/* 244 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 246 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 248 */	NdrFcShort( 0x4d8 ),	/* Type Offset=1240 */

	/* Parameter pDescription */

/* 250 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 252 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 254 */	NdrFcShort( 0x6be ),	/* Type Offset=1726 */

	/* Return value */

/* 256 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 258 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 260 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SyncInvoke */

/* 262 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 264 */	NdrFcLong( 0x0 ),	/* 0 */
/* 268 */	NdrFcShort( 0x3 ),	/* 3 */
/* 270 */	NdrFcShort( 0x58 ),	/* X64 Stack size/offset = 88 */
/* 272 */	NdrFcShort( 0x10 ),	/* 16 */
/* 274 */	NdrFcShort( 0x24 ),	/* 36 */
/* 276 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0xa,		/* 10 */
/* 278 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 280 */	NdrFcShort( 0x1 ),	/* 1 */
/* 282 */	NdrFcShort( 0x1 ),	/* 1 */
/* 284 */	NdrFcShort( 0x0 ),	/* 0 */
/* 286 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter szCommandName */

/* 288 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 290 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 292 */	NdrFcShort( 0x4d8 ),	/* Type Offset=1240 */

	/* Parameter szNamespaceUri */

/* 294 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 296 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 298 */	NdrFcShort( 0x4d8 ),	/* Type Offset=1240 */

	/* Parameter szTargetID */

/* 300 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 302 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 304 */	NdrFcShort( 0x716 ),	/* Type Offset=1814 */

	/* Parameter dwNoOfArguments */

/* 306 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 308 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 310 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pArguments */

/* 312 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 314 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 316 */	NdrFcShort( 0x71e ),	/* Type Offset=1822 */

	/* Parameter dwNoOfFilters */

/* 318 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 320 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 322 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pszFilters */

/* 324 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 326 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 328 */	NdrFcShort( 0x738 ),	/* Type Offset=1848 */

	/* Parameter pdwNoOfEvents */

/* 330 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 332 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 334 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppEvents */

/* 336 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 338 */	NdrFcShort( 0x48 ),	/* X64 Stack size/offset = 72 */
/* 340 */	NdrFcShort( 0x74e ),	/* Type Offset=1870 */

	/* Return value */

/* 342 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 344 */	NdrFcShort( 0x50 ),	/* X64 Stack size/offset = 80 */
/* 346 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure AsyncInvoke */

/* 348 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 350 */	NdrFcLong( 0x0 ),	/* 0 */
/* 354 */	NdrFcShort( 0x4 ),	/* 4 */
/* 356 */	NdrFcShort( 0x70 ),	/* X64 Stack size/offset = 112 */
/* 358 */	NdrFcShort( 0x20 ),	/* 32 */
/* 360 */	NdrFcShort( 0x24 ),	/* 36 */
/* 362 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0xd,		/* 13 */
/* 364 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 366 */	NdrFcShort( 0x0 ),	/* 0 */
/* 368 */	NdrFcShort( 0x1 ),	/* 1 */
/* 370 */	NdrFcShort( 0x0 ),	/* 0 */
/* 372 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter szCommandName */

/* 374 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 376 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 378 */	NdrFcShort( 0x4d8 ),	/* Type Offset=1240 */

	/* Parameter szNamespaceUri */

/* 380 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 382 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 384 */	NdrFcShort( 0x4d8 ),	/* Type Offset=1240 */

	/* Parameter szTargetID */

/* 386 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 388 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 390 */	NdrFcShort( 0x716 ),	/* Type Offset=1814 */

	/* Parameter dwNoOfArguments */

/* 392 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 394 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 396 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pArguments */

/* 398 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 400 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 402 */	NdrFcShort( 0x71e ),	/* Type Offset=1822 */

	/* Parameter dwNoOfFilters */

/* 404 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 406 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 408 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pszFilters */

/* 410 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 412 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 414 */	NdrFcShort( 0x738 ),	/* Type Offset=1848 */

	/* Parameter ipCallback */

/* 416 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 418 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 420 */	NdrFcShort( 0x76c ),	/* Type Offset=1900 */

	/* Parameter dwUpdateFrequency */

/* 422 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 424 */	NdrFcShort( 0x48 ),	/* X64 Stack size/offset = 72 */
/* 426 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter dwKeepAliveTime */

/* 428 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 430 */	NdrFcShort( 0x50 ),	/* X64 Stack size/offset = 80 */
/* 432 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pszInvokeUUID */

/* 434 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 436 */	NdrFcShort( 0x58 ),	/* X64 Stack size/offset = 88 */
/* 438 */	NdrFcShort( 0x77e ),	/* Type Offset=1918 */

	/* Parameter pdwRevisedUpdateFrequency */

/* 440 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 442 */	NdrFcShort( 0x60 ),	/* X64 Stack size/offset = 96 */
/* 444 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 446 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 448 */	NdrFcShort( 0x68 ),	/* X64 Stack size/offset = 104 */
/* 450 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Connect */

/* 452 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 454 */	NdrFcLong( 0x0 ),	/* 0 */
/* 458 */	NdrFcShort( 0x5 ),	/* 5 */
/* 460 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 462 */	NdrFcShort( 0x10 ),	/* 16 */
/* 464 */	NdrFcShort( 0x24 ),	/* 36 */
/* 466 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 468 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 470 */	NdrFcShort( 0x0 ),	/* 0 */
/* 472 */	NdrFcShort( 0x0 ),	/* 0 */
/* 474 */	NdrFcShort( 0x0 ),	/* 0 */
/* 476 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter szInvokeUUID */

/* 478 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 480 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 482 */	NdrFcShort( 0x4d8 ),	/* Type Offset=1240 */

	/* Parameter ipCallback */

/* 484 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 486 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 488 */	NdrFcShort( 0x76c ),	/* Type Offset=1900 */

	/* Parameter dwUpdateFrequency */

/* 490 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 492 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 494 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter dwKeepAliveTime */

/* 496 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 498 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 500 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pdwRevisedUpdateFrequency */

/* 502 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 504 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 506 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 508 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 510 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 512 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Disconnect */

/* 514 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 516 */	NdrFcLong( 0x0 ),	/* 0 */
/* 520 */	NdrFcShort( 0x6 ),	/* 6 */
/* 522 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 524 */	NdrFcShort( 0x0 ),	/* 0 */
/* 526 */	NdrFcShort( 0x8 ),	/* 8 */
/* 528 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 530 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 532 */	NdrFcShort( 0x0 ),	/* 0 */
/* 534 */	NdrFcShort( 0x0 ),	/* 0 */
/* 536 */	NdrFcShort( 0x0 ),	/* 0 */
/* 538 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter szInvokeUUID */

/* 540 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 542 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 544 */	NdrFcShort( 0x4d8 ),	/* Type Offset=1240 */

	/* Return value */

/* 546 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 548 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 550 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure QueryState */

/* 552 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 554 */	NdrFcLong( 0x0 ),	/* 0 */
/* 558 */	NdrFcShort( 0x7 ),	/* 7 */
/* 560 */	NdrFcShort( 0x48 ),	/* X64 Stack size/offset = 72 */
/* 562 */	NdrFcShort( 0x8 ),	/* 8 */
/* 564 */	NdrFcShort( 0x5c ),	/* 92 */
/* 566 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x8,		/* 8 */
/* 568 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 570 */	NdrFcShort( 0x1 ),	/* 1 */
/* 572 */	NdrFcShort( 0x0 ),	/* 0 */
/* 574 */	NdrFcShort( 0x0 ),	/* 0 */
/* 576 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter szInvokeUUID */

/* 578 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 580 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 582 */	NdrFcShort( 0x4d8 ),	/* Type Offset=1240 */

	/* Parameter dwWaitTime */

/* 584 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 586 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 588 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pdwNoOfEvents */

/* 590 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 592 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 594 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppEvents */

/* 596 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 598 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 600 */	NdrFcShort( 0x786 ),	/* Type Offset=1926 */

	/* Parameter pdwNoOfPermittedControls */

/* 602 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 604 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 606 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppszPermittedControls */

/* 608 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 610 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 612 */	NdrFcShort( 0x7a4 ),	/* Type Offset=1956 */

	/* Parameter pbNoStateChange */

/* 614 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 616 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 618 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 620 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 622 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 624 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Control */

/* 626 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 628 */	NdrFcLong( 0x0 ),	/* 0 */
/* 632 */	NdrFcShort( 0x8 ),	/* 8 */
/* 634 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 636 */	NdrFcShort( 0x0 ),	/* 0 */
/* 638 */	NdrFcShort( 0x8 ),	/* 8 */
/* 640 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 642 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 644 */	NdrFcShort( 0x0 ),	/* 0 */
/* 646 */	NdrFcShort( 0x0 ),	/* 0 */
/* 648 */	NdrFcShort( 0x0 ),	/* 0 */
/* 650 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter szInvokeUUID */

/* 652 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 654 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 656 */	NdrFcShort( 0x4d8 ),	/* Type Offset=1240 */

	/* Parameter szControl */

/* 658 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 660 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 662 */	NdrFcShort( 0x4d8 ),	/* Type Offset=1240 */

	/* Return value */

/* 664 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 666 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 668 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

			0x0
        }
    };

static const OpcCmd_MIDL_TYPE_FORMAT_STRING OpcCmd__MIDL_TypeFormatString =
    {
        0,
        {
			NdrFcShort( 0x0 ),	/* 0 */
/*  2 */	
			0x11, 0x0,	/* FC_RP */
/*  4 */	NdrFcShort( 0x44c ),	/* Offset= 1100 (1104) */
/*  6 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/*  8 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 12 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 14 */	
			0x12, 0x0,	/* FC_UP */
/* 16 */	NdrFcShort( 0x3ae ),	/* Offset= 942 (958) */
/* 18 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 20 */	0x7,		/* Corr desc: FC_USHORT */
			0x0,		/*  */
/* 22 */	NdrFcShort( 0xfff8 ),	/* -8 */
/* 24 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 26 */	NdrFcShort( 0x2 ),	/* Offset= 2 (28) */
/* 28 */	NdrFcShort( 0x10 ),	/* 16 */
/* 30 */	NdrFcShort( 0x2f ),	/* 47 */
/* 32 */	NdrFcLong( 0x14 ),	/* 20 */
/* 36 */	NdrFcShort( 0x800b ),	/* Simple arm type: FC_HYPER */
/* 38 */	NdrFcLong( 0x3 ),	/* 3 */
/* 42 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 44 */	NdrFcLong( 0x11 ),	/* 17 */
/* 48 */	NdrFcShort( 0x8001 ),	/* Simple arm type: FC_BYTE */
/* 50 */	NdrFcLong( 0x2 ),	/* 2 */
/* 54 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 56 */	NdrFcLong( 0x4 ),	/* 4 */
/* 60 */	NdrFcShort( 0x800a ),	/* Simple arm type: FC_FLOAT */
/* 62 */	NdrFcLong( 0x5 ),	/* 5 */
/* 66 */	NdrFcShort( 0x800c ),	/* Simple arm type: FC_DOUBLE */
/* 68 */	NdrFcLong( 0xb ),	/* 11 */
/* 72 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 74 */	NdrFcLong( 0xa ),	/* 10 */
/* 78 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 80 */	NdrFcLong( 0x6 ),	/* 6 */
/* 84 */	NdrFcShort( 0xe8 ),	/* Offset= 232 (316) */
/* 86 */	NdrFcLong( 0x7 ),	/* 7 */
/* 90 */	NdrFcShort( 0x800c ),	/* Simple arm type: FC_DOUBLE */
/* 92 */	NdrFcLong( 0x8 ),	/* 8 */
/* 96 */	NdrFcShort( 0xe2 ),	/* Offset= 226 (322) */
/* 98 */	NdrFcLong( 0xd ),	/* 13 */
/* 102 */	NdrFcShort( 0xf6 ),	/* Offset= 246 (348) */
/* 104 */	NdrFcLong( 0x9 ),	/* 9 */
/* 108 */	NdrFcShort( 0x102 ),	/* Offset= 258 (366) */
/* 110 */	NdrFcLong( 0x2000 ),	/* 8192 */
/* 114 */	NdrFcShort( 0x10e ),	/* Offset= 270 (384) */
/* 116 */	NdrFcLong( 0x24 ),	/* 36 */
/* 120 */	NdrFcShort( 0x2fc ),	/* Offset= 764 (884) */
/* 122 */	NdrFcLong( 0x4024 ),	/* 16420 */
/* 126 */	NdrFcShort( 0x2f6 ),	/* Offset= 758 (884) */
/* 128 */	NdrFcLong( 0x4011 ),	/* 16401 */
/* 132 */	NdrFcShort( 0x2f4 ),	/* Offset= 756 (888) */
/* 134 */	NdrFcLong( 0x4002 ),	/* 16386 */
/* 138 */	NdrFcShort( 0x2f2 ),	/* Offset= 754 (892) */
/* 140 */	NdrFcLong( 0x4003 ),	/* 16387 */
/* 144 */	NdrFcShort( 0x2f0 ),	/* Offset= 752 (896) */
/* 146 */	NdrFcLong( 0x4014 ),	/* 16404 */
/* 150 */	NdrFcShort( 0x2ee ),	/* Offset= 750 (900) */
/* 152 */	NdrFcLong( 0x4004 ),	/* 16388 */
/* 156 */	NdrFcShort( 0x2ec ),	/* Offset= 748 (904) */
/* 158 */	NdrFcLong( 0x4005 ),	/* 16389 */
/* 162 */	NdrFcShort( 0x2ea ),	/* Offset= 746 (908) */
/* 164 */	NdrFcLong( 0x400b ),	/* 16395 */
/* 168 */	NdrFcShort( 0x2d4 ),	/* Offset= 724 (892) */
/* 170 */	NdrFcLong( 0x400a ),	/* 16394 */
/* 174 */	NdrFcShort( 0x2d2 ),	/* Offset= 722 (896) */
/* 176 */	NdrFcLong( 0x4006 ),	/* 16390 */
/* 180 */	NdrFcShort( 0x2dc ),	/* Offset= 732 (912) */
/* 182 */	NdrFcLong( 0x4007 ),	/* 16391 */
/* 186 */	NdrFcShort( 0x2d2 ),	/* Offset= 722 (908) */
/* 188 */	NdrFcLong( 0x4008 ),	/* 16392 */
/* 192 */	NdrFcShort( 0x2d4 ),	/* Offset= 724 (916) */
/* 194 */	NdrFcLong( 0x400d ),	/* 16397 */
/* 198 */	NdrFcShort( 0x2d2 ),	/* Offset= 722 (920) */
/* 200 */	NdrFcLong( 0x4009 ),	/* 16393 */
/* 204 */	NdrFcShort( 0x2d0 ),	/* Offset= 720 (924) */
/* 206 */	NdrFcLong( 0x6000 ),	/* 24576 */
/* 210 */	NdrFcShort( 0x2ce ),	/* Offset= 718 (928) */
/* 212 */	NdrFcLong( 0x400c ),	/* 16396 */
/* 216 */	NdrFcShort( 0x2cc ),	/* Offset= 716 (932) */
/* 218 */	NdrFcLong( 0x10 ),	/* 16 */
/* 222 */	NdrFcShort( 0x8002 ),	/* Simple arm type: FC_CHAR */
/* 224 */	NdrFcLong( 0x12 ),	/* 18 */
/* 228 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 230 */	NdrFcLong( 0x13 ),	/* 19 */
/* 234 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 236 */	NdrFcLong( 0x15 ),	/* 21 */
/* 240 */	NdrFcShort( 0x800b ),	/* Simple arm type: FC_HYPER */
/* 242 */	NdrFcLong( 0x16 ),	/* 22 */
/* 246 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 248 */	NdrFcLong( 0x17 ),	/* 23 */
/* 252 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 254 */	NdrFcLong( 0xe ),	/* 14 */
/* 258 */	NdrFcShort( 0x2aa ),	/* Offset= 682 (940) */
/* 260 */	NdrFcLong( 0x400e ),	/* 16398 */
/* 264 */	NdrFcShort( 0x2ae ),	/* Offset= 686 (950) */
/* 266 */	NdrFcLong( 0x4010 ),	/* 16400 */
/* 270 */	NdrFcShort( 0x2ac ),	/* Offset= 684 (954) */
/* 272 */	NdrFcLong( 0x4012 ),	/* 16402 */
/* 276 */	NdrFcShort( 0x268 ),	/* Offset= 616 (892) */
/* 278 */	NdrFcLong( 0x4013 ),	/* 16403 */
/* 282 */	NdrFcShort( 0x266 ),	/* Offset= 614 (896) */
/* 284 */	NdrFcLong( 0x4015 ),	/* 16405 */
/* 288 */	NdrFcShort( 0x264 ),	/* Offset= 612 (900) */
/* 290 */	NdrFcLong( 0x4016 ),	/* 16406 */
/* 294 */	NdrFcShort( 0x25a ),	/* Offset= 602 (896) */
/* 296 */	NdrFcLong( 0x4017 ),	/* 16407 */
/* 300 */	NdrFcShort( 0x254 ),	/* Offset= 596 (896) */
/* 302 */	NdrFcLong( 0x0 ),	/* 0 */
/* 306 */	NdrFcShort( 0x0 ),	/* Offset= 0 (306) */
/* 308 */	NdrFcLong( 0x1 ),	/* 1 */
/* 312 */	NdrFcShort( 0x0 ),	/* Offset= 0 (312) */
/* 314 */	NdrFcShort( 0xffff ),	/* Offset= -1 (313) */
/* 316 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 318 */	NdrFcShort( 0x8 ),	/* 8 */
/* 320 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 322 */	
			0x12, 0x0,	/* FC_UP */
/* 324 */	NdrFcShort( 0xe ),	/* Offset= 14 (338) */
/* 326 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 328 */	NdrFcShort( 0x2 ),	/* 2 */
/* 330 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 332 */	NdrFcShort( 0xfffc ),	/* -4 */
/* 334 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 336 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 338 */	
			0x17,		/* FC_CSTRUCT */
			0x3,		/* 3 */
/* 340 */	NdrFcShort( 0x8 ),	/* 8 */
/* 342 */	NdrFcShort( 0xfff0 ),	/* Offset= -16 (326) */
/* 344 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 346 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 348 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 350 */	NdrFcLong( 0x0 ),	/* 0 */
/* 354 */	NdrFcShort( 0x0 ),	/* 0 */
/* 356 */	NdrFcShort( 0x0 ),	/* 0 */
/* 358 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 360 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 362 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 364 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 366 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 368 */	NdrFcLong( 0x20400 ),	/* 132096 */
/* 372 */	NdrFcShort( 0x0 ),	/* 0 */
/* 374 */	NdrFcShort( 0x0 ),	/* 0 */
/* 376 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 378 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 380 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 382 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 384 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 386 */	NdrFcShort( 0x2 ),	/* Offset= 2 (388) */
/* 388 */	
			0x12, 0x0,	/* FC_UP */
/* 390 */	NdrFcShort( 0x1dc ),	/* Offset= 476 (866) */
/* 392 */	
			0x2a,		/* FC_ENCAPSULATED_UNION */
			0x89,		/* 137 */
/* 394 */	NdrFcShort( 0x20 ),	/* 32 */
/* 396 */	NdrFcShort( 0xa ),	/* 10 */
/* 398 */	NdrFcLong( 0x8 ),	/* 8 */
/* 402 */	NdrFcShort( 0x50 ),	/* Offset= 80 (482) */
/* 404 */	NdrFcLong( 0xd ),	/* 13 */
/* 408 */	NdrFcShort( 0x70 ),	/* Offset= 112 (520) */
/* 410 */	NdrFcLong( 0x9 ),	/* 9 */
/* 414 */	NdrFcShort( 0x90 ),	/* Offset= 144 (558) */
/* 416 */	NdrFcLong( 0xc ),	/* 12 */
/* 420 */	NdrFcShort( 0xb0 ),	/* Offset= 176 (596) */
/* 422 */	NdrFcLong( 0x24 ),	/* 36 */
/* 426 */	NdrFcShort( 0x102 ),	/* Offset= 258 (684) */
/* 428 */	NdrFcLong( 0x800d ),	/* 32781 */
/* 432 */	NdrFcShort( 0x11e ),	/* Offset= 286 (718) */
/* 434 */	NdrFcLong( 0x10 ),	/* 16 */
/* 438 */	NdrFcShort( 0x138 ),	/* Offset= 312 (750) */
/* 440 */	NdrFcLong( 0x2 ),	/* 2 */
/* 444 */	NdrFcShort( 0x14e ),	/* Offset= 334 (778) */
/* 446 */	NdrFcLong( 0x3 ),	/* 3 */
/* 450 */	NdrFcShort( 0x164 ),	/* Offset= 356 (806) */
/* 452 */	NdrFcLong( 0x14 ),	/* 20 */
/* 456 */	NdrFcShort( 0x17a ),	/* Offset= 378 (834) */
/* 458 */	NdrFcShort( 0xffff ),	/* Offset= -1 (457) */
/* 460 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 462 */	NdrFcShort( 0x0 ),	/* 0 */
/* 464 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 466 */	NdrFcShort( 0x0 ),	/* 0 */
/* 468 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 470 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 474 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 476 */	
			0x12, 0x0,	/* FC_UP */
/* 478 */	NdrFcShort( 0xff74 ),	/* Offset= -140 (338) */
/* 480 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 482 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 484 */	NdrFcShort( 0x10 ),	/* 16 */
/* 486 */	NdrFcShort( 0x0 ),	/* 0 */
/* 488 */	NdrFcShort( 0x6 ),	/* Offset= 6 (494) */
/* 490 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 492 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 494 */	
			0x11, 0x0,	/* FC_RP */
/* 496 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (460) */
/* 498 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 500 */	NdrFcShort( 0x0 ),	/* 0 */
/* 502 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 504 */	NdrFcShort( 0x0 ),	/* 0 */
/* 506 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 508 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 512 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 514 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 516 */	NdrFcShort( 0xff58 ),	/* Offset= -168 (348) */
/* 518 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 520 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 522 */	NdrFcShort( 0x10 ),	/* 16 */
/* 524 */	NdrFcShort( 0x0 ),	/* 0 */
/* 526 */	NdrFcShort( 0x6 ),	/* Offset= 6 (532) */
/* 528 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 530 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 532 */	
			0x11, 0x0,	/* FC_RP */
/* 534 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (498) */
/* 536 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 538 */	NdrFcShort( 0x0 ),	/* 0 */
/* 540 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 542 */	NdrFcShort( 0x0 ),	/* 0 */
/* 544 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 546 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 550 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 552 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 554 */	NdrFcShort( 0xff44 ),	/* Offset= -188 (366) */
/* 556 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 558 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 560 */	NdrFcShort( 0x10 ),	/* 16 */
/* 562 */	NdrFcShort( 0x0 ),	/* 0 */
/* 564 */	NdrFcShort( 0x6 ),	/* Offset= 6 (570) */
/* 566 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 568 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 570 */	
			0x11, 0x0,	/* FC_RP */
/* 572 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (536) */
/* 574 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 576 */	NdrFcShort( 0x0 ),	/* 0 */
/* 578 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 580 */	NdrFcShort( 0x0 ),	/* 0 */
/* 582 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 584 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 588 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 590 */	
			0x12, 0x0,	/* FC_UP */
/* 592 */	NdrFcShort( 0x16e ),	/* Offset= 366 (958) */
/* 594 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 596 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 598 */	NdrFcShort( 0x10 ),	/* 16 */
/* 600 */	NdrFcShort( 0x0 ),	/* 0 */
/* 602 */	NdrFcShort( 0x6 ),	/* Offset= 6 (608) */
/* 604 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 606 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 608 */	
			0x11, 0x0,	/* FC_RP */
/* 610 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (574) */
/* 612 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 614 */	NdrFcLong( 0x2f ),	/* 47 */
/* 618 */	NdrFcShort( 0x0 ),	/* 0 */
/* 620 */	NdrFcShort( 0x0 ),	/* 0 */
/* 622 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 624 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 626 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 628 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 630 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 632 */	NdrFcShort( 0x1 ),	/* 1 */
/* 634 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 636 */	NdrFcShort( 0x4 ),	/* 4 */
/* 638 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 640 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 642 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 644 */	NdrFcShort( 0x18 ),	/* 24 */
/* 646 */	NdrFcShort( 0x0 ),	/* 0 */
/* 648 */	NdrFcShort( 0xa ),	/* Offset= 10 (658) */
/* 650 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 652 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 654 */	NdrFcShort( 0xffd6 ),	/* Offset= -42 (612) */
/* 656 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 658 */	
			0x12, 0x0,	/* FC_UP */
/* 660 */	NdrFcShort( 0xffe2 ),	/* Offset= -30 (630) */
/* 662 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 664 */	NdrFcShort( 0x0 ),	/* 0 */
/* 666 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 668 */	NdrFcShort( 0x0 ),	/* 0 */
/* 670 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 672 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 676 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 678 */	
			0x12, 0x0,	/* FC_UP */
/* 680 */	NdrFcShort( 0xffda ),	/* Offset= -38 (642) */
/* 682 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 684 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 686 */	NdrFcShort( 0x10 ),	/* 16 */
/* 688 */	NdrFcShort( 0x0 ),	/* 0 */
/* 690 */	NdrFcShort( 0x6 ),	/* Offset= 6 (696) */
/* 692 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 694 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 696 */	
			0x11, 0x0,	/* FC_RP */
/* 698 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (662) */
/* 700 */	
			0x1d,		/* FC_SMFARRAY */
			0x0,		/* 0 */
/* 702 */	NdrFcShort( 0x8 ),	/* 8 */
/* 704 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 706 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 708 */	NdrFcShort( 0x10 ),	/* 16 */
/* 710 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 712 */	0x6,		/* FC_SHORT */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 714 */	0x0,		/* 0 */
			NdrFcShort( 0xfff1 ),	/* Offset= -15 (700) */
			0x5b,		/* FC_END */
/* 718 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 720 */	NdrFcShort( 0x20 ),	/* 32 */
/* 722 */	NdrFcShort( 0x0 ),	/* 0 */
/* 724 */	NdrFcShort( 0xa ),	/* Offset= 10 (734) */
/* 726 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 728 */	0x36,		/* FC_POINTER */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 730 */	0x0,		/* 0 */
			NdrFcShort( 0xffe7 ),	/* Offset= -25 (706) */
			0x5b,		/* FC_END */
/* 734 */	
			0x11, 0x0,	/* FC_RP */
/* 736 */	NdrFcShort( 0xff12 ),	/* Offset= -238 (498) */
/* 738 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 740 */	NdrFcShort( 0x1 ),	/* 1 */
/* 742 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 744 */	NdrFcShort( 0x0 ),	/* 0 */
/* 746 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 748 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 750 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 752 */	NdrFcShort( 0x10 ),	/* 16 */
/* 754 */	NdrFcShort( 0x0 ),	/* 0 */
/* 756 */	NdrFcShort( 0x6 ),	/* Offset= 6 (762) */
/* 758 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 760 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 762 */	
			0x12, 0x0,	/* FC_UP */
/* 764 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (738) */
/* 766 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 768 */	NdrFcShort( 0x2 ),	/* 2 */
/* 770 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 772 */	NdrFcShort( 0x0 ),	/* 0 */
/* 774 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 776 */	0x6,		/* FC_SHORT */
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
			0x12, 0x0,	/* FC_UP */
/* 792 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (766) */
/* 794 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 796 */	NdrFcShort( 0x4 ),	/* 4 */
/* 798 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 800 */	NdrFcShort( 0x0 ),	/* 0 */
/* 802 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 804 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 806 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 808 */	NdrFcShort( 0x10 ),	/* 16 */
/* 810 */	NdrFcShort( 0x0 ),	/* 0 */
/* 812 */	NdrFcShort( 0x6 ),	/* Offset= 6 (818) */
/* 814 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 816 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 818 */	
			0x12, 0x0,	/* FC_UP */
/* 820 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (794) */
/* 822 */	
			0x1b,		/* FC_CARRAY */
			0x7,		/* 7 */
/* 824 */	NdrFcShort( 0x8 ),	/* 8 */
/* 826 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 828 */	NdrFcShort( 0x0 ),	/* 0 */
/* 830 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 832 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 834 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 836 */	NdrFcShort( 0x10 ),	/* 16 */
/* 838 */	NdrFcShort( 0x0 ),	/* 0 */
/* 840 */	NdrFcShort( 0x6 ),	/* Offset= 6 (846) */
/* 842 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 844 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 846 */	
			0x12, 0x0,	/* FC_UP */
/* 848 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (822) */
/* 850 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 852 */	NdrFcShort( 0x8 ),	/* 8 */
/* 854 */	0x7,		/* Corr desc: FC_USHORT */
			0x0,		/*  */
/* 856 */	NdrFcShort( 0xffc8 ),	/* -56 */
/* 858 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 860 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 862 */	NdrFcShort( 0xfca8 ),	/* Offset= -856 (6) */
/* 864 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 866 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 868 */	NdrFcShort( 0x38 ),	/* 56 */
/* 870 */	NdrFcShort( 0xffec ),	/* Offset= -20 (850) */
/* 872 */	NdrFcShort( 0x0 ),	/* Offset= 0 (872) */
/* 874 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 876 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 878 */	0x40,		/* FC_STRUCTPAD4 */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 880 */	0x0,		/* 0 */
			NdrFcShort( 0xfe17 ),	/* Offset= -489 (392) */
			0x5b,		/* FC_END */
/* 884 */	
			0x12, 0x0,	/* FC_UP */
/* 886 */	NdrFcShort( 0xff0c ),	/* Offset= -244 (642) */
/* 888 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 890 */	0x1,		/* FC_BYTE */
			0x5c,		/* FC_PAD */
/* 892 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 894 */	0x6,		/* FC_SHORT */
			0x5c,		/* FC_PAD */
/* 896 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 898 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 900 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 902 */	0xb,		/* FC_HYPER */
			0x5c,		/* FC_PAD */
/* 904 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 906 */	0xa,		/* FC_FLOAT */
			0x5c,		/* FC_PAD */
/* 908 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 910 */	0xc,		/* FC_DOUBLE */
			0x5c,		/* FC_PAD */
/* 912 */	
			0x12, 0x0,	/* FC_UP */
/* 914 */	NdrFcShort( 0xfdaa ),	/* Offset= -598 (316) */
/* 916 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 918 */	NdrFcShort( 0xfdac ),	/* Offset= -596 (322) */
/* 920 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 922 */	NdrFcShort( 0xfdc2 ),	/* Offset= -574 (348) */
/* 924 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 926 */	NdrFcShort( 0xfdd0 ),	/* Offset= -560 (366) */
/* 928 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 930 */	NdrFcShort( 0xfdde ),	/* Offset= -546 (384) */
/* 932 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 934 */	NdrFcShort( 0x2 ),	/* Offset= 2 (936) */
/* 936 */	
			0x12, 0x0,	/* FC_UP */
/* 938 */	NdrFcShort( 0x14 ),	/* Offset= 20 (958) */
/* 940 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 942 */	NdrFcShort( 0x10 ),	/* 16 */
/* 944 */	0x6,		/* FC_SHORT */
			0x1,		/* FC_BYTE */
/* 946 */	0x1,		/* FC_BYTE */
			0x8,		/* FC_LONG */
/* 948 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 950 */	
			0x12, 0x0,	/* FC_UP */
/* 952 */	NdrFcShort( 0xfff4 ),	/* Offset= -12 (940) */
/* 954 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 956 */	0x2,		/* FC_CHAR */
			0x5c,		/* FC_PAD */
/* 958 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 960 */	NdrFcShort( 0x20 ),	/* 32 */
/* 962 */	NdrFcShort( 0x0 ),	/* 0 */
/* 964 */	NdrFcShort( 0x0 ),	/* Offset= 0 (964) */
/* 966 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 968 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 970 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 972 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 974 */	NdrFcShort( 0xfc44 ),	/* Offset= -956 (18) */
/* 976 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 978 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 980 */	NdrFcShort( 0x0 ),	/* 0 */
/* 982 */	NdrFcShort( 0x18 ),	/* 24 */
/* 984 */	NdrFcShort( 0x0 ),	/* 0 */
/* 986 */	NdrFcShort( 0xfc34 ),	/* Offset= -972 (14) */
/* 988 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 990 */	NdrFcShort( 0x20 ),	/* 32 */
/* 992 */	NdrFcShort( 0x0 ),	/* 0 */
/* 994 */	NdrFcShort( 0x8 ),	/* Offset= 8 (1002) */
/* 996 */	0x36,		/* FC_POINTER */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 998 */	0x0,		/* 0 */
			NdrFcShort( 0xffeb ),	/* Offset= -21 (978) */
			0x5b,		/* FC_END */
/* 1002 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1004 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1006 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 1008 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1010 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1012 */	NdrFcShort( 0x38 ),	/* 56 */
/* 1014 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1016 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 1020 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 1022 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1024 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (988) */
/* 1026 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1028 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 1030 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1032 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1034 */	NdrFcShort( 0x48 ),	/* 72 */
/* 1036 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1038 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 1042 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 1044 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1046 */	NdrFcShort( 0xffc6 ),	/* Offset= -58 (988) */
/* 1048 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1050 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1052 */	NdrFcShort( 0x58 ),	/* 88 */
/* 1054 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1056 */	NdrFcShort( 0x14 ),	/* Offset= 20 (1076) */
/* 1058 */	0x36,		/* FC_POINTER */
			0x8,		/* FC_LONG */
/* 1060 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1062 */	NdrFcShort( 0xfbe0 ),	/* Offset= -1056 (6) */
/* 1064 */	0x40,		/* FC_STRUCTPAD4 */
			0x36,		/* FC_POINTER */
/* 1066 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 1068 */	0x36,		/* FC_POINTER */
			0x8,		/* FC_LONG */
/* 1070 */	0x40,		/* FC_STRUCTPAD4 */
			0x36,		/* FC_POINTER */
/* 1072 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 1074 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 1076 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1078 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1080 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1082 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1084 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1086 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1088 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1090 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1092 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1094 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1096 */	
			0x12, 0x0,	/* FC_UP */
/* 1098 */	NdrFcShort( 0xffa4 ),	/* Offset= -92 (1006) */
/* 1100 */	
			0x12, 0x0,	/* FC_UP */
/* 1102 */	NdrFcShort( 0xffb6 ),	/* Offset= -74 (1028) */
/* 1104 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 1106 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1108 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 1110 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1112 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1114 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 1118 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 1120 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1122 */	NdrFcShort( 0xffb8 ),	/* Offset= -72 (1050) */
/* 1124 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1126 */	
			0x11, 0x0,	/* FC_RP */
/* 1128 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1130) */
/* 1130 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 1132 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1134 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 1136 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1138 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1140 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 1144 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 1146 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1148 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1150 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1152 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 1154 */	0xc,		/* FC_DOUBLE */
			0x5c,		/* FC_PAD */
/* 1156 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 1158 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 1160 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 1162 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1164) */
/* 1164 */	
			0x13, 0x0,	/* FC_OP */
/* 1166 */	NdrFcShort( 0x32 ),	/* Offset= 50 (1216) */
/* 1168 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 1170 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1172 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1174 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1176 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1178 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 1182 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 1184 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 1186 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1188 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1190 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1192 */	NdrFcShort( 0x20 ),	/* 32 */
/* 1194 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1196 */	NdrFcShort( 0x8 ),	/* Offset= 8 (1204) */
/* 1198 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 1200 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 1202 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 1204 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 1206 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1208 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 1210 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1212 */	
			0x13, 0x0,	/* FC_OP */
/* 1214 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (1168) */
/* 1216 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 1218 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1220 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x54,		/* FC_DEREFERENCE */
/* 1222 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1224 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1226 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 1230 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 1232 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1234 */	NdrFcShort( 0xffd4 ),	/* Offset= -44 (1190) */
/* 1236 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1238 */	
			0x11, 0x8,	/* FC_RP [simple_pointer] */
/* 1240 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1242 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 1244 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1246) */
/* 1246 */	
			0x13, 0x0,	/* FC_OP */
/* 1248 */	NdrFcShort( 0x34 ),	/* Offset= 52 (1300) */
/* 1250 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 1252 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1254 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1256 */	NdrFcShort( 0x18 ),	/* 24 */
/* 1258 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1260 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 1264 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 1266 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 1268 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1270 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1272 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1274 */	NdrFcShort( 0x28 ),	/* 40 */
/* 1276 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1278 */	NdrFcShort( 0xa ),	/* Offset= 10 (1288) */
/* 1280 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 1282 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1284 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 1286 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 1288 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 1290 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1292 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 1294 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1296 */	
			0x13, 0x0,	/* FC_OP */
/* 1298 */	NdrFcShort( 0xffd0 ),	/* Offset= -48 (1250) */
/* 1300 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 1302 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1304 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x54,		/* FC_DEREFERENCE */
/* 1306 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1308 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1310 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 1314 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 1316 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1318 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (1272) */
/* 1320 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1322 */	
			0x11, 0x0,	/* FC_RP */
/* 1324 */	NdrFcShort( 0x192 ),	/* Offset= 402 (1726) */
/* 1326 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1328 */	NdrFcShort( 0x20 ),	/* 32 */
/* 1330 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1332 */	NdrFcShort( 0x8 ),	/* Offset= 8 (1340) */
/* 1334 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 1336 */	0x36,		/* FC_POINTER */
			0x8,		/* FC_LONG */
/* 1338 */	0x40,		/* FC_STRUCTPAD4 */
			0x5b,		/* FC_END */
/* 1340 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 1342 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1344 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 1346 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1348 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 1350 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1352 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 1354 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1356 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1358 */	NdrFcShort( 0x18 ),	/* 24 */
/* 1360 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1362 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 1366 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 1368 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1370 */	NdrFcShort( 0xffd4 ),	/* Offset= -44 (1326) */
/* 1372 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1374 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1376 */	NdrFcShort( 0x20 ),	/* 32 */
/* 1378 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1380 */	NdrFcShort( 0x8 ),	/* Offset= 8 (1388) */
/* 1382 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 1384 */	0x36,		/* FC_POINTER */
			0x8,		/* FC_LONG */
/* 1386 */	0x40,		/* FC_STRUCTPAD4 */
			0x5b,		/* FC_END */
/* 1388 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 1390 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1392 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 1394 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1396 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 1398 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1400 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 1402 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1404 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1406 */	NdrFcShort( 0x28 ),	/* 40 */
/* 1408 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1410 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 1414 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 1416 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1418 */	NdrFcShort( 0xffd4 ),	/* Offset= -44 (1374) */
/* 1420 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1422 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1424 */	NdrFcShort( 0x30 ),	/* 48 */
/* 1426 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1428 */	NdrFcShort( 0xa ),	/* Offset= 10 (1438) */
/* 1430 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 1432 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 1434 */	0x36,		/* FC_POINTER */
			0x8,		/* FC_LONG */
/* 1436 */	0x40,		/* FC_STRUCTPAD4 */
			0x5b,		/* FC_END */
/* 1438 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 1440 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1442 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 1444 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1446 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 1448 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1450 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 1452 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1454 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 1456 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1458 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 1460 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1462 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1464 */	NdrFcShort( 0x38 ),	/* 56 */
/* 1466 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1468 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 1472 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 1474 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1476 */	NdrFcShort( 0xffca ),	/* Offset= -54 (1422) */
/* 1478 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1480 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1482 */	NdrFcShort( 0x30 ),	/* 48 */
/* 1484 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1486 */	NdrFcShort( 0xa ),	/* Offset= 10 (1496) */
/* 1488 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 1490 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 1492 */	0x36,		/* FC_POINTER */
			0x8,		/* FC_LONG */
/* 1494 */	0x40,		/* FC_STRUCTPAD4 */
			0x5b,		/* FC_END */
/* 1496 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 1498 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1500 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 1502 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1504 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 1506 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1508 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 1510 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1512 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 1514 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1516 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 1518 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1520 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1522 */	NdrFcShort( 0x48 ),	/* 72 */
/* 1524 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1526 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 1530 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 1532 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1534 */	NdrFcShort( 0xffca ),	/* Offset= -54 (1480) */
/* 1536 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1538 */	
			0x13, 0x0,	/* FC_OP */
/* 1540 */	NdrFcShort( 0xfdba ),	/* Offset= -582 (958) */
/* 1542 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 1544 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1546 */	NdrFcShort( 0x18 ),	/* 24 */
/* 1548 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1550 */	NdrFcShort( 0xfff4 ),	/* Offset= -12 (1538) */
/* 1552 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1554 */	NdrFcShort( 0x70 ),	/* 112 */
/* 1556 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1558 */	NdrFcShort( 0x18 ),	/* Offset= 24 (1582) */
/* 1560 */	0x36,		/* FC_POINTER */
			0x6,		/* FC_SHORT */
/* 1562 */	0x6,		/* FC_SHORT */
			0x8,		/* FC_LONG */
/* 1564 */	0x36,		/* FC_POINTER */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1566 */	0x0,		/* 0 */
			NdrFcShort( 0xffe7 ),	/* Offset= -25 (1542) */
			0x36,		/* FC_POINTER */
/* 1570 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 1572 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1574 */	NdrFcShort( 0xffe0 ),	/* Offset= -32 (1542) */
/* 1576 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1578 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (1542) */
/* 1580 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1582 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 1584 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1586 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 1588 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1590 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 1592 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1594 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 1596 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1598 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1600 */	NdrFcShort( 0x58 ),	/* 88 */
/* 1602 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1604 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 1608 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 1610 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1612 */	NdrFcShort( 0xffc4 ),	/* Offset= -60 (1552) */
/* 1614 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1616 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 1618 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1620 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1622 */	NdrFcShort( 0x68 ),	/* 104 */
/* 1624 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1626 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 1630 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 1632 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1634 */	NdrFcShort( 0xffae ),	/* Offset= -82 (1552) */
/* 1636 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1638 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 1640 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1642 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1644 */	NdrFcShort( 0x78 ),	/* 120 */
/* 1646 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1648 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 1652 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 1654 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 1656 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1658 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1660 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 1662 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1664 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1666 */	NdrFcShort( 0x88 ),	/* 136 */
/* 1668 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1670 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 1674 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 1676 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 1678 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1680 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1682 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 1684 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1686 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1688 */	NdrFcShort( 0x98 ),	/* 152 */
/* 1690 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1692 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 1696 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 1698 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 1700 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1702 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1704 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 1706 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1708 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1710 */	NdrFcShort( 0xa8 ),	/* 168 */
/* 1712 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1714 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 1718 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 1720 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 1722 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1724 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1726 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 1728 */	NdrFcShort( 0xb8 ),	/* 184 */
/* 1730 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1732 */	NdrFcShort( 0x26 ),	/* Offset= 38 (1770) */
/* 1734 */	0x36,		/* FC_POINTER */
			0x8,		/* FC_LONG */
/* 1736 */	0x40,		/* FC_STRUCTPAD4 */
			0xc,		/* FC_DOUBLE */
/* 1738 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 1740 */	0x36,		/* FC_POINTER */
			0x8,		/* FC_LONG */
/* 1742 */	0x40,		/* FC_STRUCTPAD4 */
			0x36,		/* FC_POINTER */
/* 1744 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 1746 */	0x36,		/* FC_POINTER */
			0x8,		/* FC_LONG */
/* 1748 */	0x40,		/* FC_STRUCTPAD4 */
			0x36,		/* FC_POINTER */
/* 1750 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 1752 */	0x36,		/* FC_POINTER */
			0x8,		/* FC_LONG */
/* 1754 */	0x40,		/* FC_STRUCTPAD4 */
			0x36,		/* FC_POINTER */
/* 1756 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 1758 */	0x36,		/* FC_POINTER */
			0x8,		/* FC_LONG */
/* 1760 */	0x40,		/* FC_STRUCTPAD4 */
			0x36,		/* FC_POINTER */
/* 1762 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 1764 */	0x36,		/* FC_POINTER */
			0x8,		/* FC_LONG */
/* 1766 */	0x40,		/* FC_STRUCTPAD4 */
			0x36,		/* FC_POINTER */
/* 1768 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1770 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 1772 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1774 */	
			0x13, 0x0,	/* FC_OP */
/* 1776 */	NdrFcShort( 0xfe58 ),	/* Offset= -424 (1352) */
/* 1778 */	
			0x13, 0x0,	/* FC_OP */
/* 1780 */	NdrFcShort( 0xfe84 ),	/* Offset= -380 (1400) */
/* 1782 */	
			0x13, 0x0,	/* FC_OP */
/* 1784 */	NdrFcShort( 0xfeba ),	/* Offset= -326 (1458) */
/* 1786 */	
			0x13, 0x0,	/* FC_OP */
/* 1788 */	NdrFcShort( 0xfef0 ),	/* Offset= -272 (1516) */
/* 1790 */	
			0x13, 0x0,	/* FC_OP */
/* 1792 */	NdrFcShort( 0xff3a ),	/* Offset= -198 (1594) */
/* 1794 */	
			0x13, 0x0,	/* FC_OP */
/* 1796 */	NdrFcShort( 0xff4c ),	/* Offset= -180 (1616) */
/* 1798 */	
			0x13, 0x0,	/* FC_OP */
/* 1800 */	NdrFcShort( 0xff5e ),	/* Offset= -162 (1638) */
/* 1802 */	
			0x13, 0x0,	/* FC_OP */
/* 1804 */	NdrFcShort( 0xff70 ),	/* Offset= -144 (1660) */
/* 1806 */	
			0x13, 0x0,	/* FC_OP */
/* 1808 */	NdrFcShort( 0xff82 ),	/* Offset= -126 (1682) */
/* 1810 */	
			0x13, 0x0,	/* FC_OP */
/* 1812 */	NdrFcShort( 0xff94 ),	/* Offset= -108 (1704) */
/* 1814 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1816 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1818 */	
			0x11, 0x0,	/* FC_RP */
/* 1820 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1822) */
/* 1822 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 1824 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1826 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 1828 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1830 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1832 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 1836 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 1838 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1840 */	NdrFcShort( 0xfcac ),	/* Offset= -852 (988) */
/* 1842 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1844 */	
			0x11, 0x0,	/* FC_RP */
/* 1846 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1848) */
/* 1848 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 1850 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1852 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 1854 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 1856 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1858 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 1862 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 1864 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1866 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1868 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1870 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 1872 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1874) */
/* 1874 */	
			0x13, 0x0,	/* FC_OP */
/* 1876 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1878) */
/* 1878 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 1880 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1882 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x54,		/* FC_DEREFERENCE */
/* 1884 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 1886 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1888 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 1892 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 1894 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1896 */	NdrFcShort( 0xfcb2 ),	/* Offset= -846 (1050) */
/* 1898 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1900 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1902 */	NdrFcLong( 0x3104b527 ),	/* 822392103 */
/* 1906 */	NdrFcShort( 0x2016 ),	/* 8214 */
/* 1908 */	NdrFcShort( 0x442d ),	/* 17453 */
/* 1910 */	0x96,		/* 150 */
			0x96,		/* 150 */
/* 1912 */	0x12,		/* 18 */
			0x75,		/* 117 */
/* 1914 */	0xde,		/* 222 */
			0x97,		/* 151 */
/* 1916 */	0x87,		/* 135 */
			0x78,		/* 120 */
/* 1918 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 1920 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1922) */
/* 1922 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 1924 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1926 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 1928 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1930) */
/* 1930 */	
			0x13, 0x0,	/* FC_OP */
/* 1932 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1934) */
/* 1934 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 1936 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1938 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x54,		/* FC_DEREFERENCE */
/* 1940 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1942 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1944 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 1948 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 1950 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1952 */	NdrFcShort( 0xfc7a ),	/* Offset= -902 (1050) */
/* 1954 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1956 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 1958 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1960) */
/* 1960 */	
			0x13, 0x0,	/* FC_OP */
/* 1962 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1964) */
/* 1964 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 1966 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1968 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x54,		/* FC_DEREFERENCE */
/* 1970 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 1972 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1974 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 1978 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 1980 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 1982 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1984 */	0x5c,		/* FC_PAD */
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


/* Object interface: CATID_OPCCMDServer10, ver. 0.0,
   GUID={0x2D869D5C,0x3B05,0x41fb,{0x85,0x1A,0x64,0x2F,0xB2,0xB8,0x01,0xA0}} */

#pragma code_seg(".orpc")
static const unsigned short CATID_OPCCMDServer10_FormatStringOffsetTable[] =
    {
    0
    };

static const MIDL_STUBLESS_PROXY_INFO CATID_OPCCMDServer10_ProxyInfo =
    {
    &Object_StubDesc,
    OpcCmd__MIDL_ProcFormatString.Format,
    &CATID_OPCCMDServer10_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO CATID_OPCCMDServer10_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    OpcCmd__MIDL_ProcFormatString.Format,
    &CATID_OPCCMDServer10_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(3) _CATID_OPCCMDServer10ProxyVtbl = 
{
    0,
    &IID_CATID_OPCCMDServer10,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy
};

const CInterfaceStubVtbl _CATID_OPCCMDServer10StubVtbl =
{
    &IID_CATID_OPCCMDServer10,
    &CATID_OPCCMDServer10_ServerInfo,
    3,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Standard interface: __MIDL_itf_OpcCmd_0000_0001, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IOPCComandCallback, ver. 0.0,
   GUID={0x3104B527,0x2016,0x442d,{0x96,0x96,0x12,0x75,0xDE,0x97,0x87,0x78}} */

#pragma code_seg(".orpc")
static const unsigned short IOPCComandCallback_FormatStringOffsetTable[] =
    {
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IOPCComandCallback_ProxyInfo =
    {
    &Object_StubDesc,
    OpcCmd__MIDL_ProcFormatString.Format,
    &IOPCComandCallback_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IOPCComandCallback_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    OpcCmd__MIDL_ProcFormatString.Format,
    &IOPCComandCallback_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(4) _IOPCComandCallbackProxyVtbl = 
{
    &IOPCComandCallback_ProxyInfo,
    &IID_IOPCComandCallback,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IOPCComandCallback::OnStateChange */
};

const CInterfaceStubVtbl _IOPCComandCallbackStubVtbl =
{
    &IID_IOPCComandCallback,
    &IOPCComandCallback_ServerInfo,
    4,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IOPCCommandInformation, ver. 0.0,
   GUID={0x3104B525,0x2016,0x442d,{0x96,0x96,0x12,0x75,0xDE,0x97,0x87,0x78}} */

#pragma code_seg(".orpc")
static const unsigned short IOPCCommandInformation_FormatStringOffsetTable[] =
    {
    62,
    106,
    150,
    212
    };

static const MIDL_STUBLESS_PROXY_INFO IOPCCommandInformation_ProxyInfo =
    {
    &Object_StubDesc,
    OpcCmd__MIDL_ProcFormatString.Format,
    &IOPCCommandInformation_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IOPCCommandInformation_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    OpcCmd__MIDL_ProcFormatString.Format,
    &IOPCCommandInformation_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(7) _IOPCCommandInformationProxyVtbl = 
{
    &IOPCCommandInformation_ProxyInfo,
    &IID_IOPCCommandInformation,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IOPCCommandInformation::QueryCapabilities */ ,
    (void *) (INT_PTR) -1 /* IOPCCommandInformation::QueryComands */ ,
    (void *) (INT_PTR) -1 /* IOPCCommandInformation::BrowseCommandTargets */ ,
    (void *) (INT_PTR) -1 /* IOPCCommandInformation::GetCommandDescription */
};

const CInterfaceStubVtbl _IOPCCommandInformationStubVtbl =
{
    &IID_IOPCCommandInformation,
    &IOPCCommandInformation_ServerInfo,
    7,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IOPCCommandExecution, ver. 0.0,
   GUID={0x3104B526,0x2016,0x442d,{0x96,0x96,0x12,0x75,0xDE,0x97,0x87,0x78}} */

#pragma code_seg(".orpc")
static const unsigned short IOPCCommandExecution_FormatStringOffsetTable[] =
    {
    262,
    348,
    452,
    514,
    552,
    626
    };

static const MIDL_STUBLESS_PROXY_INFO IOPCCommandExecution_ProxyInfo =
    {
    &Object_StubDesc,
    OpcCmd__MIDL_ProcFormatString.Format,
    &IOPCCommandExecution_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IOPCCommandExecution_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    OpcCmd__MIDL_ProcFormatString.Format,
    &IOPCCommandExecution_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(9) _IOPCCommandExecutionProxyVtbl = 
{
    &IOPCCommandExecution_ProxyInfo,
    &IID_IOPCCommandExecution,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IOPCCommandExecution::SyncInvoke */ ,
    (void *) (INT_PTR) -1 /* IOPCCommandExecution::AsyncInvoke */ ,
    (void *) (INT_PTR) -1 /* IOPCCommandExecution::Connect */ ,
    (void *) (INT_PTR) -1 /* IOPCCommandExecution::Disconnect */ ,
    (void *) (INT_PTR) -1 /* IOPCCommandExecution::QueryState */ ,
    (void *) (INT_PTR) -1 /* IOPCCommandExecution::Control */
};

const CInterfaceStubVtbl _IOPCCommandExecutionStubVtbl =
{
    &IID_IOPCCommandExecution,
    &IOPCCommandExecution_ServerInfo,
    9,
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
    OpcCmd__MIDL_TypeFormatString.Format,
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

const CInterfaceProxyVtbl * const _OpcCmd_ProxyVtblList[] = 
{
    ( CInterfaceProxyVtbl *) &_IOPCCommandInformationProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IOPCCommandExecutionProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IOPCComandCallbackProxyVtbl,
    ( CInterfaceProxyVtbl *) &_CATID_OPCCMDServer10ProxyVtbl,
    0
};

const CInterfaceStubVtbl * const _OpcCmd_StubVtblList[] = 
{
    ( CInterfaceStubVtbl *) &_IOPCCommandInformationStubVtbl,
    ( CInterfaceStubVtbl *) &_IOPCCommandExecutionStubVtbl,
    ( CInterfaceStubVtbl *) &_IOPCComandCallbackStubVtbl,
    ( CInterfaceStubVtbl *) &_CATID_OPCCMDServer10StubVtbl,
    0
};

PCInterfaceName const _OpcCmd_InterfaceNamesList[] = 
{
    "IOPCCommandInformation",
    "IOPCCommandExecution",
    "IOPCComandCallback",
    "CATID_OPCCMDServer10",
    0
};


#define _OpcCmd_CHECK_IID(n)	IID_GENERIC_CHECK_IID( _OpcCmd, pIID, n)

int __stdcall _OpcCmd_IID_Lookup( const IID * pIID, int * pIndex )
{
    IID_BS_LOOKUP_SETUP

    IID_BS_LOOKUP_INITIAL_TEST( _OpcCmd, 4, 2 )
    IID_BS_LOOKUP_NEXT_TEST( _OpcCmd, 1 )
    IID_BS_LOOKUP_RETURN_RESULT( _OpcCmd, 4, *pIndex )
    
}

const ExtendedProxyFileInfo OpcCmd_ProxyFileInfo = 
{
    (PCInterfaceProxyVtblList *) & _OpcCmd_ProxyVtblList,
    (PCInterfaceStubVtblList *) & _OpcCmd_StubVtblList,
    (const PCInterfaceName * ) & _OpcCmd_InterfaceNamesList,
    0, /* no delegation */
    & _OpcCmd_IID_Lookup, 
    4,
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

