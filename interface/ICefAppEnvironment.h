#pragma once

#include <string>

namespace cefapp
{

class ICefAppEnvironment
{
public:
	virtual ~ICefAppEnvironment() = default;

	virtual std::string HtmlPath() const = 0;
};

using pICefAppEnvironment = std::shared_ptr<ICefAppEnvironment>;
	
} // End of namespace cefapp