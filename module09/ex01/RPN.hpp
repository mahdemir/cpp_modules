/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RPN.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: mademir <mademir@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/03/04 08:33:29 by mademir       #+#    #+#                 */
/*   Updated: 2024/03/06 14:23:17 by mademir       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/******** DEFINE(S) ***********************************************************/

#ifndef RPN_HPP
#define RPN_HPP

/******** INCLUDE(S) **********************************************************/

#include <iostream>
#include <stack>

/******** CLASS(ES) ***********************************************************/

class RPN
{
private:
	std::stack<int>	_stack;

public:
					RPN();
					RPN(const RPN& toCopy);
					~RPN();

	RPN&			operator = (const RPN& toCopy);

	void			pushStack(int val);
	int&			topStack();
	void			popStack();
 	std::size_t		sizeStack() const;
};

#endif // RPN_HPP
