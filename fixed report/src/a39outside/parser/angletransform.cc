#include "parser.ih"

double &Parser::angleTransform()
{
	switch(d_angleMode):
	{
		case(DEGREES):
			return Parser::pi / 180.0;
		case(GRAD):
			return Parser::pi / 200.0;
		default:
			return 1;
	}
}
