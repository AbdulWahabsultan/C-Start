#include <iostream>
#include<vector>
#include <algorithm>
void large_numb(const std::vector<int>& v)
{
	if (v.empty())
	{
		std::cout << "The list is empty" << std::endl;
		return;
	}

	int maxElement = *std::max_element(v.begin(), v.end());
	std::cout << "Largest number in the list: " << maxElement << std::endl;
}

void small_numb(const std::vector<int>& v)
{
	if (v.empty())
	{
		std::cout << "The list is empty." << std::endl;
		return;
	}

	int minElement = *std::min_element(v.begin(), v.end());
	std::cout << "Smallest number in the list: " << minElement << std::endl;
}
void mean_numbs(const std::vector<int>& v)
{
	int total = 0,mean;
	if (v.size() == 0)
	{
		std::cout << "The list is empty";

	}
	else
	{
		for (auto num : v)
			total = +num;
		mean = (total) / v.size();
		std::cout << "Mean of the list of numbers is :" << mean;
	}

}
void add_number(std::vector<int> &v)
{   
	int c = 0;
	std::cout << "Input the number that you want to be added:";
	std::cin >> c;
	v.push_back(c);
	std::cout << "The number : " << c << " is added";
}

void disp_list(const std::vector<int>& v)
{
	std::cout << "[";
	for (auto num : v)
		std::cout << num << " ";
	std::cout << "]";
}
void print_numb(const std::vector<int> &v)
{
	if (v.size() == 0)
	{
		std::cout << "The list is empty" << std::endl;

	}
	else
	{ 
		disp_list(v);
	}

}

int main()

{
	char a{};
	std::vector <int> numb{};
	do {
	std::cout << "Enter p  in lower case  - to print numbers" << std::endl;
	std::cout << "Enter a  in lower case  - to add numbers" << std::endl;
	std::cout << "Enter m  in lower case  - to print  mean of numbers" << std::endl;
	std::cout << "Enter s  in lower case  - to print smallest numbers" << std::endl;
	std::cout << "Enter l  in lower case  - to print largest numbers" << std::endl;
	std::cout << "Enter q  in lower case  - to Quit" << std::endl;
	std::cin >> a;
	
		switch (a)
		{
		case 'p':
			print_numb(numb);
			break;
		case 'a':
			add_number(numb);
			break;
		case 'm':
			mean_numbs(numb);
			break;
		case 's':
			small_numb(numb);
			break;
		case 'l':
			large_numb(numb);
				break;
		case 'q':
			std::cout << "Thanks for using me ";
			break;
		default:
			std::cout << "Unkown value";

		}
	} while (a != 'q');
}
