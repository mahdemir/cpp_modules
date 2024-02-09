/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: mademir <mademir@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/08 15:17:27 by mademir       #+#    #+#                 */
/*   Updated: 2024/02/09 06:23:00 by mademir       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/******** DEFINES *************************************************************/

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

/******** INCLUDES ************************************************************/

#include "ICharacter.hpp"

/******** CLASSES *************************************************************/

class Character: public ICharacter
{
private:
	std::string			_name;
	AMateria*			_slot[4];

public:
						Character(std::string name);
						Character(const Character &toCopy);
						~Character();

	Character&			operator = (const Character &toCopy);

	const std::string&	getName() const;
	void				equip(AMateria *m);
	void				unequip(int idx);
	void				use(int idx, ICharacter &target);
	AMateria*			getMateriaFromInventory(int idx);
};

#endif // CHARACTER_HPP
