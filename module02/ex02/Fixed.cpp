/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: mademir <mademir@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/15 23:27:27 by mademir       #+#    #+#                 */
/*   Updated: 2024/01/21 19:51:23 by mademir       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/******** CONSTRUCTOR(S) ******************************************************/

	Fixed::Fixed()
	{
		// std::cout << "Default constructor called" << std::endl;
		_value = 0;
	}

	Fixed::Fixed(const Fixed &toCopy)
	{
		// std::cout << "Copy constructor called" << std::endl;
		*this = toCopy;
	}

	Fixed::Fixed(const int i)
	{
		// std::cout << "Int constructor called" << std::endl;
		_value = i << _fractionalBits;
	}

	Fixed::Fixed(const float f)
	{
		// std::cout << "Float constructor called" << std::endl;
		_value = (int)roundf(f * (1 << _fractionalBits));
	}

/******** DESTRUCTOR **********************************************************/

	Fixed::~Fixed()
	{
		// std::cout << "Destructor called" << std::endl;
	}

/******** OVERLOAD FUNCTION(S) ************************************************/

//copy
	Fixed& Fixed::operator=(const Fixed &toCopy)
	{
		// std::cout << "Copy assignment operator called" << std::endl;
		_value = toCopy.getRawBits();
		return (*this);
	}
//insertion
	std::ostream&	operator<<(std::ostream &COUT, const Fixed &fixed)
	{
		COUT << fixed.toFloat();
		return (COUT);
	}
//comparison
	bool	Fixed::operator < (const Fixed &toCompare) const
	{
		return (toFloat() < toCompare.toFloat());
	}

	bool	Fixed::operator > (const Fixed &toCompare) const
	{
		return (toFloat() > toCompare.toFloat());
	}

	bool	Fixed::operator >= (const Fixed &toCompare) const
	{
		return (toFloat() >= toCompare.toFloat());
	}

	bool	Fixed::operator <= (const Fixed &toCompare) const
	{
		return (toFloat() <= toCompare.toFloat());
	}

	bool Fixed::operator == (const Fixed &toCompare) const
	{
		return (toFloat() == toCompare.toFloat());
	}

	bool Fixed::operator != (const Fixed &toCompare) const
	{
		return (toFloat() != toCompare.toFloat());
	}
//arithmetic
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
//increment/decrement
	Fixed&	Fixed::operator ++ ()
	{
		setRawBits(getRawBits() + 1);
		return (*this);
	}

	Fixed&	Fixed::operator -- ()
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
//min/max
	Fixed	&Fixed::min(Fixed &a, Fixed &b)
	{
		return (a < b ? a : b);
	}

	const Fixed	&Fixed::min(const Fixed &a, const Fixed &b)
	{
		return (a < b ? a : b);
	}

	Fixed	&Fixed::max(Fixed &a, Fixed &b)
	{
		return (a > b ? a : b);
	}

	const Fixed	&Fixed::max(const Fixed &a, const Fixed &b)
	{
		return (a > b ? a : b);
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
