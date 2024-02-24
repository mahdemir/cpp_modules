/******** DEFINES *************************************************************/

#ifndef INTERN_HPP
#define INTERN_HPP

/******** INCLUDES ************************************************************/

#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

/******** CLASSES *************************************************************/

class Intern
{
public:
			Intern();
			Intern(const Intern& toCopy);
			~Intern();

	Intern&	operator = (const Intern& toCopy);

	AForm*	makeForm(std::string formName, std::string target);

	class FormNameInvalid : public std::exception
	{
		virtual const char* what() const throw();
	};
};

#endif // INTERN_HPP
