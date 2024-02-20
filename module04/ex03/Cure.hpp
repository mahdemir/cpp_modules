/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cure.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mademir <mademir@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/08 14:21:18 by mademir       #+#    #+#                 */
/*   Updated: 2024/02/18 16:52:51 by mademir       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/******** DEFINES *************************************************************/

#ifndef CURE_HPP
#define CURE_HPP

/******** INCLUDES ************************************************************/

#include "AMateria.hpp"

/******** CLASSES *************************************************************/

class Cure : public AMateria
{
public:
						Cure();
						Cure(const Cure &toCopy);
						~Cure();

	Cure&				operator = (const Cure &toCopy);

	Cure*				clone() const;
	void				use(ICharacter &target);
};

#endif // CURE_HPP
