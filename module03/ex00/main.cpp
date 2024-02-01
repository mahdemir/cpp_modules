/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mademir <mademir@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/17 14:52:28 by mademir       #+#    #+#                 */
/*   Updated: 2024/02/01 09:55:12 by mademir       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	ct1 = ClapTrap("Jane");
	ClapTrap	ct2 = ClapTrap("Johny");

	ct1.attack("enemy");
	ct2.beRepaired(10);
	ct2.takeDamage(2000);
	ct2.takeDamage(1);
	ct2.attack("enemy");
	ct2.takeDamage(1000);
	return 0;
}
