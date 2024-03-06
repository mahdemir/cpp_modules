/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PmergeMe.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mademir <mademir@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/03/04 13:47:20 by mademir       #+#    #+#                 */
/*   Updated: 2024/03/05 16:43:34 by mademir       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

/******** CONSTRUCTOR(S) ******************************************************/

PmergeMe::PmergeMe() {}

PmergeMe::PmergeMe(const PmergeMe& toCopy)
{
	(void)toCopy;
}

/******** DESTRUCTOR **********************************************************/

PmergeMe::~PmergeMe() {}

/******** OVERLOAD FUNCTION(S) ************************************************/

PmergeMe&	PmergeMe::operator = (const PmergeMe& toCopy)
{
	if (this != &toCopy)
	{
		(void)toCopy;
	}
	return (*this);
}

/******** HELPER(S) ***********************************************************/

inline static double	calculateDuration(clock_t start, clock_t end)
{
	double sec = static_cast<double>(end - start) / CLOCKS_PER_SEC;
	double ms = sec * 1000000.0;
 	std::chrono::microseconds duration(static_cast<long long>(ms));
    double time = duration.count() / 1000000.0;
	return (time);
}

void	PmergeMe::sortVector(int argc, char **argv)
{

	clock_t start = clock();

	for (int i = 1; i < argc; i++)
		_vector.push_back(safeToInt(std::string(argv[i])));

	printVal(_vector , "Before:");

	for (size_t i = 1; i < _vector.size(); i++)
	{
		int key = _vector[i];
		size_t j = i;
		while (j > 0 && _vector[j - 1] > key)
		{
			_vector[j] = _vector[j - 1];
			j--;
		}
		_vector[j] = key;
	}

	printVal(_vector , "After:");

    double time = calculateDuration(start, clock());

	std::cout	<< "Time to process a range of "
				<< _vector.size()
				<< " elements with std::vector : "
				<< std::fixed
				<< time
				<< " us"
				<< std::endl;
}

void	PmergeMe::sortList(int argc, char **argv)
{

	clock_t start = clock();

	for (int i = 1; i < argc; i++)
		_list.push_back(safeToInt(std::string(argv[i])));

	// printVal(_list ,"Before:");
    for (auto it = std::next(_list.begin()); it != _list.end(); ++it)
	{
        int key = *it;
        auto pos = it;
        while (pos != _list.begin() && *(std::prev(pos)) > key)
		{
			*pos = *(std::prev(pos));
    		--pos;
        }
        *pos = key;
    }
	// printVal(_list ,"After:");
	
    double time = calculateDuration(start, clock());
	
	std::cout	<< "Time to process a range of "
				<< _list.size()
				<< " elements with std::list   : "
				<< std::fixed
				<< time
				<< " us"
				<< std::endl;
}

/******** TEMPLATE(S) *********************************************************/

template<typename T>
void PmergeMe::printVal(const T& container, const std::string prefix)
{
	std::cout << prefix << "\t";
	for (int num : container)
	{
		std::cout << num << " ";
	}
	std::cout << std::endl;
}
