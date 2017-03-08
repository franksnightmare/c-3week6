#include "parser.ih"

RuleValue &Parser::sqrt(RuleValue &value)
{
	if (valueOf(value) >= 0)
		return RuleValue(sqrt(valueOf(value)));
	else
		error("Value may not be negative");
}
