/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AMateria.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mademir <mademir@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/08 14:21:13 by mademir       #+#    #+#                 */
/*   Updated: 2024/02/09 06:12:36 by mademir       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

/******** CONSTRUCTOR(S) ******************************************************/

	AMateria::AMateria()
	{
		type = "default";
	}

	AMateria::AMateria(std::string const &type)
	{
		this->type = type;
	}

	AMateria::AMateria(const AMateria &toCopy)
	{
		*this = toCopy;
	}

/******** DESTRUCTOR **********************************************************/

	AMateria::~AMateria() {}

/******** OVERLOAD FUNCTION(S) ************************************************/

	AMateria&	AMateria::operator = (const AMateria &toCopy)
	{
		if (this != &toCopy)
		{
			// While assigning a Materia to another,
			// copying the type doesn’t make sense.
		}
		return (*this);
	}

/******** GETTER(S) ***********************************************************/

	std::string const&		AMateria::getType() const
	{
		return (this->type);
	}

/******** HELPER(S) ***********************************************************/

	void	AMateria::use(ICharacter& target)
	{
		(void)target;
	}
