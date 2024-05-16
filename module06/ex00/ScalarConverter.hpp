/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScalarConverter.hpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: mademir <mademir@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/24 22:44:15 by mademir       #+#    #+#                 */
/*   Updated: 2024/05/16 11:38:10 by mademir       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/******** DEFINES *************************************************************/

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

/******** INCLUDES ************************************************************/

#include <iostream>
#include <cmath> // round()
#include <iomanip> // setprecision()

/******** CLASSES *************************************************************/

class ScalarConverter
{
private:
						ScalarConverter();
						ScalarConverter(const ScalarConverter& toCopy);
						~ScalarConverter();
	
	ScalarConverter&	operator = (const ScalarConverter& toCopy);

public:
	static void			convert(std::string& format);
};

#endif // SCALARCONVERTER_HPP
