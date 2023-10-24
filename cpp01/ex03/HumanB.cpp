#include "HumanB.hpp"


HumanB::HumanB(std::string name)
{
	this->name =  name;
	weaponB = NULL;
}

HumanB::~HumanB()
{
}

void HumanB::setWeapon(Weapon &name)
{
	this->weaponB = &name;
}

void HumanB::attack()
{
	if (weaponB == NULL)
		return ;
	std::cout << name << " Attacks with their " << weaponB->getType() <<std::endl;
}