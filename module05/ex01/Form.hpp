/******** DEFINES *************************************************************/

#ifndef FORM_HPP
#define FORM_HPP

/******** INCLUDES ************************************************************/

#include "Bureaucrat.hpp"
#include <iostream>

/******** CLASSES *************************************************************/

class Bureaucrat;

class Form
{
private:
	const std::string		_name;
	bool					_signed;
	const int				_requiredToSign;
	const int				_requiredToExecute;

public:
						Form();
						Form(std::string name, int rts, int rte);
						Form(const Form& toCopy);
						~Form();

	Form&				operator = (const Form& toCopy);

	void				beSigned(Bureaucrat& signer);

	const std::string	getName() const;
	bool				getSign() const;
	int					getRequiredToSign() const;
	int					getRequiredToExecute() const;

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

std::ostream&	operator << (std::ostream& COUT, Form& toPrint);

#endif // FORM_HPP
