/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mademir <mademir@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/13 20:57:02 by mademir       #+#    #+#                 */
/*   Updated: 2024/01/14 06:47:15 by mademir       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	int		n = 5;
	Zombie	*arr;

	arr = zombieHorde(n, "Heap Zombie");
	for (int i = 0; i < n; i++)
		arr[i].announce();
	delete[] arr;
	return 0;
}
