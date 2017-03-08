#include "parser.ih"

double &Parser::deg(double &value)
{
	double value = 2 * &Parser::pi * value / 360;

	return value;
}
