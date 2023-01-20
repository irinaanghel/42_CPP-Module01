
#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>
# include <string>

class ZOMBIE
{
	private:
		std::string name;
	
	public:
		~ZOMBIE(void);
		void announce(void);
		void naming(std::string name);
};

#endif