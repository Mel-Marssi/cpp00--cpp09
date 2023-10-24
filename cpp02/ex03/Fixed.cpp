#include "Fixed.hpp"


Fixed::Fixed()
{
	//std::cout << "Default constructor has been called." <<  std::endl;
	this->nb = 0;
}

Fixed::Fixed(const Fixed &copy)
{
	//std::cout << "Copy constructor has been called." << std::endl;
	*this = copy;
}

Fixed::Fixed(const int n)
{
	nb = n << fract;
	//std::cout << "Int constructor has been called." << std::endl;
}

Fixed::Fixed(const float n)
{
	nb = roundf(n * (1 << fract));
	//std::cout << "Float constructor has been called." << std::endl;
}
/*******************The 6 comparison operators**************************/
Fixed	&Fixed::operator=(const Fixed &fixed) 
{
	//std::cout << "Copy assignment operator called." << std::endl;
	if(this != &fixed)
		this->nb = fixed.getRawBits(); 
	return (*this);
}

bool	Fixed::operator<(const Fixed &comp) const
{
	return (this->nb < comp.nb);
}

bool	Fixed::operator<=(const Fixed &comp) const
{
	return (this->nb <= comp.nb);
}

bool	Fixed::operator>(const Fixed &comp) const
{
	return (this->nb > comp.nb);
}

bool	Fixed::operator>=(const Fixed &comp) const
{
	return (this->nb >= comp.nb);
}

bool	Fixed::operator!=(const Fixed &comp) const
{
	return (this->nb != comp.nb);
}

bool	Fixed::operator==(const Fixed &comp) const
{
	return (this->nb == comp.nb);
}
/**********************************************************************/

/******************The 4 arithmetic operators*********************/
Fixed Fixed::operator+(const Fixed &plus) const
{
	Fixed tmp;
	tmp.nb =  this->nb + plus.nb;
	return (tmp);
}

Fixed Fixed::operator-(const Fixed &plus) const
{
	Fixed tmp;
	tmp.nb =  this->nb - plus.nb;
	return (tmp);
}

Fixed Fixed::operator*(const Fixed &multi) const
{
	 	Fixed tmp;

		tmp.nb = (this->nb * multi.nb) / (1 << 8);
		return (tmp);
}

Fixed Fixed::operator/(const Fixed &div) const
{
	 	Fixed tmp;

		tmp.nb = ((float)(this->nb ) / div.nb )* (1 << 8);
		return (tmp);
}
/**************************************************************/

/***********The 4 increment/decrement Operators******************/
Fixed &Fixed::operator++()
{
	this->nb++;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed tmp;

	tmp = *this;
	tmp.nb++;
	return (tmp);
}

Fixed &Fixed::operator--()
{
	this->nb--;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed tmp;

	tmp = *this;
	tmp.nb--;
	return (tmp);
}
/******************************************************************/

/************* min(a,b)  /  max(b, a) *******************/
Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	if (a.nb < b.nb)
		return(a);
	return(b);
}

Fixed const &Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a.nb < b.nb)
		return(a);
	return(b);
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	if (a.nb > b.nb)
		return(a);
	return(b);
}
Fixed const &Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a.nb > b.nb)
		return(a);
	return(b);
}
/*******************************************************/
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
	//std::cout << "Destructor has been called." << std::endl;
}

