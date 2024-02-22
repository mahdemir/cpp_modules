/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mademir <mademir@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/21 13:55:15 by mademir       #+#    #+#                 */
/*   Updated: 2024/02/22 09:32:41 by mademir       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	// one
	std::cout << "ONE:\n";
    try
	{
        Bureaucrat a("one", 150);
        Form b("one's form", 150, 120);

		std::cout << "\nBureaucrat info:\n" << a << "\n";
        std::cout << b << "\n" << "signing form .." << "\n\n";
		
		a.signForm(b);
        std::cout << "\n" << b;
    }
    catch(std::exception &e)
	{
        std::cout << e.what() << std::endl;
    }
	std::cout << "\n";

	// two
	std::cout << "TWO:\n";
    try
	{
        Bureaucrat a("two", 120);
        Form b("two's form", 1, 120);
		a.signForm(b);
        std::cout << b << std::endl;
    }
    catch(std::exception &e)
	{
        std::cout << e.what() << std::endl;
    }
	std::cout << "\n";
    return (0);
}
