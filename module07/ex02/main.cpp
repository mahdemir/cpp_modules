/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mademir <mademir@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/29 14:40:02 by mademir       #+#    #+#                 */
/*   Updated: 2024/03/06 21:27:39 by mademir       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"
#include "Array.tpp"

#define SIZE 10
#define EXCEPTION_TEST 10

int	main()
{
	Array<int> empty;
	std::cout	<< "size of empty array: "
				<< empty.size()
				<< "\n\nInt array:\n";
	Array<int> nums(SIZE);
	for(int i = 0; i < SIZE; i++)
	{
		nums[i] = 1 + i;
		::print(nums[i]);
	}
	
	std::cout	<< "\nChar array:\n";
	Array<char> chars(SIZE);
	for(int i = 0; i < SIZE; i++)
	{
		chars[i] = 65 + i;
		::print(chars[i]);
	}
	
	std::cout	<< "\nMaking copy of char array:\n";
	Array<char> charsCopy(chars);
	for(int i = 0; i < SIZE; i++)
	{
		charsCopy[i] = 65 + i;
		::print(charsCopy[i]);
	}

	std::cout	<< "\nModify new arr index[0] to 'X':\n";
	charsCopy[0] = 'X';
	std::cout << charsCopy[0] << std::endl;
	std::cout	<< "Print old arr index[0]:\n";
	std::cout << chars[0] << std::endl;
	

	std::cout	<< "\nDouble array:\n";
	Array<double> doubles(SIZE);
	for(int i = 0; i < SIZE; i++)
	{
		doubles[i] = 0.2 + i;
		::print(doubles[i]);
	}

	std::cout	<< "\nCalling copy constructor to const variable:\n";
	const Array<int> constInt(nums);
	for(int i = 0; i < SIZE; i++)
	{
		::print(constInt[i]);
	}
	std::cout	<< "\nTry to acces index [" << EXCEPTION_TEST << "]:\n";
    try
    {
        nums[EXCEPTION_TEST] = EXCEPTION_TEST;
    }
    catch(const std::exception& e)
    {
        std::cerr << "Caught exception: " << e.what() << '\n';
    }

	return (0);
}
