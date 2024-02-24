/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mademir <mademir@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/21 13:55:15 by mademir       #+#    #+#                 */
/*   Updated: 2024/02/24 14:49:22 by mademir       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	Bureaucrat a("Bureaucrat", 1);

	try
	{
		ShrubberyCreationForm one;
		std::cout << "\n";
		a.signForm(one); // grade to sign >145
		one.execute(a); // grade to exec >137
		std::cout << "\n";
	}
	catch(const std::exception& e)
	{
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}
	std::cout << "\n" << "******************************" << "\n\n";

	try
	{
		RobotomyRequestForm one;
		std::cout << "\n";
		a.signForm(one); // grade to sign >72
		one.execute(a); // grade to exec >45
		std::cout << "\n";
	}
	catch(const std::exception& e)
	{
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}
	std::cout << "\n" << "******************************" << "\n\n";

	try
	{
		PresidentialPardonForm one;
		std::cout << "\n";
		a.signForm(one); // grade to sign >25
		a.executeForm(one); // grade to exec >5
		one.execute(a); // grade to exec >5
		std::cout << "\n";
	}
	catch(const std::exception& e)
	{
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}
    return (0);
}
