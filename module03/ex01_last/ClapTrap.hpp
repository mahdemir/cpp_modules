/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mademir <mademir@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/17 14:45:42 by mademir       #+#    #+#                 */
/*   Updated: 2024/02/01 12:25:45 by mademir       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/******** DEFINES *************************************************************/
#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

/******** INCLUDES ************************************************************/

	#include <iostream>

/******** CLASSES *************************************************************/

class ClapTrap
{
private:
	std::string		_name;
	unsigned int	_hitPoints;
	unsigned int	_energyPoints;
	unsigned int	_attackDamage;

public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap &toCopy);
	~ClapTrap();

	ClapTrap&		operator = (const ClapTrap &toCopy);

	void			attack(const std::string &target);
	void			takeDamage(unsigned int amount);
	void			beRepaired(unsigned int amount);

	int				checkHitPoints();
	int				checkEneryPoints();

	std::string		getName();
	unsigned int	getHitPoints();
	unsigned int	getEnergyPoints();
	unsigned int	getAttackDamage();

	void			setName(std::string name);
	void			setHitPoints(unsigned int amount);
	void			setEnergyPoints(unsigned int amount);
	void			setAttackDamage(unsigned int amount);
};

#endif // CLAPTRAP_HPP
