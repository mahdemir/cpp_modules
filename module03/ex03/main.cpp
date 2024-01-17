/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mademir <mademir@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/17 14:52:28 by mademir       #+#    #+#                 */
/*   Updated: 2024/01/18 00:29:24 by mademir       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void)
{
	DiamondTrap	dt("Test");
	DiamondTrap	dtt;

	dt.whoAmI();
	dtt = dt;
	dtt.highFivesGuys();
	return 0;
}
