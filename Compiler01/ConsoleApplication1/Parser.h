#pragma once
#include "Token.h"
#include "Scanner.h"
#include <any> //place holder for iCode and SymTab

class parser : public scanner
{
public:
	virtual void parse(void);
	virtual int getErrorCount(void);
	token currentToken(void);			//done
	token nextToken(void);				//done
protected:
	any iCode; //temporary type
	any symTab; //temporary type, symbol table struct/class

};