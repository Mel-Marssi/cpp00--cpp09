#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name + "_clap_name")
{
	//ClapTrap::name = name + "_clap_name";
	std::cout << "DiamondTrap Constructor has been called!" << std::endl;
	this->name = name;
	HitPoint =  100;
	EnergyPoint = 50;
	AttackDamage = 30;
}
DiamondTrap::DiamondTrap()
{
	std::cout << "DiamondTrap Default constructor has been called!" << std::endl;
	this->name = "Default";
	ClapTrap::name = this->name + "_clap_name";
	HitPoint =  100;
	EnergyPoint = 50;
	AttackDamage = 30;
}
DiamondTrap::DiamondTrap(const DiamondTrap &copy)
{
	(*this) = copy;
}

void DiamondTrap::WhoAmI()
{
	std::cout << "DiamondTrap name: " << this->name <<std::endl;
	std::cout << "ClapTrap name: " << ClapTrap::name << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &copy)
{
	this->name = copy.name;
	this->HitPoint = copy.HitPoint;
	this->AttackDamage =  copy.AttackDamage;
	this->EnergyPoint = copy.EnergyPoint;
	return (*this);
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "~DiamondTrap destructor has been called!" << std::endl;
}