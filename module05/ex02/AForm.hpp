/******** DEFINES *************************************************************/

#ifndef AForm_HPP
#define AForm_HPP

/******** INCLUDES ************************************************************/

#include "Bureaucrat.hpp"
#include <iostream>

/******** CLASSES *************************************************************/

class Bureaucrat;

class AAForm
{
private:
	const std::string		_name;
	bool					_signed;
	const int				_requiredToSign;
	const int				_requiredToExecute;

public:
						AForm();
						AForm(std::string name, int rts, int rte);
						AForm(const AForm& toCopy);
	virtual				~AForm();

	AForm&				operator = (const AForm& toCopy);

	int					validateGrade(int grade);

	void				beSigned(Bureaucrat& signer);

	virtual void		execute(const Bureaucrat& executor) const = 0;

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

std::ostream&	operator << (std::ostream& COUT, AForm& toPrint);

#endif // AForm_HPP
