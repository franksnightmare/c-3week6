#include "parser.ih"

RuleValue &Parser::deg(RuleValue &value)
{
	return RuleValue(2 * Parser::pi * valueOf(value) / 360);
}
