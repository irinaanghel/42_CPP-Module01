
#ifndef HUMAN_B_HPP
# define HUMAN_B_HPP
# include <string>
# include <iostream>
# include "Weapon.hpp"

class HumanB
{
	private:
		std::string _name;
		Weapon *weapon_object;
	
	public:
		HumanB(std::string name);
		~HumanB(void);
		void attack();
		void setWeapon(Weapon &weapon);
};

#endif