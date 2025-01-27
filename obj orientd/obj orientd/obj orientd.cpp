#include <iostream>
#include<string>

class player
{
private:
	std::string name;
	int health;
	int xp;
public:
	//player();
	//player(std::string name_val);
	//player(std::string name_val, int health_val, int xp_val);
	//Made constructor parameters and default value
	//	player(std::string name_val = "None", int health_val = 0, int xp_val = 0);
	
	//copying constructor
	std::string get_name() { return name; }
	int get_health() { return health; }
	int get_xp() { return xp; }
	player(std::string name_val = "None", int heatlh_val = 0, int xp_val = 0);
	//copy constroctor
	player(const player& source);
	//Destroctor
	~player() { std::cout << "Destroctor called for " << name << std::endl; }
};

/*player::player()
{
	name = "Empty";
	health = 0;
	xp = 0;
	std::cout << "\n"<< name << health << xp;
}
player::player(std::string name_val)
{
	name = name_val;
	xp = 0;
	health = 0;
	std::cout << "\n" << name << health << xp;

}
// making list :
/*player::player(std::string name_val, int xp_val, int health_val)
{
	name = name_val;
	xp = xp_val;
	health = health_val;
	std::cout << "\n" << name << health << xp;


}*/
player::player(std::string name_val, int xp_val, int health_val)
	:name{ name_val}, health{ health_val }, xp{ xp_val } {
	std::cout << "\n" << name << health << xp;
 }
player::player(const player &soruce) 
	:name{soruce.name},health{soruce.health},xp{soruce.xp}
{
	std::cout << "Copy constructor made for :" << soruce.name;
}
void display_player(player p)
{
	std::cout << "Name" << p.get_name() << std::endl;
	std::cout << "Health" << p.get_health() << std::endl;
	std::cout << "Xp" << p.get_xp() << std::endl;
}
int main()
{
	player empty;
	player me{ "Sultan" };
	player boss{ "me",500,5000 };
	
}