#include  "Brain.hpp"


Brain::Brain()
{
	std::cout << "------> Brain constructor has been called!" << std::endl;
}

Brain::Brain(const Brain &copy)
{
	(*this) = copy;
}

Brain &Brain::operator=(const Brain &copy)
{
	for (int i = 0; i < 100 ; i++)
		ideas[i] = copy.ideas[i];
	return (*this);
}

Brain::~Brain()
{
	std::cout << "------> Brain destructor has been called!" << std::endl;
}
