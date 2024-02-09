/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: mademir <mademir@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/03 19:23:03 by mademir       #+#    #+#                 */
/*   Updated: 2024/02/07 11:42:50 by mademir       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/******** DEFINES *************************************************************/

#ifndef DOG_HPP
#define DOG_HPP

/******** INCLUDES ************************************************************/

#include "Animal.hpp"
#include "Brain.hpp"

/******** CLASSES *************************************************************/

class Dog : public Animal
{
private:
	Brain	*br;

public:
			Dog();
			Dog(const Dog &toCopy);
			~Dog();

			Dog&	operator = (const Dog &toCopy);

	void	makeSound() const;
	Brain*	getBrain() const;
};

#endif // DOG_HPP
