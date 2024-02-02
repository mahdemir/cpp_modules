/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mademir <mademir@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/17 14:52:28 by mademir       #+#    #+#                 */
/*   Updated: 2024/02/02 14:55:45 by mademir       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap	ct1("Jane");
	ScavTrap	ct2("Johny");

	ct1.attack("enemy");
	ct1.guardGate();
	ct2.beRepaired(10);
	std::cout << "Hit points Johny: " << ct2.getHitPoints() << std::endl;
	std::cout << "Energy points Johny: " << ct2.getEnergyPoints() << std::endl;
	ct2.takeDamage(19);
	std::cout << "Hit points Johny: " << ct2.getHitPoints() << std::endl;
	std::cout << "Energy points Johny: " << ct2.getEnergyPoints() << std::endl;
	ct2.takeDamage(1);
	std::cout << "Hit points Johny: " << ct2.getHitPoints() << std::endl;
	std::cout << "Energy points Johny: " << ct2.getEnergyPoints() << std::endl;
	ct2.attack("enemy");
	ct2.takeDamage(1000);
	std::cout << "Hit points Johny: " << ct2.getHitPoints() << std::endl;
	std::cout << "Energy points Johny: " << ct2.getEnergyPoints() << std::endl;
	ct2.beRepaired(10);

	return 0;
}
