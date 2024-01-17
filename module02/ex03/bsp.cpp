/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   bsp.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: mademir <mademir@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/17 12:19:21 by mademir       #+#    #+#                 */
/*   Updated: 2024/01/17 14:36:08 by mademir       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed denom = ((b.getY() - c.getY()) * (a.getX() - c.getX()) + (c.getX() - b.getX()) * (a.getY() - c.getY()));
	Fixed cordA = ((b.getY() - c.getY()) * (point.getX() - c.getX()) + (c.getX() - b.getX()) * (point.getY() - c.getY())) / denom;
	Fixed cordB = ((c.getY() - a.getY()) * (point.getX() - c.getX()) + (a.getX() - c.getX()) * (point.getY() - c.getY())) / denom;
	Fixed cordC = Fixed(1) - cordA - cordB;
	return (cordA > 0.0f && cordA < 1.0f && cordB > 0.0f && cordB < 1.0f && cordC > 0.0f && cordC < 1.0f);
}
