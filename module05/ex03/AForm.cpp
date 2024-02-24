/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AForm.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: mademir <mademir@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/24 11:24:27 by mademir       #+#    #+#                 */
/*   Updated: 2024/02/24 17:32:55 by mademir       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

/******** CONSTRUCTOR(S) ******************************************************/

	AForm::AForm() :	_name("default"),
						_signed(false),
						_requiredToSign(150),
						_requiredToExecute(150)
	{
		std::cout << "AForm default constructor called" << std::endl;
	}

	AForm::AForm(std::string name, int rts, int rte) :	_name(name),
														_signed(false),
														_requiredToSign(rts),
														_requiredToExecute(rte)
	{
		std::cout << "AForm parameterized constructor called" << std::endl;
		if (validateGrade(_requiredToSign) == 1)
			throw GradeTooHighException();
		if (validateGrade(_requiredToSign) == 2)
			throw GradeTooLowException();
		if (validateGrade(_requiredToExecute) == 1)
			throw GradeTooHighException();
		if (validateGrade(_requiredToExecute) == 2)
			throw GradeTooLowException();
	}

	AForm::AForm(const AForm& toCopy) :	_name(toCopy._name),
										_requiredToSign(toCopy._requiredToSign),
										_requiredToExecute(toCopy._requiredToExecute)
	{
		std::cout << "AForm copy constructor called" << std::endl;
		*this = toCopy;
	}

/******** DESTRUCTOR **********************************************************/

	AForm::~AForm()
	{
		std::cout << "AForm destructor called" << std::endl;
	}

/******** OVERLOAD FUNCTION(S) ************************************************/

	AForm&	AForm::operator = (const AForm& toCopy)
	{
		if (this != &toCopy)
		{
			_signed = toCopy._signed;
		}
		return (*this);
	}

	std::ostream&	operator << (std::ostream& COUT, AForm& toPrint)
	{
		COUT	<< std::boolalpha
				<< "AForm name: " << toPrint.getName()
				<< "\nSigned: " << toPrint.getSign()
				<< "\nRequired grade to sign: " << toPrint.getRequiredToSign()
				<< "\nRequired grade to execute: " << toPrint.getRequiredToExecute()
				<< std::endl;
		return (COUT);
	}

/******** GETTER(S) ***********************************************************/

	const std::string	AForm::getName() const
	{
		return (_name);
	}

	bool	AForm::getSign() const
	{
		return (_signed);
	}

	int	AForm::getRequiredToSign() const
	{
		return (_requiredToSign);
	}

	int	AForm::getRequiredToExecute() const
	{
		return (_requiredToExecute);
	}

/******** HELPER(S) ***********************************************************/

	int	AForm::validateGrade(int grade)
	{
		if (grade < 1)
			return 1; // if too high
		if (grade > 150)
			return 2; // if too low
		return 0;
	}

	int	AForm::validateExecutor(const Bureaucrat& executor) const
	{
		if (executor.getGrade() > getRequiredToExecute())
			return 1; // if too low
		if (getSign() != true)
			return 2; // if not signed
		return 0;
	}

	void	AForm::beSigned(Bureaucrat& signer)
	{
		if ((signer.getGrade() > _requiredToSign))
		{
			throw AForm::GradeTooLowException();
		}
		else
			_signed = true;
	}

/******** EXCEPTION(S) ********************************************************/

	const char*	AForm::GradeTooHighException::what() const throw()
	{
		return ("grade too high");
	}

	const char* AForm::GradeTooLowException::what() const throw()
	{
		return ("grade too low");
	}

	const char* AForm::FormNotSigned::what() const throw()
	{
		return ("form not signed");
	}
