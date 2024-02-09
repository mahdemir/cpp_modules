/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: mademir <mademir@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/07 10:51:40 by mademir       #+#    #+#                 */
/*   Updated: 2024/02/07 12:07:28 by mademir       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/******** DEFINES *************************************************************/

#ifndef BRAIN_HPP
#define BRAIN_HPP

/******** INCLUDES ************************************************************/

#include "Animal.hpp"

/******** CLASSES *************************************************************/

class Brain
{
private:
	std::string		ideas[100];

public:
					Brain();
					Brain(const Brain &toCopy);
					~Brain();

	Brain&			operator = (const Brain &toCopy);

	std::string*	getIdeas() const;
	void			setIdeas(std::string *toSet);
	void			setIdea(std::string idea, int index);
};

#endif // BRAIN_HPP
