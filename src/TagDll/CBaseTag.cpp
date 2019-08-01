#include "CBaseTag.h"
#include <windows.h>


TG_API void ShowMsgA(const char * sTitle, const char * sContent)
{
	::MessageBoxA(NULL, sContent, sTitle, MB_OK);
}

TG_API void ShowMsgW(const wchar_t * sTitle, const wchar_t * sContent)
{
	::MessageBox(NULL, sContent, sTitle, MB_OK);
}
