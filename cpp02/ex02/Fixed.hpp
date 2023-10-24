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
		int 	toInt() const ;
		float 	toFloat() const;
		Fixed	&operator=(const Fixed &fixed);
		bool	operator>(const Fixed &comp) const;
		bool	operator<(const Fixed &comp) const;
		bool	operator>=(const Fixed &comp) const;
		bool	operator<=(const Fixed &comp) const;
		bool	operator==(const Fixed &comp) const;
		bool	operator!=(const Fixed &comp) const;
		Fixed	operator+(const Fixed &plus) const;
		Fixed	operator-(const Fixed &plus) const;
		Fixed	operator*(const Fixed &multi) const;
		Fixed	operator/(const Fixed &div) const;
		Fixed	&operator++();
		Fixed	operator++(int);
		Fixed	&operator--();
		Fixed	operator--(int);
static  Fixed 	&min(Fixed &a, Fixed &b);
static  Fixed 	const &min(const Fixed &a, const Fixed &b);
static  Fixed 	&max(Fixed &a, Fixed &b);
static  Fixed 	const &max(const Fixed &a, const Fixed &b);
		void	setRawBits( int const raw );
		int 	getRawBits(void) const;
		~Fixed();
	};
	std::ostream &operator<<(std::ostream &var,const Fixed &obj);
