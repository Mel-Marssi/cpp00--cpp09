#pragma once

#include <iostream>
#include<cmath>

class Fixed
{
	private:
		int nb;
		static const int fract=8;
	public:
		Fixed();
		Fixed(const Fixed &copy);
		Fixed(const int n);
		Fixed(const float n);
		int toInt() const ;
		float toFloat() const;
		Fixed	&operator=(const Fixed &fixed);
		void setRawBits( int const raw );
		int getRawBits(void) const;
		~Fixed();
};
	std::ostream &operator<<(std::ostream &var,const Fixed &obj);
#


/*
Default constructor called
Int constructor called
Float constructor called
Copy constructor called
Copy assignment operator called
Float constructor called
Copy assignment operator called
Destructor called
a is 1234.43
b is 10
c is 42.4219
d is 10
a is 1234 as integer
b is 10 as integer
c is 42 as integer
d is 10 as integer
Destructor called
Destructor called
Destructor called
Destructor called*/