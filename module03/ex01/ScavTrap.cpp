/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mademir <mademir@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/17 15:57:11 by mademir       #+#    #+#                 */
/*   Updated: 2024/02/02 14:51:58 by mademir       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

/******** CONSTRUCTOR(S) ******************************************************/

	ScavTrap::ScavTrap() : ClapTrap()
	{
		std::cout << "ScavTrap default constructor called" << std::endl;
		setHitPoints(100);
		setEnergyPoints(50);
		setAttackDamage(20);
	}

	ScavTrap::ScavTrap(std::string str) : ClapTrap(str)
	{
		std::cout << "ScavTrap parameterized constructor called" << std::endl;
		setHitPoints(100);
		setEnergyPoints(50);
		setAttackDamage(20);
	}

	ScavTrap::ScavTrap(const ScavTrap &toCopy) : ClapTrap(toCopy)
	{
		std::cout << "ScavTrap copy constructor called" << std::endl;
	}

/******** DESTRUCTOR **********************************************************/

	ScavTrap::~ScavTrap()
	{
		std::cout << "ScavTrap destuctor called" << std::endl;
	}

/******** OVERLOAD FUNCTION(S) ************************************************/

	ScavTrap&	ScavTrap::operator = (const ScavTrap &toCopy)
	{
		if (this != &toCopy)
			(*this).ClapTrap::operator = (toCopy);
		return (*this);
	}

/******** HELPER(S) ***********************************************************/

	void	ScavTrap::guardGate()
	{
		std::cout << "ScavTrap " << getName() << " is now in Gate keeper mode" << std::endl;
	}

	void	ScavTrap::attack(const std::string &target)
	{
		if (checkHitPoints() && checkEneryPoints())
		{
			setEnergyPoints(getEnergyPoints() - 1);
			std::cout << "ScavTrap " << getName() << " attacks " << target << ", causing " << getAttackDamage() << " points of damage !" << std::endl;
		}
	}
