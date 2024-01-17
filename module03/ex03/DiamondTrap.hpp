/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   DiamondTrap.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: mademir <mademir@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/18 00:05:50 by mademir       #+#    #+#                 */
/*   Updated: 2024/01/18 00:29:18 by mademir       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include <iostream>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
private:
	std::string	_name;

public:
	DiamondTrap(void);
	DiamondTrap(std::string n);
	DiamondTrap(const DiamondTrap &toCopy);
	DiamondTrap	&operator = (const DiamondTrap &toCopy);
	~DiamondTrap(void);

	using ScavTrap::attack;
	void	whoAmI(void);
};

#endif
