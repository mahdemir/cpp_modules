/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongCat.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mademir <mademir@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/03 19:29:37 by mademir       #+#    #+#                 */
/*   Updated: 2024/02/03 19:38:21 by mademir       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/******** DEFINES *************************************************************/

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

/******** INCLUDES ************************************************************/

#include "WrongAnimal.hpp"

/******** CLASSES *************************************************************/

class WrongCat : public WrongAnimal
{
private:

public:
			WrongCat();
			WrongCat(const WrongCat &toCopy);
			~WrongCat();

	WrongCat&	operator = (const WrongCat &toCopy);

	void	makeSound() const;
};

#endif // WRONGCAT_HPP
