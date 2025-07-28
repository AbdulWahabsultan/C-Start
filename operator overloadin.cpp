#include<iostream>
#include"mystring.h"
int main()
{
	mystring empty;
	mystring larry("Larry");
	mystring stooge{ larry };
	empty.display();
	larry.display();
	stooge.display();
	return 0;
}