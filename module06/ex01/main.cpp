/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mademir <mademir@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/25 10:48:23 by mademir       #+#    #+#                 */
/*   Updated: 2024/02/25 11:19:15 by mademir       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int	main()
{
	struct Data *a = new Data;
	a->name = "test";
	a->age = 40;

	std::cout	<< "\nBefore:\n"
				<< "name: " << a->name << "\n"
				<< "age: " << a->age << "\n"
				<< std::endl;

	uintptr_t ret = Serializer::serialize(a);

	std::cout	<< "After serializing:\n"
				<< ret << "\n" <<std::endl;
	
	a = Serializer::deserialize(ret);

	std::cout	<< "After deserializing:\n"
				<< "name: " << a->name << "\n"
				<< "age: " << a->age << "\n"
				<< std::endl;

	delete a;
	return (0);	
}
