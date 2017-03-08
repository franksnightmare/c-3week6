#include "parser.ih"

RuleValue &Parser::asin(RuleValue &value)
{
	double transform = angleTransform();
	if (valueOf(value) <= 1 || valueOf(value) >= -1)
		return RuleValue(asin(valueOf(value)) / transform);
	else
		error("Value (radians) out of interval -1 < value < 1");
}
