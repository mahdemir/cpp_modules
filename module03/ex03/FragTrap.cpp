/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mademir <mademir@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/17 23:50:15 by mademir       #+#    #+#                 */
/*   Updated: 2024/01/18 00:29:20 by mademir       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

/*********** CONSTRUCTORS *****************************************************/

FragTrap::FragTrap(void) : ClapTrap()
{
	std::cout << "FragTrap default constructor called" << std::endl;
	setHp(100);
	setEp(30);
	setAd(100);
}

FragTrap::FragTrap(std::string str) : ClapTrap(str)
{
	std::cout << "FragTrap constructor called" << std::endl;
	setHp(100);
	setEp(30);
	setAd(100);
}

FragTrap::FragTrap(const FragTrap &toCopy) : ClapTrap(toCopy)
{
	std::cout << "FragTrap copy constructor called" << std::endl;
}

/*********** DECONSTRUCTOR ****************************************************/

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap destuctor called" << std::endl;
}

/*********** OVERLOAD FUNC ****************************************************/

FragTrap	&FragTrap::operator = (const FragTrap &toCopy)
{
	(*this).ClapTrap::operator=(toCopy);
	return (*this);
}

/*********** HELPERS **********************************************************/

void	FragTrap::highFivesGuys(void)
{
	std::cout << "High Five request" << std::endl;
}
