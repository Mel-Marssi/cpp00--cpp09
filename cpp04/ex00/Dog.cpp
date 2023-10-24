#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog Default constructor has been called!" << std::endl;
	type = "Dog";
}

Dog::Dog(Dog &copy)
{
	(*this) = copy;
}

Dog &Dog::operator=(Dog &copy)
{
	type = copy.type;
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << "Bark!" << std::endl;
}



Dog::~Dog()
{
	std::cout << "~Dog destructor has been called!" << std::endl;	
}