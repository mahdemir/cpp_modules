/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: mademir <mademir@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/15 23:27:51 by mademir       #+#    #+#                 */
/*   Updated: 2024/01/21 19:52:08 by mademir       ########   odam.nl         */
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
	Fixed();
	Fixed(const Fixed &toCopy);

	Fixed(const int i);
	Fixed(const float f);

	~Fixed();

	Fixed& operator=(const Fixed &toCopy);

	int		getRawBits() const;
	void	setRawBits(int const raw);

	int		toInt() const;
	float	toFloat() const;
};

/******** PROTOTYPE(S) ********************************************************/

std::ostream&	operator<<(std::ostream &COUT, const Fixed &fixed);

#endif // INCLUDE_GUARD
