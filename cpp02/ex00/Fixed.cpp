#include "Fixed.hpp"


Fixed::Fixed()
{
	std::cout << "Default constructor has been called." <<  std::endl;
	this->nb = 0;
}

Fixed::Fixed(Fixed &copy)
{
	std::cout << "Copy constructor has been called." << std::endl;
	*this = copy;
}
Fixed	&Fixed::operator=(const Fixed &fixed)
{
	std::cout << "Copy assignment operator called." << std::endl;
	if(this != &fixed)
		this->nb = fixed.getRawBits(); 
	return (*this);
}
int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->nb);
}
void Fixed::setRawBits( int const raw ){
	std::cout << "setRawBits member function called" << std::endl;
	this->nb = raw;
	}
Fixed::~Fixed()
{
	std::cout << "Destructor has been called." << std::endl;
}
