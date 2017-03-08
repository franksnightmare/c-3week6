#include "parser.ih"

double &Parser::log(double &value)
{
	if (value >= 0)
		log(value);
	else
		error("Value may not be negative");
		
	return value;
}
