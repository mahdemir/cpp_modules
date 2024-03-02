/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Span.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mademir <mademir@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/03/01 07:49:33 by mademir       #+#    #+#                 */
/*   Updated: 2024/03/02 13:03:48 by mademir       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/******** DEFINES *************************************************************/

#ifndef SPAN_HPP
#define SPAN_HPP

/******** INCLUDES ************************************************************/

#include <iostream>
#include <exception>
#include <algorithm>
#include <vector>

/******** CLASSES *************************************************************/

class Span
{
private:
	std::vector<int>	_vec;
	unsigned int		_maxSize;

public:
						Span();
						Span(unsigned int N);
						Span(const Span& toCopy);
						~Span();

	Span&				operator = (const Span& toCopy);

	void				addNumber(int num);
	void				addNumber(int first, int last);
	int					shortestSpan();
	int					longestSpan();

	struct				maxSizeReached : std::exception
	{
    	virtual const char* what() const throw();
	};
	struct				tooLessValues : std::exception
	{
		virtual const char* what() const throw();
	};
};

#endif // SPAN_HPP
