#include<iostream>
#include<string>
class Player
{
private:
	std::string name;
	int health;
	int xp;
public:
	void set_name(std::string name_val) {
		name = name_val;
	}
	Player() {
		std::cout << "No args constructor" << std::endl;
	}
	Player(std::string name) {
		std::cout << "String arg constructor called" << std::endl;
	}
	Player(std::string name, int health, int xp) {
		std::cout << "Three arg constructor called" << std::endl;
	}
	~Player() {
		std::cout << "Destructor called for" << name << std::endl;
	}
};


int main()
{
	{
		Player slayer;
		slayer.set_name("Slayer");
	}

	{
		Player frank;
		frank.set_name("Frank");
		Player hero("Hero");
		hero.set_name("Hero");
		Player villan("Villan", 100, 12);
		villan.set_name("Villlan");
	}
	Player* enemy = new Player;
	enemy->set_name("Enemy");

	Player* level_boss = new Player("Level Boss", 1000, 300);
	level_boss->set_name("Level boss");
	
	delete enemy;
	delete level_boss;



}