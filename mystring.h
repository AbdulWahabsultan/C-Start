#pragma once
class mystring
{
private:
	char* str;

public:
	mystring();
	mystring(const char* s);
	mystring(const mystring& source);
	~mystring();
	void display()const;
	int get_length() const;
	const char* get_str() const;

};

