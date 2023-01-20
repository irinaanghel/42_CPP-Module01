
#include "../inc/Zombie.hpp"

ZOMBIE *newZombie(std::string name)
{
	return (new ZOMBIE(name));
}