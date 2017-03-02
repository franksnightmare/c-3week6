#include "parser.ih"

double &Parser::asin(double &value)
{
	if (value <= 1 || value >= -1)
		asin(value);
	else
		error("Value (radians) out of interval -1 < value < 1");
	
	return value;
}
