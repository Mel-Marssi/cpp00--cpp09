#pragma once

#include <iostream>

class Fixed
{
private:
	int nb;
	static const int fr=8;
public:
	Fixed();
	Fixed(Fixed &copy);
	Fixed	&operator=(const Fixed &fixed);
	void setRawBits( int const raw );
	int getRawBits(void) const;
	~Fixed();
};
