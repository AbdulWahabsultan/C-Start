#include "Account.h"
#include<iostream>
void Account::set_name(std::string n) {
	name = n;
}
Account::Account() {
	std::cout << "abcd";
}
Account::~Account() {
	std::cout << "zyz";
}
Account::Account(int abc) {
	std::cout << abc;
}
std::string Account::get_name() {
	return 0;
}

bool Account::deposite(double ammount) {
	balance += ammount;
	return true;
}
bool Account::withdraw(double ammount) {
	if (balance - ammount >= 0)
	{
		balance -= ammount;
		return true;
	}
	else {
		return false;
	}
}
