
#include "../inc/Zombie.hpp"

void randomChump(std::string name)
{
	ZOMBIE new_zombie(name);
	new_zombie.announce();
}