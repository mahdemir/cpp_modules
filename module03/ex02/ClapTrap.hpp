/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mademir <mademir@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/17 14:45:42 by mademir       #+#    #+#                 */
/*   Updated: 2024/01/18 00:10:48 by mademir       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
protected:
	std::string	name;
	int			hp;
	int			ep;
	int			ad;

public:
	ClapTrap();
	ClapTrap(std::string str);
	ClapTrap(const ClapTrap &toCopy);
	ClapTrap	&operator = (const ClapTrap &toCopy);
	~ClapTrap();

	void		setHp(int points);
	void		setEp(int points);
	void		setAd(int points);
	void		setName(std::string str);
	int			getHp(void);
	int			getEp(void);
	int			getAd(void);
	std::string	getName(void);

	void		attack(const std::string& target);
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);
	bool		hasEnergy();
	bool		isDead();
};

#endif
