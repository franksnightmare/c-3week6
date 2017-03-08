digits   [0-9]+
ident0   [a-zA-Z_]
identx   [a-zA-Z_0-9]

%%

[ \t]+					// ignore

{digits}            			|
{digits}?.{digits}E-?{digits}	|
{digits}?.{digits}   			return Parser::NUMBER;

e|pi					return Parser::CONST;
ln						return Parser::LN;
sin						return Parser::SIN;
asin					return Parser::ASIN;
sqrt					return Parser::SQRT;
deg						return Parser::DEG;
grad					return Parser::GRAD;
rad						return Parser::RAD;

{ident0}{identx}    	return Parser::IDENT;

// Includes all operators and parentheses
\n|.                	return matched()[0];
