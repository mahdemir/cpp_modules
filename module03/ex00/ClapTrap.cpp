/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mademir <mademir@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/17 14:46:39 by mademir       #+#    #+#                 */
/*   Updated: 2024/02/02 15:17:52 by mademir       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/******** CONSTRUCTOR(S) ******************************************************/

	ClapTrap::ClapTrap()
	{
		std::cout << "Default constructor called" << std::endl;
		_name = "Default";
		_hitPoints = 10;
		_energyPoints = 10;
		_attackDamage = 0;
	}

	ClapTrap::ClapTrap(std::string name)
	{
		std::cout << "Parameterized constructor called" << std::endl;
		_name = name;
		_hitPoints = 10;
		_energyPoints = 10;
		_attackDamage = 0;
	}

	ClapTrap::ClapTrap(const ClapTrap &toCopy)
	{
		std::cout << "Copy constructor called" << std::endl;
		*this = toCopy;
	}

/******** DESTRUCTOR **********************************************************/

	ClapTrap::~ClapTrap()
	{
		std::cout << "Destructor called" << std::endl;
	}

/******** OVERLOAD FUNCTION(S) ************************************************/

	ClapTrap&	ClapTrap::operator = (const ClapTrap &toCopy)
	{
		if (this != &toCopy)
		{
			_name = toCopy._name;
			_hitPoints = toCopy._hitPoints;
			_energyPoints = toCopy._energyPoints;
			_attackDamage = toCopy._attackDamage;
		}
		return (*this);
	}

/******** GETTER(S) ***********************************************************/

	std::string		ClapTrap::getName()
	{
		return (_name);
	}

	unsigned int	ClapTrap::getHitPoints()
	{
		return (_hitPoints);
	}

	unsigned int 	ClapTrap::getEnergyPoints()
	{
		return (_energyPoints);
	}

	unsigned int	ClapTrap::getAttackDamage()
	{
		return (_attackDamage);
	}

/******** SETTER(S) ***********************************************************/

	void	ClapTrap::setName(std::string name)
	{
		_name = name;
	}

	void	ClapTrap::setHitPoints(unsigned int amount)
	{
		_hitPoints = amount;
	}

	void	ClapTrap::setEnergyPoints(unsigned int amount)
	{
		_energyPoints = amount;
	}

	void	ClapTrap::setAttackDamage(unsigned int amount)
	{
		_attackDamage = amount;
	}

/******** HELPER(S) ***********************************************************/

	void	ClapTrap::attack(const std::string &target)
	{
		if (checkHitPoints() && checkEneryPoints())
		{
			_energyPoints--;
			std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
		}
	}

	void	ClapTrap::takeDamage(unsigned int amount)
	{
		if (checkHitPoints() && checkEneryPoints())
		{
			if (amount >= _hitPoints)
				_hitPoints = 0;
			else
				_hitPoints -= amount;
			std::cout << "ClapTrap " << _name << " takes " << amount << " damage !" << std::endl;
		}
	}

	void	ClapTrap::beRepaired(unsigned int amount)
	{
		if (checkHitPoints() && checkEneryPoints())
		{
			_energyPoints--;
			_hitPoints += amount;
			std::cout << "ClapTrap " << _name << " heals " << amount << " hit points !" << std::endl;
		}
	}

	int		ClapTrap::checkHitPoints()
	{
		if (_hitPoints)
			return 1;
		std::cout << "NO HIT POINTS LEFT!" << std::endl;
		return 0;
	}

	int		ClapTrap::checkEneryPoints()
	{
		if (_energyPoints)
			return 1;
		std::cout << "NO ENERGY POINTS LEFT!" << std::endl;
		return 0;
	}
