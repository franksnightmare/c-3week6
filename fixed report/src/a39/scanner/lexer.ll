digits   [0-9]+
ident0   [a-zA-Z_]
identx   [a-zA-Z_0-9]

%%

[ \t]+
{digits}            	|
{digits}.{digits}   	return Parser::NUMBER;

{ident0}{identx}    	return Parser::IDENT;

\|?e\^{digits}\|?		return Parser::NUMBER;

\|?e+{digits}\|?		return Parser::NUMBER;

e						return Parser::NUMBER;

LN						return Parser::NUMBER;



ln						return Parser::LN;
sin						return Parser::SIN;
asin					return Parser::ASIN;
sqrt					return Parser::SQRT;
abs						return Parser::ABS;

\n|.                	return matched()[0];
