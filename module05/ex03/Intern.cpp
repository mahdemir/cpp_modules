#include "Intern.hpp"

/******** CONSTRUCTOR(S) ******************************************************/

	Intern::Intern()
	{
		std::cout << "Intern default constructor called" << std::endl;
	}

	Intern::Intern(const Intern& toCopy)
	{
		std::cout << "Intern copy constructor called" << std::endl;
		*this = toCopy;
	}

/******** DESTRUCTOR **********************************************************/

	Intern::~Intern()
	{
		std::cout << "Intern destructor called" << std::endl;
	}

/******** OVERLOAD FUNCTION(S) ************************************************/

	Intern&	Intern::operator = (const Intern& toCopy)
	{
		(void)toCopy;
		return (*this);
	}

/******** HELPER(S) ***********************************************************/

	AForm*	Intern::createPPF(std::string target)
	{
		return (new PresidentialPardonForm(target));
	}

	AForm*	Intern::createSCF(std::string target)
	{
		return (new ShrubberyCreationForm(target));
	}

	AForm*	Intern::createRRF(std::string target)
	{
		return (new RobotomyRequestForm(target));
	}

	AForm*	Intern::makeForm(std::string formName, std::string target)
	{
		int					i = -1;
		const std::string	formNames[] = {	"presidential pardon",
											"shrubbery creation",
											"robotomy request" };
		AForm*	(Intern::*formCreate[])(std::string) = { &Intern::createPPF,
														 &Intern::createSCF,
														 &Intern::createRRF };

		while (++i < 3)
		{
			if (formName == formNames[i])
			{
				std::cout << "Intern creates " << (formNames[i] + " form") << std::endl;
				return ((this->*formCreate[i])(target));
			}
		}
		throw FormNameInvalid();
		return (nullptr);
	}

/******** EXCEPTION(S) ********************************************************/

	const char*	Intern::FormNameInvalid::what() const throw()
	{
		return ("Form name doesn't exist");
	}
