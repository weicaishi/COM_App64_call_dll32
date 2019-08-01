

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0622 */
/* at Tue Jan 19 11:14:07 2038
 */
/* Compiler settings for ATLCallDll.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.01.0622 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */



/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __ATLCallDll_i_h__
#define __ATLCallDll_i_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IATLDllTagObject_FWD_DEFINED__
#define __IATLDllTagObject_FWD_DEFINED__
typedef interface IATLDllTagObject IATLDllTagObject;

#endif 	/* __IATLDllTagObject_FWD_DEFINED__ */


#ifndef __ATLDllTagObject_FWD_DEFINED__
#define __ATLDllTagObject_FWD_DEFINED__

#ifdef __cplusplus
typedef class ATLDllTagObject ATLDllTagObject;
#else
typedef struct ATLDllTagObject ATLDllTagObject;
#endif /* __cplusplus */

#endif 	/* __ATLDllTagObject_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"
#include "shobjidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __IATLDllTagObject_INTERFACE_DEFINED__
#define __IATLDllTagObject_INTERFACE_DEFINED__

/* interface IATLDllTagObject */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IATLDllTagObject;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("bc75dd62-99f9-45b8-9b75-4806cf909b9e")
    IATLDllTagObject : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE CallTag( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IATLDllTagObjectVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IATLDllTagObject * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IATLDllTagObject * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IATLDllTagObject * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IATLDllTagObject * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IATLDllTagObject * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IATLDllTagObject * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IATLDllTagObject * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *CallTag )( 
            IATLDllTagObject * This);
        
        END_INTERFACE
    } IATLDllTagObjectVtbl;

    interface IATLDllTagObject
    {
        CONST_VTBL struct IATLDllTagObjectVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IATLDllTagObject_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IATLDllTagObject_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IATLDllTagObject_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IATLDllTagObject_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IATLDllTagObject_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IATLDllTagObject_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IATLDllTagObject_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IATLDllTagObject_CallTag(This)	\
    ( (This)->lpVtbl -> CallTag(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IATLDllTagObject_INTERFACE_DEFINED__ */



#ifndef __ATLCallDllLib_LIBRARY_DEFINED__
#define __ATLCallDllLib_LIBRARY_DEFINED__

/* library ATLCallDllLib */
/* [version][uuid] */ 


EXTERN_C const IID LIBID_ATLCallDllLib;

EXTERN_C const CLSID CLSID_ATLDllTagObject;

#ifdef __cplusplus

class DECLSPEC_UUID("4fff4645-e64f-4490-936a-adce2046c72f")
ATLDllTagObject;
#endif
#endif /* __ATLCallDllLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


