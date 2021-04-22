#pragma once

#include "include/cef_app.h"

class CBrowserContextMenuHandler : public CefContextMenuHandler
{
public:
	void OnBeforeContextMenu(CefRefPtr<CefBrowser> browser, CefRefPtr<CefFrame> frame, CefRefPtr<CefContextMenuParams> params, CefRefPtr<CefMenuModel> model) override;
	bool OnContextMenuCommand(CefRefPtr<CefBrowser> browser, CefRefPtr<CefFrame> frame, CefRefPtr<CefContextMenuParams> params, int command_id, EventFlags event_flags) override;

private:
	IMPLEMENT_REFCOUNTING(CBrowserContextMenuHandler);
};
