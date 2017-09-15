#include "Parser.h"

token parser::currentToken(void)
{
	return scanner::currentToken();
}

token parser::nextToken(void)
{
	return scanner::nextToken();
}

