/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: mademir <mademir@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/15 23:27:27 by mademir       #+#    #+#                 */
/*   Updated: 2024/01/21 19:53:41 by mademir       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/******** CONSTRUCTOR(S) ******************************************************/

	Fixed::Fixed()
	{
		std::cout << "Default constructor called" << std::endl;
		_value = 0;
	}

	Fixed::Fixed(const Fixed &toCopy)
	{
		std::cout << "Copy constructor called" << std::endl;
		_value = toCopy.getRawBits();
	}

/******** DESTRUCTOR **********************************************************/

	Fixed::~Fixed()
	{
		std::cout << "Destructor called" << std::endl;
	}

/******** OVERLOAD FUNCTION(S) ************************************************/

	Fixed& Fixed::operator=(const Fixed &toCopy)
	{
		std::cout << "Copy assignment operator called" << std::endl;
		_value = toCopy.getRawBits();
		return (*this);
	}

/******** GETTER(S) ***********************************************************/

	int	Fixed::getRawBits() const
	{
		std::cout << "getRawBits member function called" << std::endl;
		return (_value);
	}

/******** SETTER(S) ***********************************************************/

	void Fixed::setRawBits(int const raw)
	{
		std::cout << "setRawBits member function called" << std::endl;
		_value = raw;
	}
