/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Point.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: mademir <mademir@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/17 12:09:13 by mademir       #+#    #+#                 */
/*   Updated: 2024/01/17 12:25:49 by mademir       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point
{
private:
	const Fixed	x;
	const Fixed	y;

public:
	Point(void);
	Point(const float xValue, const float yValue);
	Point(const Point &toCopy);
	Point	&operator = (const Point &toCopy);
	~Point(void);

	Fixed	getX(void) const;
	Fixed	getY(void) const;
};

#endif
