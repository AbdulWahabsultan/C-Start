#include <iostream>
#include<string>

class player
{
private:
	std::string name;
	int health;
	int xp;
public:
	player();
	player(std::string name_val);
	player(std::string name_val, int health_val, int xp_val);

};

player::player()
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
	:name{ name_val }, health{ health_val }, xp{ xp_val } {
	std::cout << "\n" << name << health << xp;
 }
int main()
{
	player empty;
	player me{ "Sultan" };
	player boss{ "me",500,5000 };
	
}