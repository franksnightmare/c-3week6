#include "polytype.ih"

ostream &DoubleType::print(ostream &out)
{
	return out << d_value << '\n';
}
