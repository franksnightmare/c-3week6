#include "polytype.ih"

ostream &IntType::print(ostream &out)
{
	return out << d_value << '\n';
}
