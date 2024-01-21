/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: mademir <mademir@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/15 23:27:27 by mademir       #+#    #+#                 */
/*   Updated: 2024/01/21 19:52:42 by mademir       ########   odam.nl         */
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
		*this = toCopy;
	}

	Fixed::Fixed(const int i)
	{
		std::cout << "Int constructor called" << std::endl;
		_value = i << _fractionalBits;
	}

	Fixed::Fixed(const float f)
	{
		std::cout << "Float constructor called" << std::endl;
		_value = (int)roundf(f * (1 << _fractionalBits));
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

	std::ostream&	operator<<(std::ostream &COUT, const Fixed &fixed)
	{
		COUT << fixed.toFloat();
		return (COUT);
	}

/******** GETTER(S) ***********************************************************/

	int	Fixed::getRawBits() const
	{
		// std::cout << "getRawBits member function called" << std::endl;
		return (_value);
	}

/******** SETTER(S) ***********************************************************/

	void Fixed::setRawBits(int const raw)
	{
		// std::cout << "setRawBits member function called" << std::endl;
		_value = raw;
	}

/******** HELPER(S) ***********************************************************/

	int	Fixed::toInt() const
	{
		return (_value >> _fractionalBits);
	}

	float	Fixed::toFloat() const
	{
		return ((float)_value / (float)(1 << _fractionalBits));
	}
