#pragma once

#include "ICefAppEnvironment.h"

class CCefAppEnvironment : public cefapp::ICefAppEnvironment
{
public:
	CCefAppEnvironment(const std::string &htmlPath);
	
	std::string HtmlPath() const override;

private:
	std::string m_htmlPath;
};