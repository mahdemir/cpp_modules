/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PresidentialPardonForm.cpp                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: mademir <mademir@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/24 11:24:03 by mademir       #+#    #+#                 */
/*   Updated: 2024/02/24 12:47:36 by mademir       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

/******** CONSTRUCTOR(S) ******************************************************/

	PresidentialPardonForm::PresidentialPardonForm()
						: AForm("PresidentialPardonForm", 25, 5), _target("default")
	{
		std::cout << "PresidentialPardonForm default constructor called" << std::endl;
	}

	PresidentialPardonForm::PresidentialPardonForm(std::string target)
						: AForm("PresidentialPardonForm", 25, 5), _target(target)
	{
		std::cout << "PresidentialPardonForm parameterized constructor called" << std::endl;
	}

	PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& toCopy)
	{
		std::cout << "PresidentialPardonForm copy constructor called" << std::endl;
		*this = toCopy;
	}

/******** DESTRUCTOR **********************************************************/

	PresidentialPardonForm::~PresidentialPardonForm()
	{
		std::cout << "PresidentialPardonForm destructor called" << std::endl;
	}

/******** OVERLOAD FUNCTION(S) ************************************************/

	PresidentialPardonForm&	PresidentialPardonForm::operator = (const PresidentialPardonForm& toCopy)
	{
		if (this != &toCopy)
			_target = toCopy._target;
		return (*this);
	}

/******** HELPER(S) ***********************************************************/

	void	PresidentialPardonForm::execute(const Bureaucrat& executor) const
	{
		if (validateExecutor(executor) == 1)
			throw GradeTooLowException();
		if (validateExecutor(executor) == 2)
			throw FormNotSigned();
		std::cout	<< _target
					<< " has been pardoned by Zaphod Beeblebrox"
					<< std::endl;
	}
