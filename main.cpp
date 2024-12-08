#include<iostream>
#include "Account.h"

int main()
{
	Account my_acc;
	my_acc.set_name("Sultan");
	my_acc.set_balance(500);

	if (my_acc.deposite(200))
		std::cout << "Deposte was ok" << std::endl;
	else
		std::cout << "Deposite not allowed" << std::endl;
	if (my_acc.withdraw(10000))
		std::cout << "Withdraw ok" << std::endl;
	else
		std::cout << "Not sufficient balance" << std::endl;
	if (my_acc.withdraw(200))
		std::cout << "Sufficent balance" << std::endl;
	else
		std::cout << "sufficnet balance" << std::endl;

	return 0;
}