/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   DiamondTrap.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: mademir <mademir@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/18 00:05:50 by mademir       #+#    #+#                 */
/*   Updated: 2024/02/02 15:44:29 by mademir       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/******** DEFINES *************************************************************/

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

/******** INCLUDES ************************************************************/

#include <iostream>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

/******** CLASSES *************************************************************/

class DiamondTrap : public FragTrap, public ScavTrap
{
private:
	std::string	_name;

public:
	DiamondTrap();
	DiamondTrap(std::string n);
	DiamondTrap(const DiamondTrap &toCopy);
	~DiamondTrap(void);

	DiamondTrap&	operator = (const DiamondTrap &toCopy);

	using		ScavTrap::attack;
	void		whoAmI();
};

#endif // DIAMONDTRAP_HPP
