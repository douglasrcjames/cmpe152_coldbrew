#include "Token.h"

/*Need default constructor for superclass source*/
token::token() 
{
	text = "";
	value = NULL;
	lineNum = 0;
	position = 0;
}


token::~token() // destructor
{
	
}


tokentype token::get_type()// const {return type;}

string token::get_text()// const {return text;}
	
int token::get_line_num() //const

int token:: get_position()

	
	
	

/*Calls the superclass 'source' for its currentChar function*/
char token::currentChar()
{
	return source::currentChar();
}

/*Calls the superclass 'source' for its nextChar function*/
char token::nextChar()
{
	return source::nextChar();
}

/*Calls the superclass 'source' for its peekChar function*/
char token::peekChar()
{
	return source::peekChar();
}
