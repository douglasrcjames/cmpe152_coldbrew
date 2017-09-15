#pragma once
#include <string>
#include <fstream>
#include <iostream>
#include "Token.h"

using namespace std;

//change functions into virtual for scanner

class scanner : public source
{
protected:
	virtual token currentToken(void);
	virtual token nextToken(void);
	token extractToken(void);
	char currentChar(void);
	char nextChar(void);
};