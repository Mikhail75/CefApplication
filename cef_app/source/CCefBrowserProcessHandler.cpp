#include "CCefBrowserProcessHandler.h"

#include "include/wrapper/cef_helpers.h"
#include "cefclient/CCefClient.h"

CCefBrowserProcessHandler::CCefBrowserProcessHandler(const cefapp::pICefAppEnvironment& environment)
	: m_environment(environment)
{
}

void CCefBrowserProcessHandler::OnContextInitialized()
{
	CEF_REQUIRE_UI_THREAD();
	
	CefWindowInfo windowInfo;
	windowInfo.SetAsPopup(NULL, "Cef Application");

	CefRefPtr<CCefClient> browserHandler(new CCefClient);

	CefBrowserSettings browserSettings;
	browserSettings.web_security = STATE_DISABLED;

	CefBrowserHost::CreateBrowserSync(windowInfo, browserHandler, m_environment->HtmlPath(), browserSettings, nullptr, nullptr);
}
