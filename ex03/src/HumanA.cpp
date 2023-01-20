
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
