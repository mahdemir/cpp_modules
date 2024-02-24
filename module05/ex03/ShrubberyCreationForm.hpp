/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ShrubberyCreationForm.hpp                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: mademir <mademir@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/24 11:24:06 by mademir       #+#    #+#                 */
/*   Updated: 2024/02/24 14:46:58 by mademir       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/******** DEFINES *************************************************************/

#ifndef SCF_HPP
#define SCF_HPP

/******** INCLUDES ************************************************************/

#include "AForm.hpp"
#include <fstream>
#include <cstdlib>

/******** CLASSES *************************************************************/

class ShrubberyCreationForm : public AForm
{
private:
	std::string				_target;

public:
							ShrubberyCreationForm();
							ShrubberyCreationForm(std::string target);
							ShrubberyCreationForm(const ShrubberyCreationForm& toCopy);
							~ShrubberyCreationForm();

	ShrubberyCreationForm&	operator = (const ShrubberyCreationForm& toCopy);

	void					execute(const Bureaucrat& executor) const;
};

#endif // SCF_HPP
