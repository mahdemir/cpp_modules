/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mademir <mademir@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/17 14:52:28 by mademir       #+#    #+#                 */
/*   Updated: 2024/02/02 15:21:45 by mademir       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void)
{
	DiamondTrap	dt("Test");

	std::cout << "FragTrap(100) HP: " << dt.getHitPoints() << std::endl;
	std::cout << "ScavTrap(50) EP: " << dt.getEnergyPoints() << std::endl;
	std::cout << "FragTrap(30) AD: " << dt.getAttackDamage() << std::endl;
	dt.whoAmI();
	dt.highFivesGuys();
	dt.guardGate();
	dt.attack("enemy");

	return 0;
}
