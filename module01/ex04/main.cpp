/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mademir <mademir@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/14 12:02:23 by mademir       #+#    #+#                 */
/*   Updated: 2024/01/15 11:24:49 by mademir       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

std::string	ftReplace(std::string line,std::string s1, std::string s2)
{
	size_t	position;

	if (s1 == s2)
		return line;
	position = 0;
	while (position != std::string::npos)
	{
		position = line.find(s1, position);
		if (position == std::string::npos)
			break;
		line.erase(position, s1.length());
		line.insert(position, s2);
	}
	return line;
}

bool checkEmpty(const std::string& str)
{
	if (str.empty() || str.empty())
		return true;
    for (size_t i = 0; i < str.length(); ++i)
    {
        if (!std::isspace(str[i]))
            return false;
    }
    return true;
}

int	main(int argc, char **argv)
{
	std::ifstream	inFile;
	std::ofstream	outFile;
	std::string		s1 = argv[2];
	std::string		s2 = argv[3];
	std::string		line;

	if (argc != 4)
	{
		std::cout << "Wrong amount of arguments" << std::endl;
		std::cout << "Usage -> ./sed infile s1 s2" << std::endl;
		return 1;
	}
	// if (checkEmpty(s1) || checkEmpty(s2))
	// {
	// 	std::cout << "Second and/or third argument is an empty string\n";
	// 	return 1;
	// }
	if (s1.empty() || s2.empty())
		return 1;
	inFile.open(argv[1], std::ios::in);
	if (inFile.fail())
	{
		std::cout << "Error opening infile" << std::endl;
		return 1;
	}
	outFile.open(std::string(argv[1]) + ".replace", std::ios::out);
	if (outFile.fail())
	{
		std::cout << "Error creating outfile\n";
		return 1;
	}
	while (!inFile.eof())
	{
		std::getline(inFile, line);
		outFile << ftReplace(line, s1, s2);
		if (!inFile.eof())
			outFile << std::endl;
	}
	inFile.close();
	outFile.close();
	return 0;
}
