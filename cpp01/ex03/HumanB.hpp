#pragma once

#include "Weapon.hpp"

class HumanB
{
	private:
		Weapon	*weaponB;
		std::string name;
	public:
		void attack();
		void setWeapon(Weapon &name);
		HumanB(std::string name);
		~HumanB();
};
