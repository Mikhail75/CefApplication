#pragma once
#include "include\cef_browser_process_handler.h"
#include "ICefAppEnvironment.h"

class CCefBrowserProcessHandler : public CefBrowserProcessHandler
{
public:
	CCefBrowserProcessHandler(const cefapp::pICefAppEnvironment &environment);
	
	void OnContextInitialized() override;
	
private:
	IMPLEMENT_REFCOUNTING(CCefBrowserProcessHandler);

	cefapp::pICefAppEnvironment m_environment;
};