/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: mademir <mademir@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/15 23:27:27 by mademir       #+#    #+#                 */
/*   Updated: 2024/01/16 17:31:03 by mademir       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" <<std::endl;
	value = 0;
}

Fixed::Fixed(const Fixed &toCopy)
{
	std::cout << "Copy constructor called" <<std::endl;
	value = toCopy.getRawBits();
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" <<std::endl;
}

Fixed	&Fixed::operator = (const Fixed &toCopy)
{
	std::cout << "Copy assignement operator called" <<std::endl;
	value = toCopy.getRawBits();
	return (*this);
}

int	Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (value);
}

void	Fixed::setRawBits(int raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	value = raw;
}
