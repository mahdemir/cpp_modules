/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mademir <mademir@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/17 15:57:11 by mademir       #+#    #+#                 */
/*   Updated: 2024/01/18 00:29:28 by mademir       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

/*********** CONSTRUCTORS *****************************************************/

ScavTrap::ScavTrap(void) : ClapTrap()
{
	std::cout << "ScavTrap default constructor called" << std::endl;
	setHp(100);
	setEp(50);
	setAd(20);
}

ScavTrap::ScavTrap(std::string str) : ClapTrap(str)
{
	std::cout << "ScavTrap constructor called" << std::endl;
	setHp(100);
	setEp(50);
	setAd(20);
}

ScavTrap::ScavTrap(const ScavTrap &toCopy) : ClapTrap(toCopy)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
}

/*********** DECONSTRUCTOR ****************************************************/

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap destuctor called" << std::endl;
}

/*********** OVERLOAD FUNC ****************************************************/

ScavTrap	&ScavTrap::operator = (const ScavTrap &toCopy)
{
	(*this).ClapTrap::operator = (toCopy);
	return (*this);
}

/*********** ACTIONS **********************************************************/

void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << getName() << " is now in Gate keeper mode" << std::endl;
}

void	ScavTrap::attack(std::string target)
{
	if (isDead())
	{
		std::cout << "ScavTrap " << getName() << " cant't attack." << std::endl;
		return ;
	}
	if (!hasEnergy())
		return ;
	setEp(getEp() - 1);
	std::cout << "ScavTrap " << getName() << " attacks " << target << ", causing " << getAd() << " points of damage !" << std::endl;
}
