/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mademir <mademir@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/17 15:57:00 by mademir       #+#    #+#                 */
/*   Updated: 2024/02/01 23:55:16 by mademir       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/******** DEFINES *************************************************************/

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

/******** INCLUDES ************************************************************/

#include "ClapTrap.hpp"
#include <iostream>

/******** CLASSES *************************************************************/

class ScavTrap : public ClapTrap
{
private:

public:
	ScavTrap();
	ScavTrap(std::string str);
	ScavTrap(const ScavTrap &toCopy);
	~ScavTrap();

	ScavTrap	&operator = (const ScavTrap &toCopy);

	void		attack(const std::string &target);
	void		guardGate();
};

#endif // SCAVTRAP_HPP
