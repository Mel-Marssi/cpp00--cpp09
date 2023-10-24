#pragma once

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
private:
	std::string name; 
public:
	DiamondTrap();
	DiamondTrap(std::string name);
	DiamondTrap(DiamondTrap &copy);
	DiamondTrap &operator=(DiamondTrap &copy);
	void WhoAmI();
	~DiamondTrap();
};

