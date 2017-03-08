#include "parser.ih"

RuleValue &Parser::asin(RuleValue &value)
{
	if (valueOf(value) <= 1 || valueOf(value) >= -1)
		return RuleValue(asin(valueOf(value)));
	else
		error("Value (radians) out of interval -1 < value < 1");
}
