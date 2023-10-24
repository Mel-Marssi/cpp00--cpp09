#include "Points.hpp"

Points::Points()
{
}

Points::Points(const float a, const float b) : x(a), y(b)
{
}

Points::Points(const Points &copy) :x(copy.x), y(copy.y)
{
}

Points &Points::operator=(const Points &copy)
{
	(void) copy;
	return (*this);
}

Points::~Points()
{
}