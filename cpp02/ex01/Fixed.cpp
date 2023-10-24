#include "Fixed.hpp"


Fixed::Fixed()
{
	std::cout << "Default constructor has been called." <<  std::endl;
	this->nb = 0;
}

Fixed::Fixed(const Fixed &copy)
{
	std::cout << "Copy constructor has been called." << std::endl;
	*this = copy;
}

Fixed::Fixed(const int n)
{
	nb = n << fract;
	std::cout << "Int constructor has been called." << std::endl;
}

Fixed::Fixed(const float n)
{
	nb = roundf(n * (1 << fract));
	std::cout << "Float constructor has been called." << std::endl;
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
	return (this->nb);
}

void Fixed::setRawBits( int const raw )
{
	this->nb = raw;
}

int Fixed::toInt() const
{
	return(nb >> fract);
}

float Fixed::toFloat() const
{
	return ((float)nb / (1 << fract));
}

std::ostream &operator<<(std::ostream &var,const Fixed &obj)
{
	var << obj.toFloat();
	return(var);
}

Fixed::~Fixed()
{
	std::cout << "Destructor has been called." << std::endl;
}
