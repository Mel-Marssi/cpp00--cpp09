#include "Zombie.hpp"

int main()
{
	Zombie	*ptr;

	ptr = zombieHorde(10, "Dracula");
	
	for (int i = 0; i < 10; i++)
	{
		std::cout << i <<": ";
		ptr[i].announce();
	}
	delete[] ptr;
}