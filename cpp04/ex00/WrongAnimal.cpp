#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "Default constructor has been called!" << std::endl;
	type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
	(*this) = copy;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &copy)
{
	type =  copy.type;
	return (*this);
}

void WrongAnimal::makeSound() const
{
	std::cout << "SCHhhhhh...!!!" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return(type);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "~Destructor has been Called!" << std::endl;
}
