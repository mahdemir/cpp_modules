/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mademir <mademir@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/21 13:55:15 by mademir       #+#    #+#                 */
/*   Updated: 2024/02/24 20:03:42 by mademir       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int	main()
{
	Bureaucrat a("one", 1);
	try
	{
		Intern  someRandomIntern;
		AForm*   rrf;
		(void)rrf;
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		rrf->beSigned(a);
		rrf->execute(a);
	}
	catch (std::exception& e)
	{
		std::cout << "Exception caught: " << e.what() << std::endl; 
	}
	std::cout << "\n";

	try
	{
		Intern  someRandomIntern;
		AForm*   rrf;
		rrf = someRandomIntern.makeForm("presidential pardon", "test");
		rrf->beSigned(a);
		rrf->execute(a);
	}
	catch (std::exception& e)
	{
		std::cout << "Exception caught: " << e.what() << std::endl; 
	}

	return (0);
}
