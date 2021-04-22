#pragma once

#include "include/cef_app.h"
#include "CCefBrowserProcessHandler.h"
#include "ICefAppEnvironment.h"

class CCefApplication : public CefApp
{
public:
	CCefApplication(const cefapp::pICefAppEnvironment &environment);
	
	CefRefPtr<CefBrowserProcessHandler> GetBrowserProcessHandler() override;

private:
	IMPLEMENT_REFCOUNTING(CCefApplication);

	CefRefPtr<CefBrowserProcessHandler> m_handler;
	cefapp::pICefAppEnvironment m_environment;
};