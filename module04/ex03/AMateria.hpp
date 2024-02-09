/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AMateria.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mademir <mademir@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/08 14:21:15 by mademir       #+#    #+#                 */
/*   Updated: 2024/02/09 06:23:06 by mademir       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/******** DEFINES *************************************************************/

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

/******** INCLUDES ************************************************************/

#include <iostream>
#include "ICharacter.hpp"

/******** CLASSES *************************************************************/

class ICharacter;

class AMateria
{
protected:
	std::string				type;

public:
							AMateria();
							AMateria(std::string const &type);
							AMateria(const AMateria &toCopy);
	virtual					~AMateria();

	AMateria&				operator = (const AMateria &toCopy);

	const std::string&		getType() const;

	virtual AMateria*		clone() const = 0;
	virtual void			use(ICharacter& target);
};

#endif // AMATERIA_HPP
