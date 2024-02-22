#include "Form.hpp"

/******** CONSTRUCTOR(S) ******************************************************/

	Form::Form() :	_name("default"),
					_signed(false),
					_requiredToSign(150),
					_requiredToExecute(150)
	{
		std::cout << "Default constructor called" << std::endl;
	}

	Form::Form(std::string name, int rts, int rte) :	_name(name),
														_signed(false),
														_requiredToSign(rts),
														_requiredToExecute(rte)
	{
		std::cout << "Parameterized constructor called" << std::endl;
	}

	Form::Form(const Form& toCopy) : _name(toCopy._name),
									 _requiredToSign(toCopy._requiredToSign),
									 _requiredToExecute(toCopy._requiredToExecute)
	{
		std::cout << "Copy constructor called" << std::endl;
		*this = toCopy;
	}

/******** DESTRUCTOR **********************************************************/

	Form::~Form()
	{
		std::cout << "Destructor called" << std::endl;
	}

/******** OVERLOAD FUNCTION(S) ************************************************/

	Form&	Form::operator = (const Form& toCopy)
	{
		if (this != &toCopy)
		{
			_signed = toCopy._signed;
		}
		return (*this);
	}

	std::ostream&	operator << (std::ostream& COUT, Form& toPrint)
	{
		COUT	<< std::boolalpha
				<< "Form name: " << toPrint.getName()
				<< "\nSigned: " << toPrint.getSign()
				<< "\nRequired grade to sign: " << toPrint.getRequiredToSign()
				<< "\nRequired grade to execute: " << toPrint.getRequiredToExecute()
				<< std::endl;
		return (COUT);
	}

/******** GETTER(S) ***********************************************************/

	const std::string	Form::getName() const
	{
		return (_name);
	}

	bool	Form::getSign() const
	{
		return (_signed);
	}

	int	Form::getRequiredToSign() const
	{
		return (_requiredToSign);
	}

	int	Form::getRequiredToExecute() const
	{
		return (_requiredToExecute);
	}

/******** HELPER(S) ***********************************************************/

	void	Form::beSigned(Bureaucrat& signer)
	{
		if (signer.getGrade() > _requiredToSign)
		{
			throw Form::GradeTooLowException();
		}
		_signed = true;
	}

/******** EXCEPTION(S) ********************************************************/

	const char*	Form::GradeTooHighException::what() const throw()
	{
		return ("grade too high");
	}

	const char* Form::GradeTooLowException::what() const throw()
	{
		return ("grade too low");
	}
