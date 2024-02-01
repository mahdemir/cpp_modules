#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap	st1("Jane");

	std::cout << "Hit Points:\t" << st1.getHitPoints() << std::endl;
	std::cout << "Energy Points:\t"<< st1.getEnergyPoints() << std::endl;
	std::cout << "Attack Damage:\t" << st1.getAttackDamage() << std::endl;
	
	st1.attack("enemy");
	st1.takeDamage(20);

	std::cout << "Hit Points:\t" << st1.getHitPoints() << std::endl;
	std::cout << "Energy Points:\t"<< st1.getEnergyPoints() << std::endl;
	std::cout << "Attack Damage:\t" << st1.getAttackDamage() << std::endl;

	st1.guardGate();

	return 0;
}
