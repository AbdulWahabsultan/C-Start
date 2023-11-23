#include <iostream>
int main()
{
	int to, tt;
	char w;
	start:
	std::cout << "Input the number that you want to print table of :";
	std::cin>> (" % d", to);
	std::cout << "Input the value to which you want tables to be printed to :";
	std::cin >>("%d", tt);
	//Table with for loop
	std::cout << "------------- \tBy For Loop\t -------------\n";
	for (int i=0; i <= tt; ++i)
	{
		std::cout << to << "x" << i << "=" << to * i <<"\n";
	}
	
	// Table whith the while loop :
	int j=0;
	std::cout << "------------- \tBy While Loop\t -------------\n";
	while (j <= tt)
	{
		std::cout << to << "x" << j << "=" << to * j << "\n";
		++j;
	}
	std::cout << "------------- \tBy Do while loop\t -------------\n";
	int k=0;
	do {
		std::cout << to << "x" << k << "=" << to * k  << "\n";
		k++;

	} while (k <= tt);

	std::cout << "\nInput Y if you like to exit if not input random alphabet :";
	std::cin >> ("%d", w);
	if (w == 'y' || w == 'Y')
		goto start;
	else
		std::cout << "Thanks for using this :D";

}