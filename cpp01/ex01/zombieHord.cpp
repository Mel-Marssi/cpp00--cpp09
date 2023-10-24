#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	if (N < 0)
		return (NULL);

	Zombie* zombie_1 = new Zombie[N];

	for (int i = 0; i < N; i++)
		zombie_1[i].SetName(name);
	
	return zombie_1;
}