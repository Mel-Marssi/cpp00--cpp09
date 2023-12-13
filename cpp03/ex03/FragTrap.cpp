#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "FragTrap default constructor has been called! "<<std::endl;
	//this->EnergyPoint = 100;
	this->HitPoint = 100;
	this->AttackDamage= 30;

}

FragTrap::FragTrap(const FragTrap &copy)
{
	*this = copy;
}

FragTrap &FragTrap::operator=(const FragTrap &copy)
{
	this->name = copy.name;
	this->AttackDamage = copy.AttackDamage;
	this->EnergyPoint = copy.EnergyPoint;
	this->HitPoint = copy.HitPoint;
	return(*this);
}
FragTrap::FragTrap(std::string name)
{
	std::cout << "FragTrap constructor has been called! "<<std::endl;
	this->name = name;
	this->EnergyPoint = 100;
	this->HitPoint = 100;
	this->AttackDamage = 30;
}
void FragTrap::highFiveGuys()
{
	std::cout << "FragTrap!!!! High Five Guys "<<std::endl;
}


FragTrap::~FragTrap()
{
	std::cout << "FragTrap Destructor has been called! "<<std::endl;
}