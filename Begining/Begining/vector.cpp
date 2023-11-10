#include<iostream>
#include<vector>
int main()
{
	std::vector <int> vector1;
	std::vector <int> vector2;
	vector1.push_back(10);
	vector1.push_back(20);
	std::cout << "The elements of vec 1 are :";
	std::cout << vector1.at(0)<< std::endl;
	std::cout << vector1.at(1) << std::endl;
	std::cout << "the size of vector 1 is :" << vector1.size() << std::endl;
	


	return 0 ;
}