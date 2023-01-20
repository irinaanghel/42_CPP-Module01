
#include "../inc/Zombie.hpp"

ZOMBIE	*zombieHorde(int N, std::string name);

int main()
{
	int N;

	ZOMBIE	*zombies;
	N = 30;
	zombies = zombieHorde(N, "Pippo");
	while (N--)
		zombies[N].announce();
	delete [] zombies;
	return (0);
}
