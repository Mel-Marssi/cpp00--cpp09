#include "FragTrap.hpp"

int main()
{
	ClapTrap a;
	FragTrap b("Edward");

	b.attack("BOT");
	a.takeDamage(9);
	a.beRepaired(3);
	a.attack("Edward");
	b.attack("BOT");
	a.takeDamage(20);
	b.highFiveGuys();
	a.beRepaired(10);
}