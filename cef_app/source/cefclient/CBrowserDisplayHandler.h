#pragma once

#include "include/cef_app.h"

class CBrowserDisplayHandler : public CefDisplayHandler
{
public:
	void OnTitleChange(CefRefPtr<CefBrowser> browser, const CefString& title) override;

private:
	IMPLEMENT_REFCOUNTING(CBrowserDisplayHandler);
};