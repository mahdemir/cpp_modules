/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mademir <mademir@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/17 23:50:15 by mademir       #+#    #+#                 */
/*   Updated: 2024/02/02 13:10:59 by mademir       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

/******** CONSTRUCTOR(S) ******************************************************/

	FragTrap::FragTrap() : ClapTrap()
	{
		std::cout << "FragTrap default constructor called" << std::endl;
		setHitPoints(100);
		setEnergyPoints(100);
		setAttackDamage(30);
	}

	FragTrap::FragTrap(std::string str) : ClapTrap(str)
	{
		std::cout << "FragTrap parameterized constructor called" << std::endl;
		setHitPoints(100);
		setEnergyPoints(100);
		setAttackDamage(30);
	}

	FragTrap::FragTrap(const FragTrap &toCopy) : ClapTrap(toCopy)
	{
		std::cout << "FragTrap copy constructor called" << std::endl;
	}

/******** DESTRUCTOR **********************************************************/

	FragTrap::~FragTrap()
	{
		std::cout << "FragTrap destuctor called" << std::endl;
	}

/******** OVERLOAD FUNCTION(S) ************************************************/

	FragTrap&	FragTrap::operator = (const FragTrap &toCopy)
	{
		if (this != &toCopy)
			(*this).ClapTrap::operator = (toCopy);
		return (*this);
	}

/******** HELPER(S) ***********************************************************/

	void	FragTrap::highFivesGuys()
	{
		std::cout << "High Five request" << std::endl;
	}
