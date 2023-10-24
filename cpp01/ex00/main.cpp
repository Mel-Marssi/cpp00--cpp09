#include "Zombie.hpp"



int main()
{
	Zombie* zombie_1;
	Zombie zombie_2("Edward");

	zombie_1 = newZombie("Dracula");
	zombie_1->announce();
	zombie_1->announce();
	zombie_1->announce();
	std::cout << "*********************************" << std::endl;
	randomChump("Taylor");
	std::cout << "*********************************" << std::endl;
	zombie_2.announce();
	zombie_2.announce();
	zombie_2.announce();
	delete zombie_1;
}