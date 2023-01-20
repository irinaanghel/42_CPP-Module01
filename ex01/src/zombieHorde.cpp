
#include "../inc/Zombie.hpp"

ZOMBIE	*zombieHorde(int N, std::string name)
{
	ZOMBIE	*horde;
	horde = new ZOMBIE[N];
	while (N--)
		horde[N].naming(name);
	return (horde);
}