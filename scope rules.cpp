#include<iostream>
void local_exp(int x);
void global_exp();
void static_exp();

int num = 300;
void global_exp()
{
	std::cout << "\nglobal num is :" << num << " in global_exp start" << std::endl;
	num *= 2;
	std::cout << "Global num is :" << num << " in global_exp end" << std::endl;


}

void local_exp(int x) {
	
		int num = 1000;
		std::cout << "\nlocal num is :" << num << " in local_exp " << std::endl;
		num = x;
		std::cout << "local num is :" << num << "in local_exp end" << std::endl;


	}
void static_exp() {
	static int num = 5000;
	std::cout << "\nlocal static num is :" << num << "  in static_exp" << std::endl;
	num = +1000;
	std::cout << "local local static num is" << num << " in static_exp end" << std::endl;


}

int main() {

			int num = 100,y=22;
			int num2 = 500;
			std::cout << "local num is :" << num << " in main " << std::endl;
			{
				int num = 200;
				std::cout << "local num is:" << num << " in inner block of main" << std::endl;
				std::cout << "\ninner block in main can see out  -num2 is :" << num2 << std::endl;
			}
			std::cout << "local num is :" << num << " in main" << std::endl;
			local_exp(10);
			local_exp(20);
			global_exp();
			global_exp();
			
return 0;

		}