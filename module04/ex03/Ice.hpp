/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Ice.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: mademir <mademir@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/08 14:21:22 by mademir       #+#    #+#                 */
/*   Updated: 2024/02/18 16:52:46 by mademir       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/******** DEFINES *************************************************************/

#ifndef ICE_HPP
#define ICE_HPP

/******** INCLUDES ************************************************************/

#include "AMateria.hpp"

/******** CLASSES *************************************************************/

class Ice : public AMateria
{
public:
						Ice();
						Ice(const Ice &toCopy);
						~Ice();

	Ice&				operator = (const Ice &toCopy);

	Ice*				clone() const;
	void				use(ICharacter& target);
};

#endif // ICE_HPP
