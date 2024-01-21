/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: mademir <mademir@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/15 23:27:51 by mademir       #+#    #+#                 */
/*   Updated: 2024/01/21 19:51:08 by mademir       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/******** DEFINES *************************************************************/

#ifndef INCLUDE_GUARD
#define INCLUDE_GUARD

/******** INCLUDES ************************************************************/

#include <iostream>
#include <cmath>

/******** CLASSES *************************************************************/

class Fixed
{
private:
	int					_value;
	static const int	_fractionalBits = 8;

public:
//constructor
						Fixed();
						Fixed(const Fixed &toCopy);
						Fixed(const int i);
						Fixed(const float f);
//destructor
						~Fixed();
//copy
	Fixed&				operator = (const Fixed &toCopy);
//comparison
	bool				operator > (const Fixed &toCompare) const;
	bool				operator < (const Fixed &toCompare) const;
	bool				operator >= (const Fixed &toCompare) const;
	bool				operator <= (const Fixed &toCompare) const;
	bool				operator == (const Fixed &toCompare) const;
	bool				operator != (const Fixed &toCompare) const;
//arithmetic
	Fixed				operator + (const Fixed &toAdd) const;
	Fixed				operator - (const Fixed &toSub) const;
	Fixed				operator * (const Fixed &toMult) const;
	Fixed				operator / (const Fixed &toDiv) const;
//increment/decrement
	Fixed				&operator ++ ();
	Fixed				operator ++ (int);
	Fixed				&operator -- ();
	Fixed				operator -- (int);
//min/max
	static Fixed		&min(Fixed &a, Fixed &b);
	static const Fixed	&min(const Fixed &a, const Fixed &b);
	static Fixed		&max(Fixed &a, Fixed &b);
	static const Fixed	&max(const Fixed &a, const Fixed &b);
//getter/setter
	int					getRawBits() const;
	void				setRawBits(int const raw);
//helpers
	int					toInt() const;
	float				toFloat() const;
};

/******** PROTOTYPE(S) ********************************************************/

//insertion
	std::ostream&	operator<<(std::ostream &COUT, const Fixed &fixed);

#endif // INCLUDE_GUARD
