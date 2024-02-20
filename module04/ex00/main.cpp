/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mademir <mademir@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/03 19:23:01 by mademir       #+#    #+#                 */
/*   Updated: 2024/02/14 09:54:46 by mademir       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	std::cout << "\nSUBJECT TESTS:\n" << std::endl;

	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;

	i->makeSound(); // will output the cat sound!
	j->makeSound();
	meta->makeSound();

	delete (meta);
	delete (j);
	delete (i);

	std::cout << "\nCUSTOM TESTS:\n" << std::endl;

	const Animal	*animal;
	
	animal = new Animal();
	std::cout << animal->getType() << " makes sound ";
	animal->makeSound();
	delete (animal);
	std::cout << std::endl;
	
	animal = new Dog();
	std::cout << animal->getType() << " makes sound ";
	animal->makeSound();
	delete (animal);
	std::cout << std::endl;
	
	animal = new Cat();
	std::cout << animal->getType() << " makes sound ";
	animal->makeSound();
	delete (animal);
	std::cout << std::endl;

	std::cout << "WRONG TESTS:\n" << std::endl;

	const WrongAnimal* k = new WrongCat();

	std::cout << k->getType() << std::endl;
	k->makeSound();
	delete (k);

	return (0);
}
