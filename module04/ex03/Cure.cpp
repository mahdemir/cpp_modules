/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cure.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mademir <mademir@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/08 14:21:16 by mademir       #+#    #+#                 */
/*   Updated: 2024/02/08 15:15:46 by mademir       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

/******** CONSTRUCTOR(S) ******************************************************/

	Cure::Cure(void) : AMateria("cure") {}

	Cure::Cure(const Cure &toCopy) : AMateria("cure")
	{
		(*this) = toCopy;
	}

/******** DESTRUCTOR **********************************************************/

	Cure::~Cure(void) {}

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

	AMateria	*Cure::clone(void) const
	{
		return (new Cure());
	}

	void		Cure::use(ICharacter& target)
	{
		std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
	}
