/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.hpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: mademir <mademir@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/21 13:55:23 by mademir       #+#    #+#                 */
/*   Updated: 2024/02/24 13:51:41 by mademir       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/******** DEFINES *************************************************************/

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

/******** INCLUDES ************************************************************/

#include <iostream>
#include <exception>
#include "AForm.hpp"

/******** CLASSES *************************************************************/

class AForm;

class Bureaucrat
{
private:
	const std::string	_name;
	int					_grade;
	int					_validateGrade(int grade);
public:
						Bureaucrat();
						Bureaucrat(std::string name, int grade);
						Bureaucrat(const Bureaucrat& toCopy);
						~Bureaucrat();

	Bureaucrat&			operator = (const Bureaucrat& toCopy);

	const std::string	getName() const;
	int					getGrade() const;

	void				signForm(AForm& form);
	void				executeForm(AForm const & form);

	void				incrementGrade();
	void				decrementGrade();

	class GradeTooHighException : public std::exception
	{
		public:
			virtual const char* what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
		public:
			virtual const char* what() const throw();
	};
};

/******** PROTOTYPE(S) ********************************************************/

std::ostream&	operator << (std::ostream& COUT, const Bureaucrat& toPrint);

#endif // BUREAUCRAT_HPP
