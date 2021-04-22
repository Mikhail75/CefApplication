#include "CCefApplication.h"

CCefApplication::CCefApplication(const cefapp::pICefAppEnvironment &environment)
	: m_handler(new CCefBrowserProcessHandler(environment))
	, m_environment(environment)
{
}

CefRefPtr<CefBrowserProcessHandler> CCefApplication::GetBrowserProcessHandler()
{
	return m_handler;
}