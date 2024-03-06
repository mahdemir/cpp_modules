/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mademir <mademir@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/03/04 08:06:10 by mademir       #+#    #+#                 */
/*   Updated: 2024/03/06 14:19:42 by mademir       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

inline static void	exitError(std::string message)
{
	std::cerr << message << std::endl;
	exit(1);
}

inline static void	trim(std::string& str)
{
	auto pos_begin = str.find_first_not_of(" \t\n\r\f\v");
	auto pos_end = str.find_last_not_of(" \t\n\r\f\v");
	if (pos_begin == std::string::npos)
		exitError("Error");
	str = str.substr(pos_begin, pos_end - pos_begin + 1);
}

static void	isValid(std::string& str)
{
	int	numCount = 0;
	int	operatorCount = 0;
	trim(str);
	if (str[0] == '/' || str[0] == '*' || str[0] == '-' || str[0] == '+')
		exitError("Error");
	for (char c : str)
	{
		if (!std::isdigit(c) && c != '*' && c != '/' && c != '+' && c != '-' && c != ' ')
			exitError("Error");
		if (std::isdigit(c))
			numCount++;
		if (c == '*' || c == '/' || c == '+' || c == '-')
			operatorCount++;
	}
	if (numCount - operatorCount != 1 || operatorCount == 0)
		exitError("Error");
}

static int	calculation(int& num1, int& num2, char& c)
{
	int	sum = 0;

	if (c == '+')
		sum = num1 + num2;
	else if (c == '-')
		sum = num1 - num2;
	else if (c == '*')
		sum = num1 * num2;
	else if (c == '/')
		sum = num1 / num2;
	return (sum);
}

int	main(int argc, char **argv)
{
	if (argc != 2)
		exitError("Usage: ./RPN <string with Reverse Polish Notation (positif integers between 0-9)>");

	RPN			cstack;
	std::string	str = argv[1];

	isValid(str);
	for (char c : str)
	{
		if (c == ' ')
			continue ;
		else if (std::isdigit(c))
			cstack.pushStack(c - '0');
		else
		{
			int num2 = cstack.topStack();
			cstack.popStack();
			if (!cstack.sizeStack())
				exitError("Error");
			int num1 = cstack.topStack();
			cstack.popStack();	
			cstack.pushStack(calculation(num1, num2, c));
		}
	}
	std::cout << cstack.topStack() << std::endl;
	return (0);
}
