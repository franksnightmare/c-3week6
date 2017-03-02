#include "parser.ih"

RuleValue &Parser::sin(RuleValue &value)
{
	return RuleValue(sin(valueOf(value)));
}
