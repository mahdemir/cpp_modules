/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mademir <mademir@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/03 19:23:01 by mademir       #+#    #+#                 */
/*   Updated: 2024/02/08 10:23:11 by mademir       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main(void)
{
	std::cout << "Array test\n" << std::endl;

	Animal	*arr[20];

	for (int i = 0; i < 10; i++)
	{
		arr[i] = new Cat();
		arr[i + 10] = new Dog();
	}
	for (int i = 0; i < 20; i++)
		delete (arr[i]);

	std::cout << "\nDeep copy test\n" << std::endl;

	Dog	test = Dog();

	std::cout	<< "\nideas[2](empty):\t" << test.getBrain()->getIdeas()[2] << std::endl;
	test.getBrain()->setIdea("myIdea", 2);
	std::cout	<< "ideas[2]:\t" << test.getBrain()->getIdeas()[2] << "\n"
				<< "ideas[2](addr):\t" << &test.getBrain()->getIdeas()[2] << "\n\n"

				<< "execute copy..\n" << std::endl;

	Dog copy = test;

	std::cout	<< "\nideas[2]:\t" << copy.getBrain()->getIdeas()[2] << "\n"
				<< "ideas[2](addr):\t" << &copy.getBrain()->getIdeas()[2] << "\n" << std::endl;

	return (0);
}
