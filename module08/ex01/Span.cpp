/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Span.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mademir <mademir@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/03/01 07:49:34 by mademir       #+#    #+#                 */
/*   Updated: 2024/03/02 10:02:17 by mademir       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

/******** CONSTRUCTOR(S) ******************************************************/

Span::Span() : _maxSize(0) {}

Span::Span(unsigned int N) : _maxSize(N) {}

Span::Span(const Span& toCopy) { *this = toCopy; }

/******** DESTRUCTOR **********************************************************/

Span::~Span() {}

/******** OVERLOAD FUNCTION(S) ************************************************/

Span&	Span::operator = (const Span& toCopy)
{
	if (this != &toCopy)
	{
		_vec = toCopy._vec;
		_maxSize = toCopy._maxSize;
	}
	return (*this);
}

const char* Span::maxSizeReached::what() const throw()
{
	return ("maximum size reached");
}

const char* Span::tooLessValues::what() const throw()
{
	return ("not enough values to find span");
}

/******** SETTER(S) ***********************************************************/

void	Span::addNumber(int num)
{
	if (_vec.size() > _maxSize)
		throw maxSizeReached();
	_vec.push_back(num);
}

void	Span::addNumber(int first, int last)	
{
	while (first <= last)
	{
		if (_vec.size() > _maxSize)
			throw maxSizeReached();
		_vec.push_back(first);
		first++;
	}
}

/******** HELPER(S) ***********************************************************/

int	Span::shortestSpan()
{
	int res = INT32_MAX;

	if (_vec.size() < 2)
		throw tooLessValues();
	std::vector<int> sorted = _vec;
	std::sort(sorted.begin(), sorted.end());
	for (size_t i = 0; i < (sorted.size() - 1); i++)
	{
		int diff = sorted[i + 1] - sorted[i];
		res = std::min(diff, res);
	}
	return (res);
}

int	Span::longestSpan()
{
	if (_vec.size() < 2)
		throw tooLessValues();
	auto maxVal_it = std::max_element(_vec.begin(), _vec.end());
	auto minVal_it = std::min_element(_vec.begin(), _vec.end());
	return (*maxVal_it - *minVal_it);
	
}
