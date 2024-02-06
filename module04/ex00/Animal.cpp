/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Animal.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: mademir <mademir@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/03 19:22:51 by mademir       #+#    #+#                 */
/*   Updated: 2024/02/03 19:27:46 by mademir       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

/******** CONSTRUCTOR(S) ******************************************************/

	Animal::Animal()
	{
		std::cout << "Animal default constructor called" << std::endl;
		this->type = "Animal";
	}

	Animal::Animal(const Animal &toCopy)
	{
		std::cout << "Animal copy constructor called" << std::endl;
		(*this) = toCopy;
	}

/******** DESTRUCTOR **********************************************************/

	Animal::~Animal()
	{
		std::cout << "Animal destructor called" << std::endl;
	}

/******** OVERLOAD FUNCTION(S) ************************************************/

	Animal&	Animal::operator = (const Animal &toCopy)
	{
		std::cout << "Animal copy assignement operator called" << std::endl;
		if (this != &toCopy)
		{
			this->type = toCopy.type;
		}
		return (*this);
	}

/******** GETTER(S) ***********************************************************/

	std::string	Animal::getType() const
	{
		return (type);
	}

/******** HELPER(S) ***********************************************************/

	void	Animal::makeSound() const
	{
		std::cout	<< "Animal sound" << std::endl;
	}
