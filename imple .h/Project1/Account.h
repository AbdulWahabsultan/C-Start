#ifndef Accounttt
#define Accounttt
#include <string>
class Account {
	private:
		std::string name;
		double balance;

	public:
		Account(int abc);
		Account();
		~Account();
		void set_balance(double bal) { balance = bal; }
		double get_balance() { return balance; }

		void set_name(std::string n);
		std::string get_name();

		bool deposite(double ammount);
		bool withdraw(double ammount);
};
#endif
