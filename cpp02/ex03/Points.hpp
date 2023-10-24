#pragma once

#include "Fixed.hpp"

class Points
{
private:
	 Fixed const x;
	 Fixed const y;
public:
	Points();
	Points(const float a, const float b);
	Points(const Points &copy);
	Points &operator=(const Points &copy);
	Fixed CalculeDistance(Points x1, Points x2)const ;
	bool isTriangle(Points a, Points b, Points c) const;
	bool bsp(Points a, Points b, Points c, Points x);
	~Points();
};


