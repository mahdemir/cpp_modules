/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   iter.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mademir <mademir@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/28 14:01:33 by mademir       #+#    #+#                 */
/*   Updated: 2024/03/06 21:32:06 by mademir       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/******** DEFINES *************************************************************/

#ifndef ITER_HPP
#define ITER_HPP

/******** INCLUDE(S) **********************************************************/

#include <iostream>

/******** TEMPLATE(S) *********************************************************/

template <typename T>
void val65(T& val)
{
	val = static_cast<T>(65);
}

template <typename T>
void print(T& val)
{
	std::cout << val << std::endl;
}

template <typename T>
void	iter(T *arr, size_t len, void (*func)(T &))
{
	for (size_t i = 0; i < len; i++)
	{
		func(arr[i]);
	}
}

#endif // ITER_HPP
