
#include "../inc/Zombie.hpp"

ZOMBIE	*newZombie(std::string name);
void	randomChump(std::string name);

int main()
{
	ZOMBIE	*zombie = newZombie("Pippo");
	zombie->announce();
	randomChump("Pluto");
	delete zombie;
	return (0);
}	