#include "parser.ih"
#include <cmath>

int Parser::toInt(RuleValue rv)
{
    return std::round(valueOf(rv));
}
