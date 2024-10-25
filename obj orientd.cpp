#include<iostream>
#include<string>

class player
{
private:
	std::string name;
	int health;
	int xp;

public:
	void set_name(std::string name_val) {
		name = name_val;

	}
	std::string get_name() {
		return name;
	}
};
int main()
{
	player frank;
	frank.set_name("Frank");
	std::cout << frank.get_name() << std::endl;
	return 0;

}