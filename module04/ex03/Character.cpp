/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: mademir <mademir@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/08 15:20:41 by mademir       #+#    #+#                 */
/*   Updated: 2024/02/19 14:06:57 by mademir       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

/******** CONSTRUCTOR(S) ******************************************************/

	Character::Character(std::string name)
	{
		_name = name;
		for (int i = 0; i < 4; i++)
			_slot[i] = NULL;
	}

	Character::Character(const Character &toCopy)
	{
		_name = toCopy._name;
		for (int i = 0; i < 4; i++)
		{
			_slot[i] = toCopy._slot[i]->clone();
		}
		*this = toCopy;
	}

/******** DESTRUCTOR **********************************************************/

	Character::~Character(void)
	{
		for (int i = 0; i < 4; i++)
		{
			if (_slot[i])
				delete _slot[i];
		}
	}

/******** OVERLOAD FUNCTION(S) ************************************************/

	Character	&Character::operator=(const Character &toCopy)
	{
		_name = toCopy._name;
		for (int i = 0; i < 4; i++)
		{
			if (_slot[i])
				delete _slot[i];
			_slot[i] = toCopy._slot[i]->clone();
		}
		return (*this);
	}

/******** GETTER(S) ***********************************************************/

	const std::string	&Character::getName() const
	{
		return (_name);
	}

/******** HELPER(S) ***********************************************************/

	void	Character::equip(AMateria *m)
	{
		for (int i = 0; i < 4; i++)
		{
			if (!_slot[i])
			{
				_slot[i] = m;
				return ;
			}
		}
		delete m;
	}

	void	Character::unequip(int idx)
	{
		if (idx < 4 && idx >= 0)
		{
			if (_slot[idx])
				_slot[idx] = NULL;
		}
	}

	void	Character::use(int idx, ICharacter &target)
	{
		if (idx < 4 && _slot[idx])
			_slot[idx]->use(target);
	}
