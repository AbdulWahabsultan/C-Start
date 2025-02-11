#include<iostream>

class ABC
{
public:
	int a, b, c;

	ABC(int a, int b, int c)
	{
		this->a = a;
		this->b = b;
		this->c = c;
	}
};

int main()
{
	ABC abc(10, 20, 30);
	
	return 0;

}