/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mademir <mademir@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/17 12:24:59 by mademir       #+#    #+#                 */
/*   Updated: 2024/01/17 14:35:57 by mademir       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point);

int	main(void)
{
	Point	A = Point(-2.5f, 2.f);
	Point	B = Point(4.f, -2.f);
	Point	C = Point(-4.f, -4.f);

	Point	D = Point(-4.f, 2.f);	//false
	Point	E = Point(-2.f, 2.f);	//false
	Point	F = Point(0.f, -2.f);	//true
	Point	G = Point(-2.f, -2.f);	//true
	Point	H = Point(0.f, -3.f);	//false

	std::cout << std::boolalpha;

	std::cout << bsp(A, B, C, D) << std::endl;
	std::cout << bsp(A, B, C, E) << std::endl;
	std::cout << bsp(A, B, C, F) << std::endl;
	std::cout << bsp(A, B, C, G) << std::endl;
	std::cout << bsp(A, B, C, H) << std::endl;

	return 0;
}
