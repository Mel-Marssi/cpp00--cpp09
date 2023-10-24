#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat Default constructor has been called!" << std::endl;
	type = "Cat";
	ptr = new Brain();
}

Cat::Cat(Cat &copy)
{
	*this=copy;
}

Cat &Cat::operator=(Cat &copy)
{
	if (this->ptr)
		delete ptr;
	ptr = new Brain();
	*this->ptr = *copy.ptr;
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
	delete ptr;
}