/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aanghel <aanghel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 04:33:36 by aanghel           #+#    #+#             */
/*   Updated: 2023/01/20 11:05:52 by aanghel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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