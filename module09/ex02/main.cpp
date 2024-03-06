/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mademir <mademir@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/03/04 13:47:18 by mademir       #+#    #+#                 */
/*   Updated: 2024/03/06 20:01:42 by mademir       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

inline static void	exitError(std::string message)
{
	if (!message.empty())
		std::cerr << message << std::endl;
	exit(1);
}

int	safeToInt(std::string str)
{
	int num = 0;
	try
	{
		num = std::stoi(str);
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	if (num < 1)
		exitError("Error");
	return (num);
}

int	main(int argc, char **argv)
{
	if (argc < 2)
		exitError("Usage: ./PmergeMe <sequence of positive integers>");

    for (int i = 1; i < argc; i++)
		safeToInt(std::string(argv[i]));

	PmergeMe s;

	s.sortVector(argc, argv);
	s.sortList(argc, argv);

	return (0);
}
