#include<iostream>
#include "mystring.h"
#include <cstring>
#include<string>
mystring::mystring()
	: str{ nullptr } {
	str = new char[1];
	*str = '\0';
}

mystring::mystring(const char* s)
	:str(nullptr) {
	if (s == nullptr) {
		str = new char[1];
		*str = '\0';
	}
	else {
		str = new char[std::strlen(s) + 1];
		std::strcpy(str, s);
	}
}
mystring::mystring(const mystring& source)
	:str(nullptr)
{
	str = new char[std::strlen(source.str) + 1];
	std::strcpy(str, source.str);
}

mystring::~mystring() {
	delete[]str;
}
void mystring::display() const {
	std::cout << str << ":" << get_length() << std::endl;

}

int mystring::get_length()const { return std::strlen(str); }

const char* mystring::get_str()const { return str; }
