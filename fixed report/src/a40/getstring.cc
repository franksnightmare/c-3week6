#include "Parser.ih"

string Parser::getString()
{
	return d_scanner.matched();
}
