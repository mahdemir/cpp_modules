/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   MateriaSource.cpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: mademir <mademir@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/08 15:26:38 by mademir       #+#    #+#                 */
/*   Updated: 2024/02/19 13:51:03 by mademir       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

/******** CONSTRUCTOR(S) ******************************************************/

	MateriaSource::MateriaSource()
	{
		for (int i = 0; i < 4; i++)
			_learnedMateria[i] = NULL;
	}

	MateriaSource::MateriaSource(const MateriaSource &toCopy)
	{
		*this = toCopy;
	}

/******** DESTRUCTOR **********************************************************/

	MateriaSource::~MateriaSource()
	{
		for (int i = 0; i < 4; i++)
		{
			if (_learnedMateria[i])
				delete _learnedMateria[i];
		}
	}

/******** OVERLOAD FUNCTION(S) ************************************************/

	MateriaSource&	MateriaSource::operator = (const MateriaSource &toCopy)
	{
		for (int i = 0; i < 4; i++)
		{
			if (_learnedMateria[i])
				delete _learnedMateria[i];
			_learnedMateria[i] = toCopy._learnedMateria[i]->clone();
		}
		return (*this);
	}

/******** HELPER(S) ***********************************************************/

	void	MateriaSource::learnMateria(AMateria *materia)
	{
		if (!materia)
			return ;
		for (int i = 0; i < 4; i++)
		{
			if (!_learnedMateria[i])
			{
				_learnedMateria[i] = materia->clone();
				break ;
			}
		}
		delete materia;
	}

	AMateria*	MateriaSource::createMateria(std::string const &type)
	{
		for (int i = 0; i < 4; i++)
		{
			if (_learnedMateria[i] && _learnedMateria[i]->getType() == type)
				return (_learnedMateria[i]->clone());
		}
		return (NULL);
	}
