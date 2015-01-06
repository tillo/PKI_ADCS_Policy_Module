/*
 ============================================================================
 Name        : policy.cpp
 Author      : Gordon Young
 Version     : 6.1
 Copyright   : ©2011 Wells Fargo Bank, n.a.
 File:       pch.cpp
 Contents:   Cert Server precompiled header
 Description : Cert Server Policy Module implementation
 ============================================================================
 */

#include <windows.h>

#pragma warning (disable:4068) // disable warning for unknown pragma for SDK

#include <atlbase.h>

//You may derive a class from CComModule and use it if you want to override
//something, but do not change the name of _Module
extern CComModule _Module;

#include <atlcom.h>
#include <certsrv.h>
#include <strsafe.h>

#define wszCLASS_CERTPOLICYSAMPLEPREFIX TEXT("CertAuthority_Sample") 

#define wszCLASS_CERTPOLICYSAMPLE wszCLASS_CERTPOLICYSAMPLEPREFIX  wszCERTPOLICYMODULE_POSTFIX

#define wszCLASS_CERTMANAGEPOLICYMODULESAMPLE wszCLASS_CERTPOLICYSAMPLEPREFIX wszCERTMANAGEPOLICY_POSTFIX

#define wsz_SAMPLE_NAME           L"WFB Custom Policy Module"
#define wsz_SAMPLE_DESCRIPTION    L"WFB Custom Policy Module"
#define wsz_SAMPLE_COPYRIGHT      L"(c)2011 Wells Fargo Bank, n.a."
#define wsz_SAMPLE_FILEVER        L"v 1.0"
#define wsz_SAMPLE_PRODUCTVER     L"v 6.1"

#pragma hdrstop

