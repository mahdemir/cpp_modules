/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mademir <mademir@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/17 14:52:28 by mademir       #+#    #+#                 */
/*   Updated: 2024/01/18 00:04:02 by mademir       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void)
{
	FragTrap	ft1("Jane");

	std::cout << "Hit Points:\t" << ft1.getHp() << std::endl;
	std::cout << "Energy Points:\t"<< ft1.getEp() << std::endl;
	std::cout << "Attack Damage:\t" << ft1.getAd() << std::endl;
	
	ft1.takeDamage(10);
	std::cout << "Hit Points:\t" << ft1.getHp() << std::endl;
	std::cout << "Energy Points:\t"<< ft1.getEp() << std::endl;
	std::cout << "Attack Damage:\t" << ft1.getAd() << std::endl;

	ft1.attack("enemy");
	std::cout << "Hit Points:\t" << ft1.getHp() << std::endl;
	std::cout << "Energy Points:\t"<< ft1.getEp() << std::endl;
	std::cout << "Attack Damage:\t" << ft1.getAd() << std::endl;

	ft1.highFivesGuys();

	return 0;
}
