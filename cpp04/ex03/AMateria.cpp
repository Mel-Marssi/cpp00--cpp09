#include "AMateria.hpp"


AMateria::AMateria()
{
	
}

AMateria::~AMateria()
{

}
AMateria::AMateria(AMateria &copy)
{
	(*this) = copy;
}

AMateria::AMateria(std::string const &type)
{
	this->type =  type;
}

AMateria &AMateria::operator=(AMateria &copy)
{
	type = copy.type;
	return (*this);
}
void AMateria::use(ICharacter &target)
{

	(void) target;
}
std::string const  &AMateria::getType() const{
	return(type);
}