#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat Default constructor has been called!" << std::endl;
	type = "Cat";
}

Cat::Cat(const Cat &copy)
{
	(*this) = copy;
}

Cat &Cat::operator=(const Cat &copy)
{
	type = copy.type;
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "Meow!" << std::endl;
}


Cat::~Cat()
{
	std::cout << "~Cat destructor has been called!" << std::endl;	
}