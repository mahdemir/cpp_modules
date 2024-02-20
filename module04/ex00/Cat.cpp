/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: mademir <mademir@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/03 19:22:55 by mademir       #+#    #+#                 */
/*   Updated: 2024/02/20 10:43:15 by mademir       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

/******** CONSTRUCTOR(S) ******************************************************/

	Cat::Cat()
	{
		std::cout << "Cat default constructor called" << std::endl;
		type = "Cat";
	}

	Cat::Cat(const Cat &toCopy) : Animal(toCopy)
	{
		std::cout << "Cat copy constructor called" << std::endl;
		(*this) = toCopy;
	}

/******** DESTRUCTOR **********************************************************/
	
	Cat::~Cat() 
	{
		std::cout << "Cat destructor called" << std::endl;
	}

/******** OVERLOAD FUNCTION(S) ************************************************/

	Cat&	Cat::operator = (const Cat &toCopy)
	{
		std::cout << "Cat copy assignement operator called" << std::endl;
		if (this != &toCopy)
			(*this).Animal::operator=(toCopy);
		return (*this);
	}

/******** HELPER(S) ***********************************************************/

	void	Cat::makeSound() const
	{
		std::cout	<< "Miauww!" << std::endl;
	}
