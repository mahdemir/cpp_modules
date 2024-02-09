/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: mademir <mademir@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/07 10:51:42 by mademir       #+#    #+#                 */
/*   Updated: 2024/02/07 12:08:46 by mademir       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

/******** CONSTRUCTOR(S) ******************************************************/

	Brain::Brain()
	{
		std::cout << "Brain default constructor called" << std::endl;
	}

	Brain::Brain(const Brain &toCopy)
	{
		std::cout << "Brain copy constructor called" << std::endl;
		(*this) = toCopy;
	}

/******** DESTRUCTOR **********************************************************/

	Brain::~Brain()
	{
		std::cout << "Brain destructor called" << std::endl;
	}

/******** OVERLOAD FUNCTION(S) ************************************************/

	Brain&		Brain::operator = (const Brain &toCopy)
	{
		std::cout << "Brain copy assignement operator called" << std::endl;
		if (this != &toCopy)
			setIdeas(toCopy.getIdeas());
		return (*this);
	}

/******** GETTER(S) ***********************************************************/

	std::string*	Brain::getIdeas() const
	{
		return ((std::string *)ideas);
	}

/******** SETTER(S) ***********************************************************/

	void	Brain::setIdeas(std::string *toSet)
	{
		for (int i = 0; i < 100; i++)
			ideas[i] = toSet[i];
	}

	void	Brain::setIdea(std::string idea, int index)
	{
		if (index < 0 || index > 100)
			return ;
		ideas[index] = idea;
	}
