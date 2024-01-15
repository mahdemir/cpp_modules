/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mademir <mademir@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/15 11:30:19 by mademir       #+#    #+#                 */
/*   Updated: 2024/01/15 11:55:57 by mademir       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, const char **argv)
{
	Harl		harl;
	std::string	level;

	if (argc != 2)
		return (1);
	level = argv[1];
	harl.complain(level);

	return 0;
}
