
#include "../inc/Harl.hpp"

int main(int argc, char *argv[])
{
	Harl	Harl;

	if (argc != 2)
	{
		std::cout << "Error: please select one of this: " << std::endl;
		std::cout << "DEBUG or INFO or WARNING or ERROR" << std::endl;
	}
	else
		Harl.complain(argv[1]);
	return (0);
}