/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongAnimal.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: mademir <mademir@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/03 19:25:07 by mademir       #+#    #+#                 */
/*   Updated: 2024/02/03 19:33:49 by mademir       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

/******** CONSTRUCTOR(S) ******************************************************/

	WrongAnimal::WrongAnimal()
	{
		std::cout << "WrongAnimal default constructor called" << std::endl;
		this->type = "WrongAnimal";
	}

	WrongAnimal::WrongAnimal(const WrongAnimal &toCopy)
	{
		std::cout << "WrongAnimal copy constructor called" << std::endl;
		(*this) = toCopy;
	}

/******** DESTRUCTOR **********************************************************/

	WrongAnimal::~WrongAnimal()
	{
		std::cout << "WrongAnimal destructor called" << std::endl;
	}

/******** OVERLOAD FUNCTION(S) ************************************************/

	WrongAnimal&	WrongAnimal::operator = (const WrongAnimal &toCopy)
	{
		std::cout << "WrongAnimal copy assignement operator called" << std::endl;
		if (this != &toCopy)
		{
			this->type = toCopy.type;
		}
		return (*this);
	}

/******** GETTER(S) ***********************************************************/

	std::string	WrongAnimal::getType() const
	{
		return (type);
	}

/******** HELPER(S) ***********************************************************/

	void	WrongAnimal::makeSound() const
	{
		std::cout	<< "WrongAnimal sound" << std::endl;
	}
