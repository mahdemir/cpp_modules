/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: mademir <mademir@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/15 23:27:51 by mademir       #+#    #+#                 */
/*   Updated: 2024/01/16 14:34:02 by mademir       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
private:
	int					value;
	static const int	fbits = 8;

public:
	Fixed();
	Fixed(const Fixed &toCopy);
	Fixed	&operator = (const Fixed &toCopy);
	~Fixed();
	int		getRawBits() const;
	void	setRawBits(int const raw);
};

#endif
