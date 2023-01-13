/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aanghel <aanghel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 05:17:04 by aanghel           #+#    #+#             */
/*   Updated: 2023/01/11 05:29:17 by aanghel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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