#pragma once
#include <string>
#include <fstream>
#include <iostream>

using namespace std;

class source
{
public:
	source(string fileName);
	char currentChar(void) const;
	char nextChar(void);
	char peekChar(void); //temporary function for scanner
	void readFile(void);
	int getLineNum(void) const;
	int getCurrentPos(void) const;

protected:
	string getLine(void) const;
	int lineNum;
	int currentPos;
	string line;

private:
	ifstream file; //variable not used
	
};