%%

[0-9]+	return ParserBase::Tokens__::INT;
QUIT	return ParserBase::Tokens__::QUIT;
[\t ]	// ignore
\n		return matched()[0];
.		return matched()[0];
