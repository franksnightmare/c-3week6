#include "Parser.ih"

int Parser::getInt()
{
	return atol(d_scanner.matched().c_str());
}
