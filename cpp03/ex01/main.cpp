#include "ScavTrap.hpp"

int main()
{
	ClapTrap a;
	ScavTrap b("Edward");

	b.attack("BOT");
	a.takeDamage(9);
	a.beRepaired(3);
	a.attack("Edward");
	b.attack("BOT");
	a.takeDamage(20);
	b.gardeGate();
	a.beRepaired(10);
}