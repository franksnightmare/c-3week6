#include "parser.ih"

double &Parser::rad(double &deg)
{
	double value = (360 * deg) / (2 * &Parser::pi);
	
	return value;
}
