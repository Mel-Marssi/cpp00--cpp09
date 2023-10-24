#include "Harl.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
		return 1;
	Harl	obj;
	std::string level = av[1];
	obj.filter(level);
}