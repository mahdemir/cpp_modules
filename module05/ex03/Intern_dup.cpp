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

	static AForm*	createPPF(std::string target)
	{
		return (new PresidentialPardonForm(target));
	}

	static AForm*	createSCF(std::string target)
	{
		return (new ShrubberyCreationForm(target));
	}

	static AForm*	createRRF(std::string target)
	{
		return (new RobotomyRequestForm(target));
	}

	AForm*	Intern::makeForm(std::string formName, std::string target)
	{
		int					i = -1;
		const std::string	formNames[] = { "presidential pardon", "shrubbery creation", "robotomy request" };
		AForm*				(*formCreate[])(std::string) = { &createPPF, &createSCF, &createRRF };

		while (++i < 3)
		{
			if (formName == formNames[i])
			{
				std::cout << "Intern creates " << (formNames[i] + " form") << std::endl;
				return (formCreate[i](target));
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
