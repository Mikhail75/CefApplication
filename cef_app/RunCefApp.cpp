#include "pch.h"
#include "include/cef_app.h"
#include "source/CCefApplication.h"
#include "ICefAppEnvironment.h"

namespace cefapp
{
	
int RunCefApp(HINSTANCE hInstance, const pICefAppEnvironment &environment)
{
	CefEnableHighDPISupport();

	void* sandboxInfo = nullptr;
	CefMainArgs cefMainArgs(hInstance);

	if (int exitCode = CefExecuteProcess(cefMainArgs, nullptr, sandboxInfo); exitCode >= 0)
	{
		return exitCode;
	}

	CefSettings settings;
	CefRefPtr<CCefApplication> app(new CCefApplication(environment));

	settings.no_sandbox = true;

	CefInitialize(cefMainArgs, settings, app.get(), sandboxInfo);
	CefRunMessageLoop();
	CefShutdown();

	return 0;
}
	
} // End of namespace cefapp