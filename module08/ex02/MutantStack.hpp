/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   MutantStack.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: mademir <mademir@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/03/01 12:31:26 by mademir       #+#    #+#                 */
/*   Updated: 2024/03/02 12:57:34 by mademir       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/******** DEFINES *************************************************************/

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

/******** INCLUDES ************************************************************/

#include <iostream>
#include <stack>

/******** CLASSES *************************************************************/

template <typename T>
class MutantStack : public std::stack<T>
{
public:
	typedef typename std::stack<T>::container_type::iterator iterator;

	MutantStack();
	MutantStack(const MutantStack& toCopy);
	~MutantStack();

	MutantStack	operator = (const MutantStack& toCopy);

	iterator	begin();
	iterator	end();
};

#endif // MUTANTSTACK_HPP
