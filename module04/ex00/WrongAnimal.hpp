/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongAnimal.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: mademir <mademir@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/03 19:22:59 by mademir       #+#    #+#                 */
/*   Updated: 2024/02/14 09:53:51 by mademir       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/******** DEFINES *************************************************************/
#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

/******** INCLUDES ************************************************************/

#include <iostream>

/******** CLASSES *************************************************************/

class WrongAnimal
{
private:

protected:
	std::string		type;

public:
					WrongAnimal();
					WrongAnimal(const WrongAnimal &toCopy);
			 		~WrongAnimal();

	WrongAnimal&	operator = (const WrongAnimal &toCopy);

	void			makeSound() const;

	std::string		getType() const;
};

#endif // WRONGANIMAL_HPP
