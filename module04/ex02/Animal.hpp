/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Animal.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: mademir <mademir@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/03 19:23:06 by mademir       #+#    #+#                 */
/*   Updated: 2024/02/09 06:13:06 by mademir       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/******** DEFINES *************************************************************/
#ifndef ANIMAL_HPP
#define ANIMAL_HPP

/******** INCLUDES ************************************************************/

#include <iostream>

/******** CLASSES *************************************************************/

class Animal
{
private:

protected:
	std::string		type;

public:
					Animal();
					Animal(const Animal &toCopy);
	virtual 		~Animal();

	Animal&			operator = (const Animal &toCopy);

	virtual void	makeSound() const = 0;

	std::string		getType() const;
};

#endif // ANIMAL_HPP
