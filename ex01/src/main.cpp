/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aanghel <aanghel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 05:23:59 by aanghel           #+#    #+#             */
/*   Updated: 2023/01/11 05:31:12 by aanghel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
