/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScalarConverter.cpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: mademir <mademir@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/24 22:44:13 by mademir       #+#    #+#                 */
/*   Updated: 2024/02/25 13:26:43 by mademir       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

/******** CONSTRUCTOR(S) ******************************************************/

ScalarConverter::ScalarConverter() {}

ScalarConverter::ScalarConverter(const ScalarConverter& toCopy) { (void)toCopy; }

/******** DESTRUCTOR **********************************************************/

ScalarConverter::~ScalarConverter() {}

/******** OVERLOAD FUNCTION(S) ************************************************/

ScalarConverter&	ScalarConverter::operator = (const ScalarConverter& toCopy)
{
	(void)toCopy;
	return (*this);
}

/******** HELPER(S) ***********************************************************/

static void	toChar(const std::string& format)
{
	char	c;
	int		num;
	try
	{
		num = std::stoi(format);
	}
	catch(const std::exception& e)
	{
		std::cout << "char: " << "impossible" << std::endl;
		return ;
	}
	if (num >= 32 && num <= 127)
	{
		c = static_cast<char>(num);
		std::cout << "char: " << "'" << c << "'" << std::endl;
	}
	else
		std::cout << "char: " << "Non displayable" << std::endl;
}

static void	toInt(const std::string& format)
{
	int	num;

	try
	{
		num = static_cast<int>(std::stoi(format));
	}
	catch(const std::exception& e)
	{
		std::cerr << "int: impossible" << std::endl;
		return ;
	}
	std::cout << "int: " << num << std::endl;
}

static void	toFloat(const std::string& format)
{
	float	num;

	try
	{
		num = static_cast<float>(std::stof(format));
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
		return ;
	}
	std::cout	<< std::fixed
				<< std::setprecision(1)
				<< "float: "
				<< num
				<< "f"
				<< std::endl;
}

static void	toDouble(const std::string& format)
{
	double	num;

	try
	{
		num = static_cast<double>(std::stof(format));
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
		return ;
	}
	std::cout	<< std::fixed
				<< std::setprecision(1)
				<< "double: "
				<< num
				<< std::endl;
}

void	ScalarConverter::convert(const std::string& format)
{
	toChar(format);
	toInt(format);
	toFloat(format);
	toDouble(format);
}
