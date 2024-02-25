/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Serializer.hpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: mademir <mademir@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/25 10:48:36 by mademir       #+#    #+#                 */
/*   Updated: 2024/02/25 11:20:52 by mademir       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/******** DEFINES *************************************************************/

#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

/******** INCLUDES ************************************************************/

#include <iostream>
#include "Data.hpp"

/******** CLASSES *************************************************************/

class Serializer
{
private:
						Serializer();
						Serializer(const Serializer& toCopy);
						~Serializer();

	Serializer&			operator = (const Serializer& toCopy);

public:
	static uintptr_t	serialize(Data* ptr);
	static Data*		deserialize(uintptr_t raw);
};

#endif // SERIALIZER_HPP
