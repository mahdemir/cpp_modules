/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanB.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: mademir <mademir@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/14 07:36:49 by mademir       #+#    #+#                 */
/*   Updated: 2024/05/07 14:09:54 by mademir       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string n) : name(n), weapon(nullptr) {}

void	HumanB::attack()
{
	std::cout << name << " attacks with their ";

	if (weapon != nullptr)
		std::cout << weapon->getType();
	else
		std::cout << "bare hands";
	std::cout <<  std::endl;
}

void	HumanB::setWeapon(Weapon &w)
{
	weapon = &w;	
}
