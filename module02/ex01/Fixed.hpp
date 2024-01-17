/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: mademir <mademir@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/15 23:27:51 by mademir       #+#    #+#                 */
/*   Updated: 2024/01/16 16:04:07 by mademir       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
private:
	int					value;
	static const int	fbits = 8;
public:
	Fixed(void);
	Fixed(const Fixed &toCopy);
	Fixed(const int i);
	Fixed(const float f);
	~Fixed(void);

	Fixed				&operator = (const Fixed &toCopy);
	int					getRawBits(void) const;
	void				setRawBits(int const raw);
	float				toFloat(void) const;
	int					toInt(void) const;
};

std::ostream	&operator << (std::ostream &output, const Fixed &fixed);

#endif
