/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScalarConverter.hpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: mademir <mademir@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/24 22:44:15 by mademir       #+#    #+#                 */
/*   Updated: 2024/02/25 08:56:40 by mademir       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/******** DEFINES *************************************************************/

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

/******** INCLUDES ************************************************************/

#include <iostream>
#include <iomanip> // setprecision

/******** CLASSES *************************************************************/

class ScalarConverter
{
private:
						ScalarConverter();
						ScalarConverter(const ScalarConverter& toCopy);
						~ScalarConverter();
	
	ScalarConverter&	operator = (const ScalarConverter& toCopy);

public:
	static void			convert(const std::string& format);
};

#endif // SCALARCONVERTER_HPP
