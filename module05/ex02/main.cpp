/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mademir <mademir@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/21 13:55:15 by mademir       #+#    #+#                 */
/*   Updated: 2024/02/22 12:38:08 by mademir       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	// one
	std::cout << "ONE:\n";

    Bureaucrat a1("one", 150);
    Form b1("one's form", 150, 120);

	std::cout << "\nBureaucrat info:\n" << a1 << "\n";
    std::cout << b1 << "\n";

	a1.signForm(b1);
    std::cout << "\n\n" << b1;

	// two
	std::cout << "TWO:\n";
    Bureaucrat a2("two", 120);
    Form b2("two's form", 1, 120);
	a2.signForm(b2);
    std::cout << b2 << "\n" << std::endl;

	// three
	try
	{
		Form f3;
		std::cout << f3;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "\n";

	// four
	try
	{
		Form f4("four's form", 1, 0);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	// five
	try
	{
		Form f5("five's form", 432423, 33);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

    return (0);
}
