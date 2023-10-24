#include "Ice.hpp"


Ice::Ice() : AMateria("ice")
{}

Ice::Ice(Ice &copy)
{
	(*this) = copy;
}



Ice &Ice::operator=(Ice &copy)
{
	this->type = copy.type;
	return(*this);
}

AMateria *Ice::clone() const
{
	return (new Ice());
}

void Ice::use(ICharacter &target)
{

	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

Ice::~Ice()
{}