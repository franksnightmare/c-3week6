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

\|?SIN\|?				return Parser::NUMBER;

\|?ASIN\|?				return Parser::NUMBER;

\|?SQRT\|?				return Parser::NUMBER;

\n|.                	return matched()[0];
