#include<iostream>

#include<vector>
int main()
{
	std::vector <int> vector1, vector2;
	
	vector1.push_back(10);
	vector1.push_back(20);
	std::cout << "The elements of vec 1 are :";
	
	std::cout << vector1.at(0);
	std::cout << vector1.at(1) << std::endl;
	
	std::cout << "the size of vector 1 is : " << vector1.size() << std::endl;
	vector2.push_back(100);
	vector2.push_back(200);
	std::cout << "The elements of vetor 2 are : ";
	
	std::cout << vector2.at(0)<< " ";
	std::cout << vector2.at(1);
	std::cout << "\nThe num of vetors in 2 are : " << vector2.size() << std::endl;
	std::vector <std::vector <int>> vector_2d;
	
	vector_2d.push_back(vector1);
	vector_2d.push_back(vector2);
	std::cout << "\n2d vetors elements  are : ";
	std::cout << vector_2d.at(0).at(0) << " " << vector_2d.at(0).at(1) << std::endl;
	std::cout << vector_2d.at(1).at(0) << " " << vector_2d.at(1).at(1) << std::endl;
	
	vector1.at(0) = 1000;
	std::cout << "Vector 2d 2nd time :";
	std::cout << vector_2d.at(0).at(0) << " " << vector_2d.at(0).at(1) << std::endl;
	std::cout << vector_2d.at(1).at(0) << " " << vector_2d.at(1).at(1) << std::endl;
	
	std::cout << vector1.at(0);






	return 0;
}