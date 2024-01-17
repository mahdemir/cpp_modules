/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mademir <mademir@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/17 14:52:28 by mademir       #+#    #+#                 */
/*   Updated: 2024/01/17 23:34:22 by mademir       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap	st1("Jane");

	std::cout << "Hit Points:\t" << st1.getHp() << std::endl;
	std::cout << "Energy Points:\t"<< st1.getEp() << std::endl;
	std::cout << "Attack Damage:\t" << st1.getAd() << std::endl;
	
	st1.attack("enemy");
	st1.takeDamage(20);

	std::cout << "Hit Points:\t" << st1.getHp() << std::endl;
	std::cout << "Energy Points:\t"<< st1.getEp() << std::endl;
	std::cout << "Attack Damage:\t" << st1.getAd() << std::endl;

	st1.guardGate();

	return 0;
}
