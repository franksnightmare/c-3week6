#include "parser.ih"

double &Parser::sin(double &value)
{
	if (value <= 1 || value >= -1)
		sin(value);
	else
		error("Value (radians) out of interval -1 < value < 1");

	return value;
}
