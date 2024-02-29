/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mademir <mademir@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/29 14:40:02 by mademir       #+#    #+#                 */
/*   Updated: 2024/02/29 15:03:35 by mademir       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"
#include "Array.tpp"

#define SIZE 10
#define EXCEPTION_TEST -2

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
	std::cout	<< "\n"
				<< "Char array:\n";
	Array<char> chars(SIZE);
	for(int i = 0; i < SIZE; i++)
	{
		chars[i] = 65 + i;
		::print(chars[i]);
	}
	std::cout	<< "\n"
				<< "Double array:\n";
	Array<double> doubles(SIZE);
	for(int i = 0; i < SIZE; i++)
	{
		doubles[i] = 0.2 + i;
		::print(doubles[i]);
	}
	std::cout	<< "\n"
				<< "Calling copy constructor with nums variable:\n";
	Array<int> newnums(nums);
	for(int i = 0; i < SIZE; i++)
	{
		::print(newnums[i]);
	}
	std::cout	<< "\n"
				<< "Try to acces index [" << EXCEPTION_TEST << "]:\n";
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
