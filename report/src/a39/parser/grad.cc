#include "parser.ih"

RuleValue &Parser::grad(RuleValue &value)
{
	return RuleValue(2 * Parser::pi * valueOf(value) / 400);
}
