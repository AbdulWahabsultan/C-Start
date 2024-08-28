#include <iostream>
#include<vector>
#include<string>

void pass_by_ref1(int& num);
void pass_by_ref2(std::string &s);
void pass_by_ref3(std::vector <std::string> &v);
void print_vec(const std::vector <std::string> &v);

void pass_by_ref1(int &num)
{
	num = 1000;

}
void pass_by_ref2(std::string &s)
{
	s = "changed";
}
void pass_by_ref3(std::vector<std::string>& v)
{
	v.clear();

}
void print_vec(const std::vector<std::string>& v)
{

	for (auto s : v)
		std::cout << s << " ";
	std::cout << std::endl;


}
int main()
{
	int num =100;
	int a_num = 200;
	std::cout << "\nnum before calling pass_by_Ref1 :" << num << std::endl;
	pass_by_ref1(num);
	std::cout << "\nnum after calling pass_by_Ref1 :" << num << std::endl;
	
	std::cout << "\na_num before calling pass_by_Ref1 :" << a_num << std::endl;
	pass_by_ref1(a_num);
	std::cout << "\na_num after calling pass_by_Ref1 :" << a_num << std::endl;
	
	std::string name = "Sultan";
	std::cout << "\nnam before calling pass_by_Ref2 :" << name << std::endl;
	pass_by_ref2(name);
	std::cout << "name after calling pass_by_Ref2 :" << name<< std::endl;
	
	std::vector <std::string> stooges{ "larry","moe","curly" };
	std::cout << "\n stooges before calling pass_by_Ref3 :";
	print_vec(stooges);
	pass_by_ref3(stooges);
	std::cout << "\nstooges after calling pass_by_Ref3 :"<< std::endl;
	print_vec(stooges);
	return 0;

}