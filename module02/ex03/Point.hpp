/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Point.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: mademir <mademir@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/17 12:09:13 by mademir       #+#    #+#                 */
/*   Updated: 2024/01/21 19:52:23 by mademir       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/******** DEFINES *************************************************************/

#ifndef POINT_HPP
#define POINT_HPP

/******** INCLUDES ************************************************************/

#include "Fixed.hpp"

/******** CLASSES *************************************************************/

class Point
{
private:
	Fixed const	_x;
	Fixed const	_y;

public:
				Point();
				Point(const float x, const float y);
				Point(const Point &toCopy);
				Point&	operator = (const Point &toCopy);
				~Point();

	Fixed		getX() const;
	Fixed		getY() const;
};

/******** PROTOTYPE(S) ********************************************************/

bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif // POINT_HPP
