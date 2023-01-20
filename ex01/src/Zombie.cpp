
#include "../inc/Zombie.hpp"

void ZOMBIE::naming(std::string name)
{
	this->name = name;
	std::cout << "A zombie named " << name << " is born." << std::endl;
}

void ZOMBIE::announce(void)
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ ..." << std::endl;
}

ZOMBIE::~ZOMBIE(void)
{
	std::cout << "Zombie " << this->name << " was killed." << std::endl;
}