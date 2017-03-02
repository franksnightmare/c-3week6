#include "Parser.ih"

void Parser::list()
{
    std::map<std::string, unsigned> ordered_map(d_symtab.begin(), d_symtab.end());
    
    for(auto it = ordered_map.begin(); it != ordered_map.end(); ++it)
	std::cout << it->first << " => " << it->second << '\n';
}
