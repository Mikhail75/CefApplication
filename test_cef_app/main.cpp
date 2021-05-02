#include "TestCefApplication.h"
#include "RunCefApp.h"
#include "source/CCefAppEnvironment.h"

using namespace std;
using namespace cefapp;

namespace
{
	
pICefAppEnvironment CreateEnvironment()
{
	return make_shared<CCefAppEnvironment>(
		R"(file://J:\@temp\CefApplication\x64\Debug\index.html)"
	);
}
	
}

int APIENTRY wWinMain(_In_ HINSTANCE hInstance, _In_opt_ HINSTANCE hPrevInstance, _In_ LPWSTR lpCmdLine, _In_ int nCmdShow)
{
	UNREFERENCED_PARAMETER(hPrevInstance);
	UNREFERENCED_PARAMETER(lpCmdLine);
	UNREFERENCED_PARAMETER(nCmdShow);

	return RunCefApp(
		hInstance, move(CreateEnvironment())
	);
}