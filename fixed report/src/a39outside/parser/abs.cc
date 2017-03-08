#include "parser.ih"

RuleValue &Parser::abs(RuleValue &value)
{
	return RuleValue(abs(valueOf(value)));
}
