/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mademir <mademir@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/13 20:57:02 by mademir       #+#    #+#                 */
/*   Updated: 2024/01/13 21:55:12 by mademir       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie* heap = newZombie("Heap Zombie");
	heap->announce();
	delete heap;
	randomChump("Stack Zombie");
}
