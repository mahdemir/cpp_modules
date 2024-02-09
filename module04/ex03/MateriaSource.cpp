/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   MateriaSource.cpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: mademir <mademir@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/08 15:26:38 by mademir       #+#    #+#                 */
/*   Updated: 2024/02/09 06:40:21 by mademir       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

/******** CONSTRUCTOR(S) ******************************************************/

	MateriaSource::MateriaSource(void)
	{
		for (int i = 0; i < 4; i++) {
			_learnedMateria[i] = NULL;
		}
	}

	MateriaSource::MateriaSource(const MateriaSource &toCopy)
	{
		for (int i = 0; i < 4; i++) {
			_learnedMateria[i] = toCopy._learnedMateria[i]->clone();
		}
		*this = toCopy;
	}

/******** DESTRUCTOR **********************************************************/

	MateriaSource::~MateriaSource(void)
	{
		for (int i = 0; i < 4; i++) {
			if (_learnedMateria[i])
				delete _learnedMateria[i];
		}
	}

/******** OVERLOAD FUNCTION(S) ************************************************/

	MateriaSource	&MateriaSource::operator=(const MateriaSource &toCopy)
	{
		for (int i = 0; i < 4; i++) {
			if (_learnedMateria[i])
				delete _learnedMateria[i];
			_learnedMateria[i] = toCopy._learnedMateria[i]->clone();
		}
		return (*this);
	}

/******** HELPER(S) ***********************************************************/

	void	MateriaSource::learnMateria(AMateria *materia)
	{
		for (int i = 0; i < 4; i++) {
			if (!_learnedMateria[i]) {
				_learnedMateria[i] = materia->clone();
				delete materia;
				break;
			}
		}
	}

	AMateria	*MateriaSource::createMateria(std::string const &type)
	{
		for (int i = 0; i < 4; i++) {
			if (_learnedMateria[i] && _learnedMateria[i]->getType() == type)
				return (_learnedMateria[i]->clone());
		}
		return (0);
	}
