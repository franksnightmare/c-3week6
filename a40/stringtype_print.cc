#include "polytype.ih"

ostream &StringType::print(ostream &out)
{
	return out << d_value << '\n';
}
