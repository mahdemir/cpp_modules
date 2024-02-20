/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: mademir <mademir@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/03 19:22:56 by mademir       #+#    #+#                 */
/*   Updated: 2024/02/20 10:46:58 by mademir       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

/******** CONSTRUCTOR(S) ******************************************************/

	Dog::Dog()
	{
		std::cout << "Dog default constructor called" << std::endl;
		type = "Dog";
		br = new Brain();
	}

	Dog::Dog(const Dog &toCopy) : Animal(toCopy)
	{
		std::cout << "Dog copy constructor called" << std::endl;
		(*this) = toCopy;
	}

/******** DESTRUCTOR **********************************************************/

	Dog::~Dog()
	{
		delete(br);
		std::cout << "Dog destructor called" << std::endl;
	}

/******** OVERLOAD FUNCTION(S) ************************************************/

	Dog&	Dog::operator = (const Dog &toCopy)
	{
		std::cout << "Dog copy assignement operator called" << std::endl;
		if (this != &toCopy)
		{
			(*this).Animal::operator=(toCopy);
			br = new Brain(*(toCopy.getBrain()));
		}
		return (*this);
	}

/******** GETTER(S) ***********************************************************/

	Brain*	Dog::getBrain() const
	{
		return (br);
	}

/******** HELPER(S) ***********************************************************/

	void	Dog::makeSound() const 
	{
		std::cout	<< "Woeef!" << std::endl;
	}
