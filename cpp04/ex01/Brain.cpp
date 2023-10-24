#include  "Brain.hpp"


Brain::Brain()
{
	std::cout << "------> Brain constructor has been called!" << std::endl;
}

Brain::Brain(Brain &copy)
{
	(*this) = copy;
}

Brain &Brain::operator=(Brain &copy)
{
	for (int i = 0; i < 100 ; i++)
		ideas[i] = copy.ideas[i];
	return (*this);
}

Brain::~Brain()
{
	std::cout << "------> Brain destructor has been called!" << std::endl;
}
