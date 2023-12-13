#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "*WrongCat Default constructor has been called!" << std::endl;
	type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &copy)
{
	(*this) = copy;
}

WrongCat &WrongCat::operator=(const WrongCat &copy)
{
	type =  copy.type;
	return (*this);
}

// void WrongCat::makeSound() const
// {
// 	std::cout << "SCHhhhhh...!!!" << std::endl;
// }

// std::string WrongCat::getType() const
// {
// 	return(type);
// }

WrongCat::~WrongCat()
{
	std::cout << "~WrongCat Destructor has been Called!" << std::endl;
}
