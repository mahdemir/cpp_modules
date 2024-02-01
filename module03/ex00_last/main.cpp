#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	ct1 = ClapTrap("Jane");
	ClapTrap	ct2 = ClapTrap("Johny");

	ct1.attack("enemy");
	ct2.beRepaired(10);
	ct2.takeDamage(2000);
	ct2.takeDamage(1);
	ct2.attack("enemy");
	ct2.takeDamage(1000);
	return 0;
}
