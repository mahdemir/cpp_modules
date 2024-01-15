/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   zombieHorde.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: mademir <mademir@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/13 22:07:53 by mademir       #+#    #+#                 */
/*   Updated: 2024/01/14 06:43:26 by mademir       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name)
{
	Zombie *arr;

	arr = new Zombie[N];
	for (static int i = 0; i < N; i++)
		arr[i].setName(name);
	return (arr);
}
