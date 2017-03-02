#include "parser.ih"

RuleValue &Parser::rad(RuleValue &grad)
{
	return RuleValue((400 * grad) / (2 * pi));
}
