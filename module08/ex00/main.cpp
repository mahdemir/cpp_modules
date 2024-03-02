/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mademir <mademir@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/29 15:54:40 by mademir       #+#    #+#                 */
/*   Updated: 2024/03/02 13:02:11 by mademir       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>

int	main()
{
	std::vector<int> vec = { 1, 2, 3, 4, 5 };
	auto it = ::easyfind(vec, 5);

	if (it == vec.end())
		std::cout << "not found" << std::endl;
	else
	{
		std::cout	<< "found at index "
					<< std::distance(vec.begin(), it)
					<< std::endl;		
	}

	return (0);
}
