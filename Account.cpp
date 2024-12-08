#include "Account.h"
void Account::set_name(std::string n) {
	name = n;
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
