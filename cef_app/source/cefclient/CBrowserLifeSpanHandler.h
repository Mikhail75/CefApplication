#pragma once

#include "include/cef_app.h"

class CBrowserLifeSpanHandler : public CefLifeSpanHandler
{
public:
	void OnAfterCreated(CefRefPtr<CefBrowser> browser) override;
	bool DoClose(CefRefPtr<CefBrowser> browser) override;
	void OnBeforeClose(CefRefPtr<CefBrowser> browser) override;

private:
	IMPLEMENT_REFCOUNTING(CBrowserLifeSpanHandler);
};