/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mademir <mademir@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/25 11:41:00 by mademir       #+#    #+#                 */
/*   Updated: 2024/02/25 12:52:52 by mademir       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base*	generate()
{
	int		index;

	std::srand(static_cast<unsigned int>(time(NULL)));
	index = std::rand() % 3;
	switch(index)
	{
		case 0: return ((Base *)new A);
		case 1: return ((Base *)new B);
		case 2: return ((Base *)new C); 
	}
	return (nullptr);
}

void	identify(Base* p)
{
	// returns null if cast fails
	if (dynamic_cast< A* >(p))
		std::cout << "A type" << std::endl;
	else if (dynamic_cast< B* >(p))
		std::cout << "B type" << std::endl;
	else if (dynamic_cast< C* >(p))
		std::cout << "C type" << std::endl;
	else
		std::cout << "Unknown type" << std::endl;
	
}

void	identify(Base& p)
{
	// throws exception if cast fails
	try
	{
		(void)dynamic_cast< A& >(p);
		std::cout << "A type" << std::endl;
	}
	catch(const std::exception& e) {}

	try
	{
		(void)dynamic_cast< B& >(p);
		std::cout << "B type" << std::endl;
	}
	catch(const std::exception& e) {}

	try
	{
		(void)dynamic_cast< C& >(p);
		std::cout << "C type" << std::endl;
	}
	catch(const std::exception& e) {}
}

int	main()
{
	Base* ptr = generate();

	std::cout << "identify pointer: ";
	identify(ptr);
	std::cout << "identify refrence: ";
	identify(*ptr);

	return (0);
}
