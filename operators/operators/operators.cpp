#include <iostream>
int main()
{
	const float dollar{ 296.23 };
	std::cout << "Wlecome to dollar to pkr converter" << std::endl;
	std::cout << "Input pakistani rupes to be converted to dollar :";
	float pkr;
	std::cin >> pkr;
	float conv_d;
	conv_d = pkr * dollar;
	std::cout << pkr <<" is the inputed rupe value " << std::endl;
	std::cout << dollar << "is the price pr dollar in pkr so the converted amount is :" << conv_d << std::endl;
	return 0;
}