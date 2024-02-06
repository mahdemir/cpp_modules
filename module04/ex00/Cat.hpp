/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: mademir <mademir@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/03 19:22:54 by mademir       #+#    #+#                 */
/*   Updated: 2024/02/03 19:22:55 by mademir       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/******** DEFINES *************************************************************/

#ifndef CAT_HPP
#define CAT_HPP

/******** INCLUDES ************************************************************/

#include "Animal.hpp"

/******** CLASSES *************************************************************/

class Cat : public Animal
{
private:

public:
			Cat();
			Cat(const Cat &toCopy);
			~Cat();

	Cat&	operator = (const Cat &toCopy);

	void	makeSound() const;
};

#endif // CAT_HPP
