#include<iostream>
#include<string>

class Account {
private:
	std::string name;
	double balance;

public:
	void set_balance(double bal) { balance = bal; }
	double get_balance() { return balance; }

	void set_name(std::string n) { name = n; }
	std::string get_name();

	bool deposite(double ammount);
	bool withdraw(double ammount);
};

std::string Account::get_name() {
	return name;

}
bool Account::deposite(double ammount) {

	balance += ammount;
	return true;

}
bool Account::withdraw(double ammount) {
	if (balance - ammount >= 0) {
		balance -= ammount;
		return true;
	}
	else {
		return false;
	}
}
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
		std::cout << "Withdraw ok"<<std::endl;
	else
		std::cout << "Not sufficient balance"<<std::endl;
	if (my_acc.withdraw(200))
		std::cout << "Sufficent balance" << std::endl;
	else
		std::cout << "sufficnet balance" << std::endl;

	return 0;
}