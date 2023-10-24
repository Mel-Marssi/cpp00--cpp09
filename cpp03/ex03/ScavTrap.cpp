#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap default constructor has been called! "<<std::endl;
	this->EnergyPoint = 50;
	this->HitPoint = 100;
	this->AttackDamage=20;
}

ScavTrap::ScavTrap(ScavTrap &copy)
{
	*this = copy;
}

ScavTrap &ScavTrap::operator=(ScavTrap &copy)
{
	this->name = copy.name;
	this->AttackDamage = copy.AttackDamage;
	this->EnergyPoint = copy.EnergyPoint;
	this->HitPoint = copy.HitPoint;
	return(*this);
}

ScavTrap::ScavTrap(std::string name)
{
	std::cout << "ScavTrap constructor has been called! "<<std::endl;
	this->name = name;
	this->EnergyPoint = 50;
	this->HitPoint = 100;
	this->AttackDamage=20;
}
void ScavTrap::gardeGate()
{
	std::cout << "ScavTrap Gate keeper mode is activated. "<<std::endl;
}

void ScavTrap::attack(const std::string &target)
{
	if ( this->HitPoint < 1)
	{
		std::cout << "*ScavTrap : " << this-> name << " is Dead!" << std::endl;
		return ;
	}
	if (this->EnergyPoint > 0)
	{
		std::cout << "*ScavTrap " << this->name << " attacks " << target  << " causing " << this->AttackDamage << " point of damage" <<std::endl;
		this->EnergyPoint--;
	}
	else
		std::cout << "*ScavTrap " << this->name << " Can't move ! needed some Energy point " << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destructor has been called! "<<std::endl;
}