/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RobotomyRequestForm.cpp                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: mademir <mademir@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/24 11:24:14 by mademir       #+#    #+#                 */
/*   Updated: 2024/02/24 12:23:02 by mademir       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

/******** CONSTRUCTOR(S) ******************************************************/

	RobotomyRequestForm::RobotomyRequestForm()
						: AForm("RobotomyRequestForm", 72, 45), _target("default")
	{
		std::cout << "RobotomyRequestForm default constructor called" << std::endl;
	}

	RobotomyRequestForm::RobotomyRequestForm(std::string target)
						: AForm("RobotomyRequestForm", 72, 45), _target(target)
	{
		std::cout << "RobotomyRequestForm parameterized constructor called" << std::endl;
	}

	RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& toCopy)
	{
		std::cout << "RobotomyRequestForm copy constructor called" << std::endl;
		*this = toCopy;
	}

/******** DESTRUCTOR **********************************************************/

	RobotomyRequestForm::~RobotomyRequestForm()
	{
		std::cout << "RobotomyRequestForm destructor called" << std::endl;
	}

/******** OVERLOAD FUNCTION(S) ************************************************/

	RobotomyRequestForm&	RobotomyRequestForm::operator = (const RobotomyRequestForm& toCopy)
	{
		if (this != &toCopy)
			_target = toCopy._target;
		return (*this);
	}

/******** HELPER(S) ***********************************************************/

	void	RobotomyRequestForm::execute(const Bureaucrat& executor) const
	{
		if (validateExecutor(executor) == 1)
			throw GradeTooLowException();
		if (validateExecutor(executor) == 2)
			throw FormNotSigned();
		std::cout << "Bzzzzrrrrrrrr!\n";
		std::srand(std::time(0));
		if ((std::rand() % 2) == 0)
			std::cout << _target << " has been robotomized." << std::endl;
		else
			std::cout << _target << " robotomization failed." << std::endl;
	}
