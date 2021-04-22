#include "CBrowserLifeSpanHandler.h"
#include "include/wrapper/cef_helpers.h"

void CBrowserLifeSpanHandler::OnAfterCreated(CefRefPtr<CefBrowser> browser)
{
	CEF_REQUIRE_UI_THREAD();
}

bool CBrowserLifeSpanHandler::DoClose(CefRefPtr<CefBrowser> browser)
{
	CEF_REQUIRE_UI_THREAD();
	
	return false;
}

void CBrowserLifeSpanHandler::OnBeforeClose(CefRefPtr<CefBrowser> browser)
{
	CEF_REQUIRE_UI_THREAD();

	CefQuitMessageLoop();
}