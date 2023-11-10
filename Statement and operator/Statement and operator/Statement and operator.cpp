#include <iostream>
int main()
{
	float change_ammount;
	std::cout << "Input Value to be changed :";
	std::cin >> change_ammount;
	const int dollar_value{ 100 }, quatar_value{ 25 }, dime_value{ 10 }, nickle_value{ 5 };
	int balance, dollar, quatar, dime, nickle;
	
	dollar = change_ammount / dollar_value;
	balance = change_ammount%dollar_value;

}