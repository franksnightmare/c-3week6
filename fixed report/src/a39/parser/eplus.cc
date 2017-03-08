#include "parser.ih"

RuleValue &Parser::eplus(RuleValue &value)
{
	return RuleValue(Parser::e + valueOf(value));
}
