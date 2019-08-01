// ATLCallDll.cpp: WinMain 的实现


#include "stdafx.h"
#include "resource.h"
#include "ATLCallDll_i.h"


using namespace ATL;

#include <stdio.h>

class CATLCallDllModule : public ATL::CAtlServiceModuleT< CATLCallDllModule, IDS_SERVICENAME >
{
public :
	DECLARE_LIBID(LIBID_ATLCallDllLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_ATLCALLDLL, "{93484ce3-a10a-44f6-a9f2-61648eca7d22}")
	HRESULT InitializeSecurity() throw()
	{
		// TODO : 调用 CoInitializeSecurity 并为服务提供适当的安全设置
		// 建议 - PKT 级别的身份验证、
		// RPC_C_IMP_LEVEL_IDENTIFY 的模拟级别
		//以及适当的非 NULL 安全描述符。

		return S_OK;
	}
};

CATLCallDllModule _AtlModule;



//
extern "C" int WINAPI _tWinMain(HINSTANCE /*hInstance*/, HINSTANCE /*hPrevInstance*/,
								LPTSTR /*lpCmdLine*/, int nShowCmd)
{
	return _AtlModule.WinMain(nShowCmd);
}

