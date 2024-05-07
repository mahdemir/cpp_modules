/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   BitcoinExchange.cpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: mademir <mademir@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/03/02 13:40:00 by mademir       #+#    #+#                 */
/*   Updated: 2024/05/07 00:58:01 by mademir       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

/******** CONSTRUCTOR(S) ******************************************************/

BitcoinExchange::BitcoinExchange() {}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& toCopy)
{
	*this = toCopy;
}

/******** DESTRUCTOR **********************************************************/

BitcoinExchange::~BitcoinExchange() {}

/******** OVERLOAD FUNCTION(S) ************************************************/

BitcoinExchange&	BitcoinExchange::operator = (const BitcoinExchange& toCopy)
{
	(void)toCopy;
	if (this != &toCopy)
	{
		_map = toCopy._map;
		_date = toCopy._date;
		_value = toCopy._value;
	}
	return (*this);
}

/******** SETTER(S) ***********************************************************/

void	BitcoinExchange::insertValue(std::string date, float val)
{
	_dataMap[date] = val;
}

/******** HELPER(S) ***********************************************************/

static inline bool badInputMsg(std::string& line)
{
	std::cerr	<< BAD_INPUT
				<< line
				<< std::endl;
	return (false);
}

float	safeToFloat(std::string input, float data)
{
	float sum;
	try
	{
		sum = std::stof(input) * data;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		exit(1);
	}
	return (sum);
}

static bool	validValue(std::string& line, std::string& allLine)
{
	for (size_t i = 0; i < line.size(); i++)
	{
		char c = line[i];
		if ((!std::isdigit(c) && c != '.') || (c == '-' && c == '+'))
		{
			if (c == '-')
			{
				std::cerr	<< NOT_POSITIVE
							<< std::endl;
			}
			else
			{
				badInputMsg(allLine);
			}
			return (false);
		}
	}
	float val = safeToFloat(line);
	if ((val < 0 || val > 1000) || line.size() > 4)
	{
		std::cerr	<< TOO_LARGE
					<< std::endl;
		return (false);
	}
	return (true);
}

static bool	validDate(std::string& line, std::string& allLine)
{
	std::regex dateFormat(YYYY_MM_DD);

	if (std::regex_search(line, dateFormat))
	{
		int mm = stoi(line.substr(5,7));
		int dd = stoi(line.substr(8,10));
		int yyyy = stoi(line.substr(0,4));
		int maxDay = 31;

		if (mm == 0)
			badInputMsg(allLine);
		if (mm % 2 == 0)
			maxDay = 30;
		if (mm == 2)
		{
			if ((yyyy % 4 == 0 && yyyy % 100 != 0) || (yyyy % 400 == 0))
				maxDay = 29;
			else
				maxDay = 28;
		}
		if (dd >= 1 && dd <= maxDay)
			return (true);
	}
	return (badInputMsg(allLine));
}

bool	BitcoinExchange::isValid(std::string& line)
{
	std::size_t valuePos;
	std::string tmp_date;
	std::size_t pos;

	if (line.find_first_not_of("0123456789-|. ") != std::string::npos)
		return (badInputMsg(line));
	tmp_date = line.substr(0, 12);
	pos = tmp_date.find('|');
	if (pos == std::string::npos || pos != 11)
		return (badInputMsg(line));
	_date = line.substr(0, 10);
	valuePos = line.find('|');
	if (valuePos != std::string::npos)
	{
		_value = line.substr(valuePos);
		if (_value.empty() || _value[0] != '|' || _value[1] != ' ')
			return (badInputMsg(line));
		 if (_value.size() >= 3) 
			_value = &_value[2];
		else
			return (badInputMsg(line));
	}
	return (validDate(_date, line) && validValue(_value, line));
}

static void	print(std::string& date, std::string& valueInput, float& valueData)
{
	float sum = safeToFloat(valueInput, valueData);
	std::string num;
	std::ostringstream oss;

	oss	<< std::fixed
		<< std::setprecision(2)
		<< sum;
	num = oss.str();
	if (num[num.size() - 1] == '0' && num[num.size() - 2] != '.')
		num.pop_back();
	std::cout	<< date
				<< " => "
				<< valueInput
				<< " = "
				<< num
				<< std::endl;
}

void	BitcoinExchange::findValue()
{
	auto it = _dataMap.find(_date);

	if (it != _dataMap.end())
		print(_date, _value, it->second);
	else
	{
		std::string lowerDate;
		float		lowerFloat;
		for (const auto& pair : _dataMap)
		{
			const std::string& date = pair.first;
			const float& fl = pair.second;
			if (date < _date)
			{
				if (lowerDate.empty() || date > lowerDate)
				{
                	lowerDate = date;
					lowerFloat = fl;
				}
			}	
		}
		print(_date, _value, lowerFloat);
	}
}
