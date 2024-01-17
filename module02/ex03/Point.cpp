/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Point.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: mademir <mademir@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/17 12:10:55 by mademir       #+#    #+#                 */
/*   Updated: 2024/01/17 15:01:17 by mademir       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void) : x(0), y(0) {}

Point::Point(const float xValue, const float yValue) : x(xValue), y(yValue) {}

Point::Point(const Point &toCopy) : x(toCopy.x), y(toCopy.y) {}

Point::~Point(void) {}

Point	&Point::operator = (const Point &toCopy)
{
	(Fixed)this->x = toCopy.getX();
	(Fixed)this->y = toCopy.getY();
	return (*this);
}

Fixed	Point::getX(void) const
{
	return (x);
}

Fixed	Point::getY(void) const
{
	return (y);
}
