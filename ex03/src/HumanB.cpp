/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aanghel <aanghel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 04:42:10 by aanghel           #+#    #+#             */
/*   Updated: 2023/01/13 05:07:33 by aanghel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/HumanB.hpp"

HumanB::HumanB(std::string name)
{
    this->weapon_object = NULL;
    this->_name = name;
    std::cout << "HumanB " << name;
    std::cout << " created without a weapon" << std::endl;       
}

void HumanB::attack()
{
    std::cout << this->_name << " attacks with his " << weapon_object->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
    this->weapon_object = &weapon;
}

HumanB::~HumanB(void)
{
    std::cout << "HumanB " << this->_name << " destroyed" << std::endl;
}