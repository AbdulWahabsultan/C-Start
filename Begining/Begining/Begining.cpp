#include <iostream>
int  main()
{
	int array [5] { 0 };
	std::cout << "Enter five numbers:";
	std::cin >> array [0];
	std::cin >> array[1];
	std::cin >> array[2];
	std::cin >> array[3];
	std::cin >> array[4];

	std::cout << "the entered num 1 is:" << array[0] << std::endl;
	std::cout << "the entered num 2 is:" << array[1] << std::endl;
	std::cout << "the entered num 3 is:" << array[2] << std::endl;
	std::cout << "the entered num 4 is:" << array[3] << std::endl;
	std::cout << "the entered num 5 is:" << array[4] << std::endl;
	return 0;
}
