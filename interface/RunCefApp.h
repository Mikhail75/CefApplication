#pragma once

#include <windows.h>
#include "ICefAppEnvironment.h"

namespace cefapp
{

int RunCefApp(HINSTANCE hInstance, const pICefAppEnvironment &context);

}