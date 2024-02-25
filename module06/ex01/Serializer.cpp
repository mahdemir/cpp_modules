/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Serializer.cpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: mademir <mademir@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/25 10:48:33 by mademir       #+#    #+#                 */
/*   Updated: 2024/02/25 10:48:34 by mademir       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

/******** CONSTRUCTOR(S) ******************************************************/

Serializer::Serializer() {}

Serializer::Serializer(const Serializer& toCopy) { (void)toCopy; }

/******** DESTRUCTOR **********************************************************/

Serializer::~Serializer() {}

/******** OVERLOAD FUNCTION(S) ************************************************/

Serializer&	Serializer::operator = (const Serializer& toCopy)
{
	(void)toCopy;
	return (*this);
}

/******** HELPER(S) ***********************************************************/

uintptr_t	Serializer::serialize(Data* ptr)
{
	uintptr_t ret = reinterpret_cast<uintptr_t>(ptr);
	return (ret);
}

Data*		Serializer::deserialize(uintptr_t raw)
{
	Data* ret = reinterpret_cast<Data*>(raw);
	return (ret);
}
