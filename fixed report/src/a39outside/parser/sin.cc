#include "parser.ih"

RuleValue &Parser::sin(RuleValue &value)
{
	double transform = angleTransform();
	return RuleValue(sin(valueOf(transform * value)));
}
