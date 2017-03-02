#include "Parser.ih"

STYPE__ Parser::getString()
{
	StringType *ptr = new StringType(d_scanner.matched());
	return std::move(STYPE__{ptr});
}
