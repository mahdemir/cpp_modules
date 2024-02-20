/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cure.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mademir <mademir@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/08 14:21:16 by mademir       #+#    #+#                 */
/*   Updated: 2024/02/15 14:23:37 by mademir       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

/******** CONSTRUCTOR(S) ******************************************************/

	Cure::Cure() : AMateria("cure") {}

	Cure::Cure(const Cure &toCopy) : AMateria("cure")
	{
		(*this) = toCopy;
	}

/******** DESTRUCTOR **********************************************************/

	Cure::~Cure() {}

/******** OVERLOAD FUNCTION(S) ************************************************/

	Cure&	Cure::operator = (const Cure &toCopy)
	{
		if (this != &toCopy)
		{
			// While assigning a Materia to another,
			// copying the type doesn’t make sense.
		}
		return (*this);
	}

/******** HELPER(S) ***********************************************************/

	Cure*	Cure::clone() const
	{
		return (new Cure());
	}

	void		Cure::use(ICharacter& target)
	{
		std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
	}
