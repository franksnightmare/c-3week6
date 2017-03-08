#include "parser.ih"

RuleValue &Parser::exp(RuleValue &value)
{
	return RuleValue(Parser::e ^ valueOf(value));
}
