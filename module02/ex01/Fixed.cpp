/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: mademir <mademir@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/15 23:27:27 by mademir       #+#    #+#                 */
/*   Updated: 2024/01/17 12:05:58 by mademir       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" <<std::endl;
	value = 0;
}

Fixed::Fixed(const Fixed &toCopy)
{
	std::cout << "Copy constructor called" <<std::endl;
	value = toCopy.getRawBits();
}

Fixed::Fixed(const int i)
{
	value = i << fbits;
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float f)
{
	value = (int)roundf(f * (1 << fbits));
	std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" <<std::endl;
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (value);
}

void	Fixed::setRawBits(int raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	value = raw;
}

Fixed	&Fixed::operator = (const Fixed &toCopy)
{
	std::cout << "Copy assignement operator called" <<std::endl;
	value = toCopy.getRawBits();
	return (*this);
}

std::ostream	&operator << (std::ostream &output, const Fixed &fixed)
{
	output << fixed.toFloat();
	return (output);
}

float	Fixed::toFloat(void) const
{
	return ((float)value / (float)(1 << fbits));
}

int	Fixed::toInt(void) const
{
	return (value >> fbits);
}
