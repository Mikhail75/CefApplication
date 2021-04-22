#include "CCefClient.h"
#include "CBrowserContextMenuHandler.h"
#include "CBrowserDisplayHandler.h"
#include "CBrowserLifeSpanHandler.h"
#include "CBrowserLoadHandler.h"

CCefClient::CCefClient()
	: m_contextMenuHandler(new CBrowserContextMenuHandler)
	, m_displayHandler(new CBrowserDisplayHandler)
	, m_lifeSpanHandler(new CBrowserLifeSpanHandler)
	, m_loadHandler(new CBrowserLoadHandler)
{
}

CefRefPtr<CefContextMenuHandler> CCefClient::GetContextMenuHandler()
{
	return m_contextMenuHandler;
}

CefRefPtr<CefDisplayHandler> CCefClient::GetDisplayHandler()
{
	return m_displayHandler;
}

CefRefPtr<CefLifeSpanHandler> CCefClient::GetLifeSpanHandler()
{
	return m_lifeSpanHandler;
}

CefRefPtr<CefLoadHandler> CCefClient::GetLoadHandler()
{
	return m_loadHandler;
}