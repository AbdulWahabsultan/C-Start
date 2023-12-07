#include <iostream>
#include <vector>
int main()
{
	std::vector<int> number{};
	char selection{};
	do {
		std::cout << ("\n P - Print Numbers \n A - Add a number \n M - Display mean number \n S- Smallest number \n L - Largest number \n Q - Quit \n Enter your choice :");
		std::cin >> ("%c", selection);
		if (selection == 'p' || selection == 'P')
		{
			if (number.size() == 0)
			{
				std::cout << ("The list is empty");
			}
			else
			{
				std::cout << ("[");
				for (auto num : number)
					std::cout << num << (" ,");
				std::cout << ("]") << std::endl;

			}
		}
		else if (selection == 'a' || selection == 'A')
		{
			int num_to_add;
			std::cout << ("Iput number to be added into list :");
			std::cin >> num_to_add;
			number.push_back(num_to_add);
			std::cout << num_to_add << ("added");
		}
		else if (selection == 'M' || selection == 'm')
		{
			if (number.size() == 0)
				std::cout << ("Unable to achive this.");
			else
			{
				int total = 0;
				for (auto num : number)
					total += num;
				std::cout << ("The mean is :") << static_cast<double> (total) / number.size() << std::endl;
			}
		}
		else if (selection == 'S' || selection == 's')
		{
			if (number.size() == 0)
				std::cout << ("Unable to achive it ");
			else
			{
				int smallest = number.at(0);
				for (auto num : number)
					if (num < smallest)
						smallest = num;
				std::cout << ("The smallest number is ") << smallest << std::endl;


			}
		}
		else if (selection == 'L' || selection == 'l')
		{
			if (number.size() == 0)
				std::cout << ("unable to find largest number ");
			else
			{
				int largest = number.at(0);
				for (auto num : number)
					if (largest < num)
						largest = num;
				std::cout << ("The largest number is :") << largest << std::endl;


			}
		}
		else if (selection == 'Q' || selection == 'q')
		{
			std::cout << ("Thanks goodbye ") << std::endl;

		}
		else
		{
			std::cout << ("Unkown selection");


		}
	} while (selection != 'q' && selection != 'Q');
	
	std::cout << std::endl;
	return 0;
}