/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: mademir <mademir@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/13 20:56:59 by mademir       #+#    #+#                 */
/*   Updated: 2024/01/14 06:46:23 by mademir       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
	private:
		std::string	name;
	public:
		void	announce(void);
		void	setName(std::string n);
		~Zombie();
};

Zombie*	zombieHorde(int N, std::string name);

#endif
