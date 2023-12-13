#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat Default constructor has been called!" << std::endl;
	type = "Cat";
	ptr = new Brain();
}

Cat::Cat(const Cat &copy)
{

	*this=copy;
}

Cat &Cat::operator=(const Cat &copy)
{
	if (this->ptr)
	{
		delete ptr;
		ptr = NULL;
	}
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