#include"ClapTrap.hpp"

int main()
{
	ClapTrap x("Edward");
	ClapTrap a("Luccy");
	ClapTrap b;

	a.attack("Edward");
	x.takeDamage(10);
	x.beRepaired(15);
	x.attack("Luccy");
	a.attack("BOT");
	b.takeDamage(-1);

}