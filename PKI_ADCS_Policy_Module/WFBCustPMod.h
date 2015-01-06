

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 7.00.0555 */
/* at Wed Jun 08 12:14:39 2011
 */
/* Compiler settings for WFBCustPMod.idl:
    Oicf, W1, Zp8, env=Win64 (32b run), target_arch=AMD64 7.00.0555 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif // __RPCNDR_H_VERSION__


#ifndef __WFBCustPMod_h__
#define __WFBCustPMod_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __CWFBCustCertPolicy_FWD_DEFINED__
#define __CWFBCustCertPolicy_FWD_DEFINED__

#ifdef __cplusplus
typedef class CWFBCustCertPolicy CWFBCustCertPolicy;
#else
typedef struct CWFBCustCertPolicy CWFBCustCertPolicy;
#endif /* __cplusplus */

#endif 	/* __CWFBCustCertPolicy_FWD_DEFINED__ */


#ifndef __CWFBCustCertManagePolicy_FWD_DEFINED__
#define __CWFBCustCertManagePolicy_FWD_DEFINED__

#ifdef __cplusplus
typedef class CWFBCustCertManagePolicy CWFBCustCertManagePolicy;
#else
typedef struct CWFBCustCertManagePolicy CWFBCustCertManagePolicy;
#endif /* __cplusplus */

#endif 	/* __CWFBCustCertManagePolicy_FWD_DEFINED__ */


/* header files for imported files */
#include "wtypes.h"
#include "certpol.h"

#ifdef __cplusplus
extern "C"{
#endif 



#ifndef __CERTPOLICYSAMPLELib_LIBRARY_DEFINED__
#define __CERTPOLICYSAMPLELib_LIBRARY_DEFINED__

/* library CERTPOLICYSAMPLELib */
/* [helpstring][version][uuid] */ 


EXTERN_C const IID LIBID_CERTPOLICYSAMPLELib;

EXTERN_C const CLSID CLSID_CWFBCustCertPolicy;

#ifdef __cplusplus

class DECLSPEC_UUID("98f87410-c2c8-11d2-b313-00c04f79dc72")
CWFBCustCertPolicy;
#endif

EXTERN_C const CLSID CLSID_CWFBCustCertManagePolicy;

#ifdef __cplusplus

class DECLSPEC_UUID("98567a30-c2c8-11d2-b313-00c04f79dc72")
CWFBCustCertManagePolicy;
#endif
#endif /* __CERTPOLICYSAMPLELib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


