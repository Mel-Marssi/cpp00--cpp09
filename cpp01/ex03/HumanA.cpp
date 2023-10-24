#include "HumanA.hpp"

HumanA::HumanA(std::string nam, Weapon& wpn) :name(nam), weaponA(wpn)
{
}

HumanA::~HumanA()
{
}

void HumanA::attack()
{
	std::cout << this->name << " Attacks with their " << this->weaponA.getType() <<std::endl;
}