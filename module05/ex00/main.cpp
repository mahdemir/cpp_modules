/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mademir <mademir@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/21 13:55:15 by mademir       #+#    #+#                 */
/*   Updated: 2024/02/21 15:29:21 by mademir       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	// one
	std::cout << "ONE:\n";
	try
	{
		Bureaucrat one;
		std::cout << one;
	}
	catch (std::exception& e)
	{
		std::cout << "Catched exception: " << e.what() << std::endl;
	}
	std::cout << "\n";
	
	// two
	std::cout << "TWO:\n";
	try
	{
		Bureaucrat two("two", 1);
		two.incrementGrade(); // the grade of "one" is already the highest grade
		std::cout << two; // will not get executed

	}
	catch (std::exception& e)
	{
		std::cout << "Catched exception: " << e.what() << std::endl;
	}
	std::cout << "\n";
	
	// three
	std::cout << "THREE:\n";
	try
	{
		Bureaucrat three("three", 1);
		three.decrementGrade(); // grade will be 2 now, no exception to catch
		std::cout << three;
	}
	catch (std::exception& e)
	{
		std::cout << "Catched exception: " << e.what() << std::endl;
	}
	std::cout << "\n";
	
	// four
	std::cout << "FOUR:\n";
	try
	{
		Bureaucrat four("four", 150);
		four.decrementGrade(); // the grade of "four" is already the lowest grade
		std::cout << four; // will not get executed
	}
	catch (std::exception& e)
	{
		std::cout << "Catched exception: " << e.what() << std::endl;
	}
	std::cout << "\n";
	
	// five
	std::cout << "FIVE:\n";
	try
	{
		Bureaucrat five("five", 555); // destructor not called because of object not fully constructed
		std::cout << five; // will not get executed
	}
	catch (std::exception& e)
	{
		std::cout << "Catched exception: " << e.what() << std::endl;
	}

	return (0);
}
