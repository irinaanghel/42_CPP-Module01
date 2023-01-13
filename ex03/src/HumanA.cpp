/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aanghel <aanghel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 04:42:12 by aanghel           #+#    #+#             */
/*   Updated: 2023/01/13 05:08:52 by aanghel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon): _name(name), weapon_object(weapon)
{ 
    std::cout << "HumanA " << name << " created with a ";
    std::cout << weapon.getType() << std::endl;  
}

void HumanA::attack()
{
    std::cout << this->_name << " attacks with his ";
    std::cout << this->weapon_object.getType() << std::endl;
}

HumanA::~HumanA(void)
{
    std::cout << "HumanA " << this->_name << " destroyed" << std::endl;
}
