#include "parser.ih"

double &Parser::rad(double &grad)
{
	double value = (400 * grad) / (2 * pi);
	
	return value;
}
