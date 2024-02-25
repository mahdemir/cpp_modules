/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mademir <mademir@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/21 13:55:15 by mademir       #+#    #+#                 */
/*   Updated: 2024/02/24 22:35:15 by mademir       ########   odam.nl         */
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
		someRandomIntern.destroyForm(rrf);
	}
	catch (std::exception& e)
	{
		std::cout << "Exception caught: " << e.what() << std::endl; 
	}
	std::cout << "\n";

	try
	{
		Intern  someRandomIntern;
		AForm*   ppf;
		ppf = someRandomIntern.makeForm("presidential pardon", "test");
		ppf->beSigned(a);
		ppf->execute(a);
		someRandomIntern.destroyForm(ppf);
	}
	catch (std::exception& e)
	{
		std::cout << "Exception caught: " << e.what() << std::endl; 
	}

	return (0);
}
