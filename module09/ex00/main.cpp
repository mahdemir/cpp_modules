/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mademir <mademir@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/03/02 13:39:54 by mademir       #+#    #+#                 */
/*   Updated: 2024/03/05 17:08:26 by mademir       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <fstream>

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << CANNOT_OPEN << std::endl;
		return (1);
	}

	std::fstream	dataFile;
	std::string		dataLine;

	dataFile.open("./data.csv", std::fstream::in);
	if (!dataFile.is_open())
	{
		std::cerr << CANNOT_OPEN << std::endl;
		return (1);
	}

	BitcoinExchange	btc;

	std::getline(dataFile, dataLine);
	while (std::getline(dataFile, dataLine))
	{
		std::string first = dataLine.substr(0, 10);
		std::string second = dataLine.substr(11);
		btc.insertValue(first, safeToFloat(second));
	}

	std::fstream	inFile;
	std::string		inLine;

	inFile.open(argv[1], std::fstream::in);
	if (!inFile.is_open())
	{
		std::cerr << CANNOT_OPEN << std::endl;
		return (1);
	}

	std::getline(inFile, inLine);
	while (std::getline(inFile, inLine))
	{	
		if (btc.isValid(inLine))
			btc.findValue();
	}
	inFile.close();
	return (0);
}
