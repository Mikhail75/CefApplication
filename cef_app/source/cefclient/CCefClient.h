#pragma once

#include "include/cef_client.h"

class CCefClient : public CefClient
{
public:
	CCefClient();

	CefRefPtr<CefContextMenuHandler> GetContextMenuHandler() override;
	CefRefPtr<CefDisplayHandler> GetDisplayHandler() override;
	CefRefPtr<CefLifeSpanHandler> GetLifeSpanHandler() override;
	CefRefPtr<CefLoadHandler> GetLoadHandler() override;

private:
	IMPLEMENT_REFCOUNTING(CCefClient);

	CefRefPtr<CefContextMenuHandler> m_contextMenuHandler;
	CefRefPtr<CefDisplayHandler> m_displayHandler;
	CefRefPtr<CefLifeSpanHandler> m_lifeSpanHandler;
	CefRefPtr<CefLoadHandler> m_loadHandler;
};