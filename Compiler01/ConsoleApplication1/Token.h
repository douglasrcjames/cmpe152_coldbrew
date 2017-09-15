#pragma once
#include <string>
#include <any>
#include "Source.h"

using namespace std;

enum class tokentype
{
    // subclass of what token can be
};

class token : public source
{
public:
	token();
	
	virtual ~token(); // destructor
	
	tokentype get_type() const; //return the token type
	
	string get_text() const; // return token text
	
	int get_line_num() const; //return the source line #
	
	int get_position() const; // return position
	
	
	
	
	
protected:
	string text;
	any value;
	void extract(void);
	char currentChar(void); //done
	char nextChar(void);	//done
	char peekChar(void);	//done
	
	tokentype type; // language specific token
	int line_number; // line # of tokens source line
	int position; // position of 1st character token

private:
	int lineNum;
	int position;
};
