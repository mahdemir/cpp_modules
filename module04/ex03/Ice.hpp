/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Ice.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: mademir <mademir@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/08 14:21:22 by mademir       #+#    #+#                 */
/*   Updated: 2024/02/09 06:22:54 by mademir       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/******** DEFINES *************************************************************/

#ifndef ICE_HPP
#define ICE_HPP

/******** INCLUDES ************************************************************/

#include "AMateria.hpp"

/******** CLASSES *************************************************************/

class Ice : virtual public AMateria
{
public:
						Ice();
						Ice(const Ice &toCopy);
						~Ice();

	Ice&				operator = (const Ice &toCopy);

	AMateria*			clone(void) const;
	void				use(ICharacter& target);
};

#endif // ICE_HPP
