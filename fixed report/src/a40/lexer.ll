NUM		[0-9]

%%

{NUM}+          return ParserBase::Tokens__::INT;
{NUM}*"."{NUM}+ return ParserBase::Tokens__::DOUBLE;
QUIT            return ParserBase::Tokens__::QUIT;
[\t ]           // ignore
\n              return matched()[0];
.+              return ParserBase::Tokens__::STRING;
