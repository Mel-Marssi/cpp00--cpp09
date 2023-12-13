#include "Cure.hpp"


Cure::Cure() : AMateria("cure")
{
}

Cure::Cure(const Cure &copy)
{
	(*this) = copy;
}

Cure &Cure::operator=(const Cure &copy)
{
	this->type = copy.type;
	return(*this);
}

AMateria *Cure::clone() const
{
	return (new Cure());
}

void Cure::use(ICharacter &target)
{
	
	std::cout << "* heals " << target.getName() << "’s wounds * " << std::endl;
}

Cure::~Cure()
{}