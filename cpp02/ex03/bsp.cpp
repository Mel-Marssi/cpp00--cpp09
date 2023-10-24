#include "Points.hpp"

Fixed Points::CalculeDistance(Points x1, Points x2) const
{
	Fixed DistanceX, DistanceY, Distance;

	DistanceX =  x1.x - x2.x;
	DistanceY = x1.y - x2.y;

	Distance = roundf(sqrt(pow(2, DistanceX.toFloat()) + pow(2, DistanceY.toFloat())));
	return (Distance);
}
bool Points::isTriangle(Points a, Points b , Points c) const
{
	Fixed disAB, disBC, disCA;
	disAB = CalculeDistance(a, b);
	disBC = CalculeDistance(b, c);
	disCA = CalculeDistance(c,a);

	return (disAB + disBC >= disCA) &&
           (disBC + disCA >= disAB) &&
           (disCA + disAB >= disBC);
}

bool Points::bsp(Points a, Points b, Points c, Points x)
{
	if (!isTriangle(a,b,c))
	{
			std::cout << "ABC isn't a Triangle" <<std::endl;
			return (false);
	}
	Fixed u,v,w,i(1);
	u = ((b.y - c.y) * (x.x - c.x) + (c.x - b.x) * (x.y - c.y)) / ((b.y - c.y) * (a.x - c.x) + (c.x - b.x) * (a.y - c.y));
    v = ((c.y - a.y) * (x.x - c.x) + (a.x - c.x) * (x.y - c.y)) / ((b.y - c.y) * (a.x - c.x) + (c.x - b.x) * (a.y - c.y));
    w = i - u - v;

	if ((u>0 && v >0 && w > 0) && (u < 1 && v < 1 && w < 1))
		return (true);
	return (false);
}