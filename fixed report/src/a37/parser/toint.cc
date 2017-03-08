#include "parser.ih"
#include <cmath>

int Parser::toInt(RuleValue const &rv)
{
    return std::round(valueOf(rv));
}
