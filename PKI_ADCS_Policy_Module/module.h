/*
 ============================================================================
 Name        : policy.cpp
 Author      : Gordon Young
 Version     : 6.1
 Copyright   : ©2011 Wells Fargo Bank, n.a.
 File:       module.h
 Contents:    CWFBCustCertManagePolicy definition
 Description : Cert Server Policy Module implementation
 ============================================================================
 */

#include "WFBCustPMod.h"
#include "resource.h"       // main symbols


class CWFBCustCertManagePolicy: 
    public CComDualImpl<ICertManageModule, &IID_ICertManageModule, &LIBID_CERTPOLICYSAMPLELib>, 
    public CComObjectRoot,
    public CComCoClass<CWFBCustCertManagePolicy, &CLSID_CWFBCustCertManagePolicy>
{
public:
    CWFBCustCertManagePolicy() {}
    ~CWFBCustCertManagePolicy() {}

BEGIN_COM_MAP(CWFBCustCertManagePolicy)
    COM_INTERFACE_ENTRY(IDispatch)
    COM_INTERFACE_ENTRY(ICertManageModule)
END_COM_MAP()

DECLARE_NOT_AGGREGATABLE(CWFBCustCertManagePolicy) 
// Remove the comment from the line above if you don't want your object to 
// support aggregation.  The default is to support it

// UNDONE UNDONE
DECLARE_REGISTRY(
    CWFBCustCertManagePolicy,
    wszCLASS_CERTMANAGEPOLICYMODULESAMPLE TEXT(".1"),
    wszCLASS_CERTMANAGEPOLICYMODULESAMPLE,
    IDS_CERTMANAGEPOLICYMODULE_DESC,    
    THREADFLAGS_BOTH)

// ICertManageModule
public:
    STDMETHOD (GetProperty) (
            /* [in] */ const BSTR strConfig,
            /* [in] */ BSTR strStorageLocation,
            /* [in] */ BSTR strPropertyName,
            /* [in] */ LONG dwFlags,
            /* [retval][out] */ VARIANT __RPC_FAR *pvarProperty);
        
    STDMETHOD (SetProperty)(
            /* [in] */ const BSTR strConfig,
            /* [in] */ BSTR strStorageLocation,
            /* [in] */ BSTR strPropertyName,
            /* [in] */ LONG dwFlags,
            /* [in] */ VARIANT const __RPC_FAR *pvarProperty);
        
    STDMETHOD (Configure)( 
            /* [in] */ const BSTR strConfig,
            /* [in] */ BSTR strStorageLocation,
            /* [in] */ LONG dwFlags);
};
