#include "CCefAppEnvironment.h"

using namespace std;

CCefAppEnvironment::CCefAppEnvironment(const string &htmlPath)
	: m_htmlPath(htmlPath)
{
}

string CCefAppEnvironment::HtmlPath() const
{
	return m_htmlPath;
}