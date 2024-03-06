/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   BitcoinExchange.hpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: mademir <mademir@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/03/02 13:39:56 by mademir       #+#    #+#                 */
/*   Updated: 2024/03/05 17:01:16 by mademir       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/******** DEFINE(S) ***********************************************************/

#ifndef BE_HPP
#define BE_HPP

#define YYYY_MM_DD "\\b\\d{4}-\\d{2}-\\d{2}\\b"
#define CANNOT_OPEN "Error: could not open file."
#define NOT_POSITIVE "Error: not a positive number."
#define BAD_INPUT "Error: bad input => "
#define TOO_LARGE "Error: too large a number."

/******** INCLUDE(S) **********************************************************/

#include <iostream>
#include <unordered_map>
#include <regex>
#include <string>
#include <sstream>
#include <iomanip>

/******** TYPEDEF(S) **********************************************************/

typedef std::unordered_map<std::string, float> t_map;

/******** CLASS(ES) ***********************************************************/

class BitcoinExchange
{
private:
	t_map				_map;
	t_map				_dataMap;
	std::string 		_date;
	std::string 		_value;

public:
						BitcoinExchange();
						BitcoinExchange(const BitcoinExchange& toCopy);
						~BitcoinExchange();

	BitcoinExchange&	operator = (const BitcoinExchange& toCopy);

	bool				isValid(std::string& line);
	void				findValue();
	void				insertValue(std::string date, float val);
};

/******** PROTOTYPE(S) ********************************************************/

float					safeToFloat(std::string input, float data = 1.0f);

#endif // BE_HPP
