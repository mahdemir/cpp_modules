/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   iter.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mademir <mademir@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/28 14:01:33 by mademir       #+#    #+#                 */
/*   Updated: 2024/02/28 17:19:35 by mademir       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/******** DEFINES *************************************************************/

#ifndef ITER_HPP
#define ITER_HPP

#define LEN 2

/******** INCLUDE(S) **********************************************************/

#include <iostream>

/******** TEMPLATE(S) *********************************************************/

template <typename T>
void ascii65(T& val)
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
