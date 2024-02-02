/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   DiamondTrap.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: mademir <mademir@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/18 00:05:38 by mademir       #+#    #+#                 */
/*   Updated: 2024/02/02 15:49:03 by mademir       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

/******** CONSTRUCTOR(S) ******************************************************/

	DiamondTrap::DiamondTrap() : ClapTrap(), FragTrap(), ScavTrap()
	{
		std::cout << "DiamondTrap default constructor called" << std::endl;
		setHitPoints(FragTrap::getHitPoints());
		setEnergyPoints(ScavTrap::getEnergyPoints());
		setAttackDamage(FragTrap::_attackDamage);
	}

	DiamondTrap::DiamondTrap(std::string n) : ClapTrap(n), FragTrap(n), ScavTrap(n)
	{
		std::cout << "DiamondTrap parameterized constructor called" << std::endl;
		_name = n;
		ClapTrap::_name = n + "_clap_name";
		setHitPoints(FragTrap::getHitPoints());
		setEnergyPoints(ScavTrap::getEnergyPoints());
		setAttackDamage(FragTrap::_attackDamage);
	}

	DiamondTrap::DiamondTrap(const DiamondTrap &toCopy) : ClapTrap(toCopy), FragTrap(toCopy), ScavTrap(toCopy)
	{
		std::cout << "DiamondTrap copy constructor called" << std::endl;
		(*this) = toCopy;
	}

/******** DESTRUCTOR **********************************************************/

	DiamondTrap::~DiamondTrap(void)
	{
		std::cout << "DiamondTrap destructor called" << std::endl;
	}

/******** OVERLOAD FUNCTION(S) ************************************************/

	DiamondTrap&	DiamondTrap::operator = (const DiamondTrap &toCopy)
	{
		if (this != &toCopy)
			(*this).ScavTrap::operator=(toCopy);
		return (*this);
	}

/******** HELPER(S) ***********************************************************/

	void	DiamondTrap::whoAmI(void)
	{
		std::cout << "DT name : " << _name << std::endl <<"CT name : " << ClapTrap::_name << std::endl;
	}
