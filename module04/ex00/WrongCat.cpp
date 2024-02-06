/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongCat.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mademir <mademir@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/03 19:31:00 by mademir       #+#    #+#                 */
/*   Updated: 2024/02/03 19:33:27 by mademir       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

/******** CONSTRUCTOR(S) ******************************************************/

	WrongCat::WrongCat()
	{
		std::cout << "WrongCat default constructor called" << std::endl;
		type = "WrongCat";
	}

	WrongCat::WrongCat(const WrongCat &toCopy)
	{
		std::cout << "WrongCat copy constructor called" << std::endl;
		(*this) = toCopy;
	}

/******** DESTRUCTOR **********************************************************/
	
	WrongCat::~WrongCat() 
	{
		std::cout << "WrongCat destructor called" << std::endl;
	}

/******** OVERLOAD FUNCTION(S) ************************************************/

	WrongCat&	WrongCat::operator = (const WrongCat &toCopy)
	{
		std::cout << "WrongCat copy assignement operator called" << std::endl;
		if (this != &toCopy)
			(*this).WrongAnimal::operator=(toCopy);
		return (*this);
	}

/******** HELPER(S) ***********************************************************/

	void	WrongCat::makeSound() const
	{
		std::cout	<< "Miauww!" << std::endl;
	}
