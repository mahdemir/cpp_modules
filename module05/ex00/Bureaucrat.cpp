/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.cpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: mademir <mademir@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/21 13:55:25 by mademir       #+#    #+#                 */
/*   Updated: 2024/02/21 15:35:14 by mademir       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

/******** CONSTRUCTOR(S) ******************************************************/

	Bureaucrat::Bureaucrat() : _name("default"), _grade(150)
	{
		std::cout << "Default constructor called" << std::endl;
	}

	Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
	{
		std::cout << "Parameterized constructor called" << std::endl;
		if (validateGrade(grade) == 1)
			throw Bureaucrat::GradeTooHighException();
		if (validateGrade(grade) == 2)
			throw Bureaucrat::GradeTooLowException();
		_grade = grade;
	}

	Bureaucrat::Bureaucrat(const Bureaucrat& toCopy) : _name(toCopy._name)
	{
		std::cout << "Copy constructor called" << std::endl;
		*this = toCopy;
	}

/******** DESTRUCTOR **********************************************************/

	Bureaucrat::~Bureaucrat()
	{
		std::cout << "Destructor called" << std::endl;
	}

/******** OVERLOAD FUNCTION(S) ************************************************/

	Bureaucrat&		Bureaucrat::operator = (const Bureaucrat& toCopy)
	{
		if (this != &toCopy)
			_grade = toCopy._grade;
		return (*this);
	}

	std::ostream&	operator << (std::ostream& COUT, const Bureaucrat& toPrint)
	{
		COUT	<< toPrint.getName()
				<< ", bureaucrat grade "
				<< toPrint.getGrade()
				<< std::endl;
		return (COUT);
	}

/******** GETTER(S) ***********************************************************/

	const std::string	Bureaucrat::getName() const
	{
		return (_name);
	}

	int	Bureaucrat::getGrade() const
	{
		return (_grade);
	}

/******** HELPER(S) ***********************************************************/

	int	Bureaucrat::validateGrade(int grade)
	{
		if (grade < 1)
			return 1;
		if (grade > 150)
			return 2;
		return 0;
	}

	void	Bureaucrat::incrementGrade()
	{
		if (validateGrade(_grade - 1) == 1)
			throw Bureaucrat::GradeTooHighException();
		_grade--;
	}

	void	Bureaucrat::decrementGrade()
	{
		if (validateGrade(_grade + 1) == 2)
			throw Bureaucrat::GradeTooLowException();
		_grade++;
	}

/******** EXCEPTION(S) ********************************************************/

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("grade too high");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("grade too low");
}
