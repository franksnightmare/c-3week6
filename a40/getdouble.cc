#include "Parser.ih"

STYPE__ Parser::getDouble()
{
	double ret = atof(d_scanner.matched().c_str());
	
	return std::move(STYPE__{new DoubleType(ret)});
}
