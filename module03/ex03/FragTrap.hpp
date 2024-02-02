/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mademir <mademir@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/17 23:50:24 by mademir       #+#    #+#                 */
/*   Updated: 2024/02/02 15:48:37 by mademir       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/******** DEFINES *************************************************************/

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

/******** INCLUDES ************************************************************/

#include <iostream>
#include "ClapTrap.hpp"

/******** CLASSES *************************************************************/

class FragTrap : public virtual ClapTrap
{
protected:
	const unsigned int	_attackDamage = 30;
public:
	FragTrap();
	FragTrap(std::string str);
	FragTrap(const FragTrap &toCopy);
	~FragTrap();

	FragTrap&	operator = (const FragTrap &toCopy);

	void		highFivesGuys();
};

#endif // FRAGTRAP_HPP
