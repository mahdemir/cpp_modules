/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.cpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: mademir <mademir@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/21 13:55:25 by mademir       #+#    #+#                 */
/*   Updated: 2024/02/24 13:51:41 by mademir       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

/******** CONSTRUCTOR(S) ******************************************************/

	Bureaucrat::Bureaucrat() : _name("default"), _grade(150)
	{
		std::cout << "Bureaucrat default constructor called" << std::endl;
	}

	Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
	{
		std::cout << "Bureaucrat parameterized constructor called" << std::endl;
		if (_validateGrade(grade) == 1)
			throw Bureaucrat::GradeTooHighException();
		if (_validateGrade(grade) == 2)
			throw Bureaucrat::GradeTooLowException();
		_grade = grade;
	}

	Bureaucrat::Bureaucrat(const Bureaucrat& toCopy) : _name(toCopy._name)
	{
		std::cout << "Bureaucrat copy constructor called" << std::endl;
		*this = toCopy;
	}

/******** DESTRUCTOR **********************************************************/

	Bureaucrat::~Bureaucrat()
	{
		std::cout << "Bureaucrat destructor called" << std::endl;
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

	int	Bureaucrat::_validateGrade(int grade)
	{
		if (grade < 1)
			return 1;
		if (grade > 150)
			return 2;
		return 0;
	}

	void	Bureaucrat::incrementGrade()
	{
		if (_validateGrade(_grade - 1) == 1)
			throw Bureaucrat::GradeTooHighException();
		_grade--;
	}

	void	Bureaucrat::decrementGrade()
	{
		if (_validateGrade(_grade + 1) == 2)
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
