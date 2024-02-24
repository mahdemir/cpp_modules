/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ShrubberyCreationForm.cpp                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: mademir <mademir@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/24 14:51:00 by mademir       #+#    #+#                 */
/*   Updated: 2024/02/24 14:51:01 by mademir       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

/******** CONSTRUCTOR(S) ******************************************************/

	ShrubberyCreationForm::ShrubberyCreationForm()
							: AForm("ShrubberyCreationForm", 145, 137), _target("default")
	{
		std::cout << "ShrubberyCreationForm default constructor called" << std::endl;
	}

	ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
							: AForm("ShrubberyCreationForm", 145, 137), _target(target)
	{
		std::cout << "ShrubberyCreationForm parameterized constructor called" << std::endl;
	}

	ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& toCopy)
	{
		std::cout << "ShrubberyCreationForm copy constructor called" << std::endl;
		*this = toCopy;
	}

/******** DESTRUCTOR **********************************************************/

	ShrubberyCreationForm::~ShrubberyCreationForm()
	{
		std::cout << "ShrubberyCreationForm destructor called" << std::endl;
	}

/******** OVERLOAD FUNCTION(S) ************************************************/

	ShrubberyCreationForm&	ShrubberyCreationForm::operator = (const ShrubberyCreationForm& toCopy)
	{
		if (this != &toCopy)
			_target = toCopy._target;
		return (*this);
	}

/******** HELPER(S) ***********************************************************/

	void	ShrubberyCreationForm::execute(const Bureaucrat& executor) const
	{
		std::ofstream	outFile;
		std::string		fileName = _target + "_shrubbery.txt";
		std::string		execCommand = "tree" " > " + fileName;
		int				code;

		if (validateExecutor(executor) == 1)
			throw GradeTooLowException();
		if (validateExecutor(executor) == 2)
			throw FormNotSigned();
		outFile.open(fileName);
		if (!outFile.is_open())
			std::cerr << "Error: cannot open file" << std::endl;
		else
		{
			code = system(execCommand.c_str());
			if (code == 0)
				std::cout << "Command executed successfully. Output redirected to " << fileName << std::endl;
			else
				std::cerr << "Error executing command" << std::endl;
		}
	}
