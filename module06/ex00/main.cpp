/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mademir <mademir@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/24 22:44:16 by mademir       #+#    #+#                 */
/*   Updated: 2024/05/16 11:31:20 by mademir       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		std::string val(argv[1]);
		ScalarConverter::convert(val);
	}
	else
		std::cout << "Usage: ./scalarconverter <number> (single arg)" << std::endl;

	return (0);
}
