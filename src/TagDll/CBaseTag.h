#ifndef TAG_DLL_CBASETAG_H_
#define TAG_DLL_CBASETAG_H_

#ifdef TAGDLL_EXPORTS
#define TG_API _declspec(dllexport)
#else
#define TG_API _declspec(dllimport)
#endif

#include <atlimage.h>

/**
 * @brief		ShowMsg					call messagebox	
 * @param 		sTitle					title
 * @param 		sContent				content
 * @return 		void			
 */
extern "C" TG_API void ShowMsgA(const char *sTitle, const char *sContent);
extern "C" TG_API void ShowMsgW(const wchar_t *sTitle, const wchar_t *sContent);

#ifdef _UNICODE
#define ShowMsg	ShowMsgW
#else
#define ShowMsg	ShowMsgA
#endif // _UNICODE


#endif //! TAG_DLL_CBASETAG_H_
