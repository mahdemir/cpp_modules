/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mademir <mademir@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/17 15:57:00 by mademir       #+#    #+#                 */
/*   Updated: 2024/01/18 00:29:29 by mademir       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>

class ScavTrap : public virtual ClapTrap
{
private:

public:
	ScavTrap(void);
	ScavTrap(std::string str);
	ScavTrap(const ScavTrap &toCopy);
	ScavTrap	&operator = (const ScavTrap &toCopy);
	~ScavTrap(void);

	void		attack(std::string target);
	void		guardGate(void);
};

#endif
