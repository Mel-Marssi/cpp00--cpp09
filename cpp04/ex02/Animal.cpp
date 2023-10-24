#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Default constructor has been called!" << std::endl;
	type = "Animal";
}

Animal::Animal(Animal &copy)
{
	(*this) = copy;
}

Animal &Animal::operator=(Animal &copy)
{
	type =  copy.type;
	return (*this);
}

// void Animal::makeSound() const
// {
// 	std::cout << "SCHhhhhh...!!!" << std::endl;
// }

std::string Animal::getType() const
{
	return(type);
}

Animal::~Animal()
{
	std::cout << "~Destructor has been Called!" << std::endl;
}
