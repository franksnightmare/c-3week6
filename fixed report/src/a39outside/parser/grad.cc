#include "parser.ih"

double &Parser::grad(double &value)
{
	double value = 2 * &Parser::pi * value / 400;
	
	return value;
}
