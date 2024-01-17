/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mademir <mademir@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/17 23:50:24 by mademir       #+#    #+#                 */
/*   Updated: 2024/01/17 23:53:54 by mademir       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
private:

public:
	FragTrap(void);
	FragTrap(std::string str);
	FragTrap(const FragTrap &toCopy);
	FragTrap	&operator = (const FragTrap &toCopy);
	~FragTrap(void);
	void		highFivesGuys(void);
};

#endif
