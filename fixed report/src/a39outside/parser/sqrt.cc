#include "parser.ih"

double &Parser::sqrt(double &value)
{
	if (value >= 0)
		sqrt(value);
	else
		error("Value may not be negative");
	
	return value;
}
