#pragma once
#include <string>
#include <any>
#include "Source.h"

using namespace std;

class token : public source
{
public:
	token();
	
protected:
	string text;
	any value;
	void extract(void);
	char currentChar(void); //done
	char nextChar(void);	//done
	char peekChar(void);	//done

private:
	int lineNum;
	int position;
};