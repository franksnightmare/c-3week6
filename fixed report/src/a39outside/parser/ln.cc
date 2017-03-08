#include "parser.ih"

RuleValue &Parser::log(RuleValue &value)
{
	if (valueOf(value) >= 0)
		return RuleValue(log(valueOf(value)));
	else
		error("Value may not be negative");
}
