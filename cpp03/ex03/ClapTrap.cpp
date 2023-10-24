#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "Default Constructor has been called!."<<std::endl;
	this->name = "BOT";
	this->AttackDamage = 0;
	this->EnergyPoint = 10;
	this->HitPoint = 10;
}


ClapTrap::ClapTrap(std::string name)
{
	this->name = name;
	std::cout << "Constructor has been called!." <<std::endl;
	this->AttackDamage = 0;
	this->EnergyPoint = 10;
	this->HitPoint = 10;
}

ClapTrap::ClapTrap(ClapTrap &copy)
{
	(*this) = copy;
}

ClapTrap &ClapTrap::operator=(ClapTrap &copy)
{
	this->AttackDamage = copy.AttackDamage;
	this->EnergyPoint = copy.EnergyPoint;
	this->HitPoint = copy.HitPoint;
	this->name =  copy.name;
	return (*this);
}

void ClapTrap::attack(const std::string &target)
{
	if ( this->HitPoint < 1)
	{
		std::cout << "ClapTrap : " << this-> name << " is Dead!" << std::endl;
		return ;
	}
	if (this->EnergyPoint > 0)
	{
		std::cout << "ClapTrap " << this->name << " attacks " << target  << " causing " << this->AttackDamage << " point of damage" <<std::endl;
		this->EnergyPoint--;
	}
	else
		std::cout << "ClapTrap " << this->name << " Can't move ! needed some Energy point " << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if ((int)amount  < 0)
	{
		std::cout << "The amount can't be negatif! " << std::endl;
		return ;
	}
 	this->HitPoint -= amount;
	std::cout <<  "ClapTrap " << this->name << " take a damage with an amount : " << amount << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if ((int)amount  < 0)
	{
		std::cout << "The amount can't be negatif! " << std::endl;
		return ;
	}
	if ( this->HitPoint < 1)
	{
		std::cout << "ClapTrap : " << this-> name << " is Dead!" << std::endl;
		return ;
	}
	if (this->EnergyPoint > 0)
	{
		this->HitPoint += amount;
		this->EnergyPoint--;
		std::cout <<  "ClapTrap " << this->name << " repaired it's self successfully " << std::endl;		
	}
	else
		std::cout << "ClapTrap " << this->name << " Can't move ! needed some Energy point " << std::endl;
}
ClapTrap::~ClapTrap()
{
	std::cout << "~destructor has been called!."<<std::endl;
}
