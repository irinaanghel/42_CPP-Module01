
#ifndef HUMAN_A_HPP
# define HUMAN_A_HPP
# include <string>
# include <iostream>
# include "Weapon.hpp"

class HumanA
{
	private:
		std::string _name;
		Weapon	&weapon_object;
	
	public:
		HumanA(std::string name, Weapon &weapon);
		~HumanA(void);
		void attack();
};

#endif