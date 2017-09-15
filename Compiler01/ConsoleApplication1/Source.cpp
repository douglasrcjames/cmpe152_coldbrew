#include "Source.h"

source::source(string fileName)
{
	line = "";
	lineNum = 0;
	currentPos = 0;

	/*Attempts to open the file with name 'fileName'*/
	// ****** REMEMBER TO CLOSE LATER *******
	try
	{
		file.open(fileName);
	}
	catch (const ifstream::failure& e)
	{
		cout << "Failed to open " << fileName << endl;
	}
}

/*return current character without changing current position*/
char source::currentChar(void) const
{
	return '0';
}

/*returns the next char and increment the current position*/
char source::nextChar(void)
{
	this->currentPos++;
	return '0';
}

/*temporary function for token.cpp to peek the next char*/
char source::peekChar(void)
{
	return '0' + 1;
}

/*Returns variable of the line number*/
int source::getLineNum(void) const
{
	return this->lineNum;
}

/*Return variable of the current position*/
int source::getCurrentPos(void) const
{
	return this->currentPos;
}

string source::getLine(void) const
{
	return this->line;
}

void source::readFile(void)
{
	while (getline(file, line))
	{
		lineNum++;
	}
}

/*
Reads the file and sends the string to the token class
*/
/*void scanner::scanFile(string fileName)
{
token toke;
ifstream file;

try {
file.open("javatest.in");
while (getline(file, line))
{

}
}
catch (const ifstream::failure& e)
{
cout << "Cannot find file" << endl;
}
}*/