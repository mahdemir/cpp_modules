/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   easyfind.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mademir <mademir@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/29 15:54:42 by mademir       #+#    #+#                 */
/*   Updated: 2024/03/01 06:51:17 by mademir       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/******** DEFINES *************************************************************/

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

/******** INCLUDES ************************************************************/

#include <iostream>
#include <algorithm>

/******** TEMPLATE(S) *********************************************************/

template <typename T>
typename T::iterator	easyfind(T& container, int toFind)
{
	auto it = std::find(container.begin(), container.end(), toFind);

	return (it);
}

#endif // EASYFIND_HPP
