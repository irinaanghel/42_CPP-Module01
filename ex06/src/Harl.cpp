
#include "../inc/Harl.hpp"

void Harl::complain(std::string level)
{
	int i;
	
	void (Harl::*funcs[])(void) =
	{
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};
	
	std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	i = 0;
	while (i < 4 && levels[i].compare(level))
		i++;
	if (i == 4)
		Harl::filter();
	while (i < 4)
		(this->*funcs[i++])();
}

void	Harl::debug(void)
{
	std::cout << "[ DEBUG ]" << std::endl;
    std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pic"
		"kle-special-ketchup burger. I just love it!" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "[ INFO ]" << std::endl;
    std::cout << "I cannot believe adding extra bacon cost more money. You don’"
		"t put enough! If you did I would not have to ask for it!" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "[ WARNING ]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free. I’ve bee"
		"n coming here for years and you just started working here last month."
		<< std::endl;
}

void	Harl::error(void)
{
	std::cout << "[ ERROR ]" << std::endl;
    std::cout << "This is unacceptable, I want to speak to the manager now."
		<< std::endl;
}

void	Harl::filter(void)
{
	std::cout << "[ Probably complaining about insignificant problems ]"
            << std::endl;
}
Harl::Harl()
{
}

Harl::~Harl()
{
}
