/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: mademir <mademir@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/15 23:27:27 by mademir       #+#    #+#                 */
/*   Updated: 2024/01/17 14:47:21 by mademir       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/*********** CONSTRUCTORS *****************************************************/

Fixed::Fixed(void)
{
	value = 0;
}

Fixed::Fixed(const Fixed &toCopy)
{
	value = toCopy.getRawBits();
}

Fixed::Fixed(const int i)
{
	value = i << fbits;
}

Fixed::Fixed(const float f)
{
	value = (int)roundf(f * (1 << fbits));
}

/*********** DECONSTRUCTOR ****************************************************/

Fixed::~Fixed(void) {}

/*********** OVERLOAD FUNC ****************************************************/

Fixed	&Fixed::operator = (const Fixed &toCopy)
{
	value = toCopy.getRawBits();
	return (*this);
}

std::ostream	&operator << (std::ostream &output, const Fixed &fixed)
{
	output << fixed.toFloat();
	return (output);
}

bool Fixed::operator == (const Fixed &toCompare) const
{
	if (toFloat() == toCompare.toFloat())
		return (true);
	return (false);
}

bool	Fixed::operator < (const Fixed &toCompare) const
{
	if (toFloat() < toCompare.toFloat())
		return (true);
	return (false);
}

bool	Fixed::operator <= (const Fixed &toCompare) const
{
	if (toFloat() < toCompare.toFloat() || toFloat() == toCompare.toFloat())
		return (true);
	return (false);
}

bool	Fixed::operator > (const Fixed &toCompare) const
{
	if (toFloat() <= toCompare.toFloat())
		return (false);
	return (true);
}

bool	Fixed::operator >= (const Fixed &toCompare) const
{
	if (toFloat() < toCompare.toFloat())
		return (false);
	return (true);
}

bool Fixed::operator != (const Fixed &toCompare) const
{
	if (toFloat() == toCompare.toFloat())
		return (false);
	return (true);
}

Fixed	Fixed::operator + (const Fixed &toAdd) const
{
	return (Fixed(toFloat() + toAdd.toFloat()));
}

Fixed	Fixed::operator - (const Fixed &toSub) const
{
	return (Fixed(toFloat() - toSub.toFloat()));
}

Fixed	Fixed::operator * (const Fixed &toMult) const
{
	return (Fixed(toFloat() * toMult.toFloat()));
}

Fixed	Fixed::operator / (const Fixed &toDiv) const
{
	return (Fixed(toFloat() / toDiv.toFloat()));
}

Fixed	&Fixed::operator ++ (void)
{
	setRawBits(getRawBits() + 1);
	return (*this);
}

Fixed	&Fixed::operator -- (void)
{
	setRawBits(getRawBits() - 1);
	return (*this);
}

Fixed	Fixed::operator ++ (int)
{
	Fixed tmp = *this;
	setRawBits(getRawBits() + 1);
	return (tmp);
}

Fixed	Fixed::operator -- (int)
{
	Fixed tmp = *this;
	setRawBits(getRawBits() - 1);
	return (tmp);
}

/*********** MIN / MAX FUNCTIONS **********************************************/

Fixed	&Fixed::min(Fixed &a, Fixed &b) { return (a < b ? a : b); }

const Fixed	&Fixed::min(const Fixed &a, const Fixed &b) { return (a < b ? a : b); }

Fixed	&Fixed::max(Fixed &a, Fixed &b) { return (a > b ? a : b); }

const Fixed	&Fixed::max(const Fixed &a, const Fixed &b) { return (a > b ? a : b); }


/*********** HELPERS **********************************************************/

int	Fixed::getRawBits(void) const
{
	return (value);
}

void	Fixed::setRawBits(int raw)
{
	value = raw;
}

int	Fixed::toInt(void) const
{
	return (value >> fbits);
}

float	Fixed::toFloat(void) const
{
	return ((float)value / (float)(1 << fbits));
}
