#pragma once
#include <string>
#include <fstream>
#include <iostream>
#include "Token.h"

using namespace std;

//change functions into virtual for scanner

class scanner :public source
{
Public: 
scanner(source *source); // default constructor

virtual ~scanner(); // destructor

token *currentToken(); // returns current token

token *nexttoken(token *prevToken) throw (string); // returns previous token, and throws a string if error happens

char currentChar() throw (string); // return current character, throw string if error

char nextChar() throw (string); // return next character, throw string if error



protected:
	virtual token currentToken(void);
	virtual token nextToken(void);
	virtual token prevToken(void);
	token extractToken(void);
	char currentChar(void);
	char nextChar(void);
};
