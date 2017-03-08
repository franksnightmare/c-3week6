#include "Parser.ih"

double Parser::getDouble()
{
	return atof(d_scanner.matched().c_str());
}
