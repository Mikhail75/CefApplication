#include "CBrowserContextMenuHandler.h"
#include "include/wrapper/cef_helpers.h"

namespace
{

enum ContextMenuIDS
{
	CONTEXT_MENU_SHOW_DEVTOOLS = MENU_ID_USER_FIRST,
	CONTEXT_MENU_HIDE_DEVTOOLS
};

void ShowDevTools(CefRefPtr<CefBrowser> browser)
{
	if (!browser->GetHost()->HasDevTools())
	{
		CefWindowInfo cefWindowInfo;
		cefWindowInfo.SetAsPopup(NULL, "DevTools");

		browser->GetHost()->ShowDevTools(cefWindowInfo, CefRefPtr<CefClient>(), CefBrowserSettings(), CefPoint());
	}
}

void HideDevTools(CefRefPtr<CefBrowser> browser)
{
	if (browser->GetHost()->HasDevTools())
	{
		browser->GetHost()->CloseDevTools();
	}
}
	
}

void CBrowserContextMenuHandler::OnBeforeContextMenu(CefRefPtr<CefBrowser> browser, CefRefPtr<CefFrame> frame, CefRefPtr<CefContextMenuParams> params, CefRefPtr<CefMenuModel> model)
{
	model->AddSeparator();

	model->AddItem(CONTEXT_MENU_SHOW_DEVTOOLS, "&Show DevTools");
	model->AddItem(CONTEXT_MENU_HIDE_DEVTOOLS, "H&ide DevTools");
}

bool CBrowserContextMenuHandler::OnContextMenuCommand(CefRefPtr<CefBrowser> browser, CefRefPtr<CefFrame> frame, CefRefPtr<CefContextMenuParams> params, int command_id, EventFlags event_flags)
{
	CEF_REQUIRE_UI_THREAD();

	switch (command_id)
	{
		case CONTEXT_MENU_SHOW_DEVTOOLS:
			ShowDevTools(browser);
			return true;
		case CONTEXT_MENU_HIDE_DEVTOOLS:
			HideDevTools(browser);
			return true;
		default:
			return false;
	}
}