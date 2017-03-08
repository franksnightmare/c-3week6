#include "parser.ih"

double Parser::constant()
{
	string constant(parser.matched());
	if (constant.compare("e") == 0)
		return RuleValue(Parser::e);
	if (constant.compare("pi") == 0)
		return RuleValue(Parser::pi);
	return 0;
}
