/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: mademir <mademir@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/03 19:22:55 by mademir       #+#    #+#                 */
/*   Updated: 2024/02/20 10:46:04 by mademir       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

/******** CONSTRUCTOR(S) ******************************************************/

	Cat::Cat()
	{
		std::cout << "Cat default constructor called" << std::endl;
		type = "Cat";
		br = new Brain();
	}

	Cat::Cat(const Cat &toCopy) : Animal(toCopy)
	{
		std::cout << "Cat copy constructor called" << std::endl;
		(*this) = toCopy;
	}

/******** DESTRUCTOR **********************************************************/
	
	Cat::~Cat() 
	{
		delete(br);
		std::cout << "Cat destructor called" << std::endl;
	}

/******** OVERLOAD FUNCTION(S) ************************************************/

	Cat&	Cat::operator = (const Cat &toCopy)
	{
		std::cout << "Cat copy assignement operator called" << std::endl;
		if (this != &toCopy)
		{
			(*this).Animal::operator=(toCopy);
			br = new Brain(*(toCopy.getBrain()));
		}
		return (*this);
	}

/******** GETTER(S) ***********************************************************/

	Brain*	Cat::getBrain() const
	{
		return (br);
	}

/******** HELPER(S) ***********************************************************/

	void	Cat::makeSound() const
	{
		std::cout	<< "Miauww!" << std::endl;
	}
