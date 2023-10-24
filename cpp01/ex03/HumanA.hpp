#pragma once

#include "Weapon.hpp"


class HumanA
{
	public:
		void attack();
		HumanA(std::string name, Weapon& wpn);
		~HumanA();
	private:
		std::string name;
		Weapon	&weaponA;
		
};	
