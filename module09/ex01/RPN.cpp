/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RPN.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: mademir <mademir@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/03/04 08:33:31 by mademir       #+#    #+#                 */
/*   Updated: 2024/03/04 13:42:59 by mademir       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

/******** CONSTRUCTOR(S) ******************************************************/

RPN::RPN() {}

RPN::RPN(const RPN& toCopy)
{
	*this = toCopy;
}

/******** DESTRUCTOR **********************************************************/

RPN::~RPN() {}

/******** OVERLOAD FUNCTION(S) ************************************************/

RPN&	RPN::operator = (const RPN& toCopy)
{
	if (this != &toCopy)
		_stack = toCopy._stack;
	return (*this);
}

/******** GETTER(S) ***********************************************************/

int&	RPN::topStack()
{
	return (_stack.top());
}

std::size_t	RPN::sizeStack() const
{
    return _stack.size();
}

/******** SETTER(S) ***********************************************************/

void	RPN::pushStack(int val)
{
	_stack.push(val);
}

/******** HELPER(S) ***********************************************************/

void	RPN::popStack()
{
	_stack.pop();
}
