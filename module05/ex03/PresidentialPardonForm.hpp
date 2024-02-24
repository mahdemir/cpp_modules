/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PresidentialPardonForm.hpp                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: mademir <mademir@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/24 11:24:16 by mademir       #+#    #+#                 */
/*   Updated: 2024/02/24 12:45:51 by mademir       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/******** DEFINES *************************************************************/

#ifndef PPF_HPP
#define PPF_HPP

/******** INCLUDES ************************************************************/

#include "AForm.hpp"

/******** CLASSES *************************************************************/

class PresidentialPardonForm : public AForm
{
private:
	std::string				_target;

public:
							PresidentialPardonForm();
							PresidentialPardonForm(std::string target);
							PresidentialPardonForm(const PresidentialPardonForm& toCopy);
							~PresidentialPardonForm();

	PresidentialPardonForm&	operator = (const PresidentialPardonForm& toCopy);

	void					execute(const Bureaucrat& executor) const;
};

#endif // PPF_HPP
