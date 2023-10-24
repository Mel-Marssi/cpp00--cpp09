#include "Harl.hpp"

int main ()
{
	Harl obj;
	std::string level;

	std::cout << "Choose one level above those :\n-->debug\n-->info\n-->warning\n-->error" << std::endl;
	if(!std::getline(std::cin, level))
		return 1;
	obj.complain(level);
}