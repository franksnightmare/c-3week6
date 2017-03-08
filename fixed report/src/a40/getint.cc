#include "Parser.ih"

STYPE__ Parser::getInt()
{
	int ret = atol(d_scanner.matched().c_str());
	
	return std::move(STYPE__{new IntType(ret)});
}
