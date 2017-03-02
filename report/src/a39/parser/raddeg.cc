#include "parser.ih"

RuleValue &Parser::rad(RuleValue &deg)
{
	return RuleValue((360 * deg) / (2 * Parser::pi));
}
