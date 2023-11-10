#include  <iostream>
int main()
{
	int a,b;
	std::cout << ("Input a number:");
	std::cin >> a;
	if (a >= 1)
	{
		std::cout << ("Hello\n");
		b = 1000;
		std::cout << ("yes b = %d\n",b);
	}
	else
	{
		std::cout << ("no\n");
		b = 5000;


	}
	
	std::cout << ("%d", b);




}