#include "parser.ih"

double &Parser::asin(double &value)
{
	double transform = angleTransform();
	if (value <= 1 || value >= -1)
		return asin(value) / transform;
	else
		error("Value out of interval -1 < value < 1");
	
	return value;
}
