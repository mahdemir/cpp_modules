/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   MateriaSource.hpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: mademir <mademir@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/08 15:24:30 by mademir       #+#    #+#                 */
/*   Updated: 2024/02/18 17:31:30 by mademir       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/******** DEFINES *************************************************************/

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

/******** INCLUDES ************************************************************/

#include "IMateriaSource.hpp"

/******** CLASSES *************************************************************/

class MateriaSource: public IMateriaSource
{
private:
	AMateria*		_learnedMateria[4];

public:
					MateriaSource();
					MateriaSource(const MateriaSource &toCopy);
					~MateriaSource();

	MateriaSource&	operator = (const MateriaSource &toCopy);

	void			learnMateria(AMateria *materia);
	AMateria*		createMateria(std::string const &type);
};

#endif // MATERIASOURCE_HPP
