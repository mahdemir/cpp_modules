/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RobotomyRequestForm.hpp                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: mademir <mademir@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/24 11:24:12 by mademir       #+#    #+#                 */
/*   Updated: 2024/02/24 11:45:01 by mademir       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/******** DEFINES *************************************************************/

#ifndef RRF_HPP
#define RRF_HPP

/******** INCLUDES ************************************************************/

#include "AForm.hpp"
#include <ctime>

/******** CLASSES *************************************************************/

class RobotomyRequestForm : public AForm
{
private:
	std::string				_target;

public:
							RobotomyRequestForm();
							RobotomyRequestForm(std::string target);
							RobotomyRequestForm(const RobotomyRequestForm& toCopy);
							~RobotomyRequestForm();

	RobotomyRequestForm&	operator = (const RobotomyRequestForm& toCopy);

	void					execute(const Bureaucrat& executor) const;
};

#endif // RRF_HPP
