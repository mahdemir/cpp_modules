/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   megaphone.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: mademir <mademir@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/03 07:15:27 by mademir       #+#    #+#                 */
/*   Updated: 2024/01/08 14:53:54 by mademir       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	for (int i = 1; argv[i]; i++)
		for (int j = 0; argv[i][j]; j++)
			std::cout << (char)std::toupper(argv[i][j]);
	std::cout << std::endl;
}
