#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>
# include <string>

class ZOMBIE
{
	private:
		std::string name;
		
	public:
		void 	announce(void);
		ZOMBIE(std::string name);
		~ZOMBIE(void);
		
};

#endif