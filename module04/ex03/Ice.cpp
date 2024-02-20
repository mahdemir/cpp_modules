/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Ice.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: mademir <mademir@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/08 14:21:20 by mademir       #+#    #+#                 */
/*   Updated: 2024/02/15 14:23:44 by mademir       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

/******** CONSTRUCTOR(S) ******************************************************/

	Ice::Ice() : AMateria("ice") {}

	Ice::Ice(const Ice &toCopy) : AMateria("ice")
	{
		(*this) = toCopy;
	}

/******** DESTRUCTOR **********************************************************/

	Ice::~Ice() {}

/******** OVERLOAD FUNCTION(S) ************************************************/

	Ice&	Ice::operator = (const Ice &toCopy)
	{
		if (this != &toCopy)
		{
			// While assigning a Materia to another,
			// copying the type doesn’t make sense.
		}
		return (*this);
	}

/******** HELPER(S) ***********************************************************/

	Ice*	Ice::clone() const
	{
		return (new Ice());
	}

	void		Ice::use(ICharacter& target)
	{
		std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	}
