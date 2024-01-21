/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Point.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: mademir <mademir@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/17 12:10:55 by mademir       #+#    #+#                 */
/*   Updated: 2024/01/21 19:49:19 by mademir       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

/******** CONSTRUCTOR(S) ******************************************************/

	Point::Point() : _x(0), _y(0) {}

	Point::Point(const float x, const float y) : _x(x), _y(y) {}

	Point::Point(const Point &toCopy) : _x(toCopy._x), _y(toCopy._y) {}

/******** DESTRUCTOR **********************************************************/

	Point::~Point() {}

/******** OVERLOAD FUNCTION(S) ************************************************/

	Point&	Point::operator = (const Point &toCopy)
	{
		(Fixed)_x = toCopy.getX();
		(Fixed)_y = toCopy.getY();
		return (*this);
	}

/******** GETTER(S) ***********************************************************/

	Fixed	Point::getX() const { return (_x); }

	Fixed	Point::getY() const { return (_y); }
