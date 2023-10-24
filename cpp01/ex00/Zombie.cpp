#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	this->name = name;
}

Zombie::~Zombie()
{
	std::cout << "destructor has been called: " << this->name << std::endl; 
}

void Zombie::announce()
{
	std::cout << this->name << ":BraiiiiiiinnnzzzZ..." << std::endl;
}

