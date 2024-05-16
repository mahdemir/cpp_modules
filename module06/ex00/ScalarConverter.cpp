/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScalarConverter.cpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: mademir <mademir@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/24 22:44:13 by mademir       #+#    #+#                 */
/*   Updated: 2024/05/16 11:58:17 by mademir       ########   odam.nl         */
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
	double	tmp;
	int		num;

	try
	{
		tmp = std::stod(format);
		num = static_cast<int>(std::round(tmp));
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
	int		num;
	double	tmp;

	try
	{
		tmp = std::stod(format);
		num = static_cast<int>(std::round(tmp));
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
		num = static_cast<double>(std::stod(format));
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

void	ScalarConverter::convert(std::string& format)
{
	if (format.size() == 1)
	{
		int num = static_cast<int>(format[0]);
		format = std::to_string(num);
	}
	toChar(format);
	toInt(format);
	toFloat(format);
	toDouble(format);
}
