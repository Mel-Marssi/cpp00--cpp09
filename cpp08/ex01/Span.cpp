#include "Span.hpp"


Span::Span()
{
	size = 10;
}

Span::Span(unsigned int  n)
{
	size = n;
}

Span::Span(const Span &copy)
{
	(*this) = copy;
}
Span &Span::operator=(const Span &copy)
{
	size = copy.size;
	vec = copy.vec;
	return (*this);
}

int Span::longestSpan()
{
	if (vec.size() <= 1)
		throw(std::out_of_range("Not enough elements to use :shortestSpan()"));
	
	int max, min;

	max = *std::max_element(vec.begin(), vec.end());
	min = *std::min_element(vec.begin(), vec.end());

	return (max - min);
}

int Span::shortestSpan()
{
	if (vec.size() <= 1)
		throw(std::out_of_range("Not enough elements to use :shortestSpan()"));
	
	std::vector<int> tmp(vec);
	std::sort(tmp.begin(), tmp.end());
	int dis = 0, dis_old = 0;
	
	for(std::vector<int>::iterator it = tmp.begin(); (it + 1)  != tmp.end(); it++)
	{
		if (it == tmp.begin())
			dis_old =*(it + 1) -  *it ;
		dis =*(it + 1) -  *it ;
		if (dis < dis_old)
			dis_old = dis;
	}
	return (dis_old);
}

void Span::getVector() const
{
	for (int i=0; i < (int)size ; i++)
	{
		std::cout << vec[i] <<" | ";
	}
	std::cout << std::endl;
}

void Span::addNumber(int n)
{
	if(vec.size() < size)
		vec.push_back(n);
	else
		throw(std::out_of_range("Span already full"));
}

Span::~Span()
{
}
