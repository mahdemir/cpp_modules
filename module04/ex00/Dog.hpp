/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: mademir <mademir@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/03 19:23:03 by mademir       #+#    #+#                 */
/*   Updated: 2024/02/03 19:23:04 by mademir       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/******** DEFINES *************************************************************/

#ifndef DOG_HPP
#define DOG_HPP

/******** INCLUDES ************************************************************/

#include "Animal.hpp"

/******** CLASSES *************************************************************/

class Dog : public Animal
{
private:

public:
			Dog();
			Dog(const Dog &toCopy);
			~Dog();

			Dog&	operator = (const Dog &toCopy);

	void	makeSound() const;
};

#endif // DOG_HPP
