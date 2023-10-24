#pragma once

#include <iostream>

class ClapTrap 
{
protected:
	std::string name;
	int			HitPoint;
	int			EnergyPoint;
	int			AttackDamage;
public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(ClapTrap &copy);
	ClapTrap &operator=(ClapTrap &copy);
	void attack(const std::string &target);
	void takeDamage (unsigned int amount);
	void beRepaired(unsigned int amount);
	~ClapTrap();
};
