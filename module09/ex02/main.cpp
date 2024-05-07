/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mademir <mademir@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/03/04 13:47:18 by mademir       #+#    #+#                 */
/*   Updated: 2024/05/07 01:13:15 by mademir       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

//MARK: Helpers
static inline void	exitError(std::string message)
{
	if (!message.empty())
		std::cerr << message << std::endl;
	exit(1);
}

template<typename Container>
void	printValues(std::string prefix, Container& c)
{
	typename Container::iterator it;

	std::cout << prefix;
	for (it = c.begin(); it < c.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
}

template<typename Container>
void	printTime(Container& c, std::string type, double& time)
{
	std::cout   << "Time to process a range of "
				<< c.size()
				<< " elements with std::"
				<< type
				<< " : \t"
				<< std::fixed
				<< std::setprecision(6)
				<< time
				<< " s"
				<< std::endl;
}

template<typename Container>
PmergeMe<Container>	makeGroupIter(Container it, std::size_t size)
{
	return PmergeMe<Container>(it, size);
}

template<typename Container>
PmergeMe<Container>	makeGroupIter(PmergeMe<Container> it, std::size_t size)
{
	return PmergeMe<Container>(it.getIter(), size * it.getSize());
}

template<typename Iterator>
bool	compareFunc(const int& lhs, const Iterator& rhs)
{
	return (lhs < *rhs);
}

std::size_t jacobsthal_diff(int n)
{
	int num1 = round((pow(2, n) + pow(-1, n - 1)) / 3);
	n++;
	int num2 = round((pow(2, n) + pow(-1, n - 1)) / 3);
	return (num2 - num1);
}

//MARK: Ford Johnson
template<typename Iterator>
void	fordJohnson(Iterator first, Iterator last)
{
	typename Iterator::difference_type size = std::distance(first, last);
	if (size < 2) return;

	bool odd = (size % 2 != 0);
	Iterator end = odd ? std::prev(last) : last;

	// Sort pairs
	for (Iterator it = first; it != end; it += 2)
	{
		if (*(it + 1) < *it)
			std::swap_ranges(it.getIter(), it.getIter() + it.getSize(), (it + 1).getIter());
	}

	fordJohnson(makeGroupIter(first, 2), makeGroupIter(end, 2));

	// Separate main chain and pend elements
	std::list<Iterator> mainChain;
	mainChain.push_back(first);
	mainChain.push_back(std::next(first));

	std::list<typename std::list<Iterator>::iterator> pend;
	for (Iterator it = first + 2; it != end; it += 2)
	{
		typename std::list<Iterator>::iterator tmp = mainChain.insert(std::end(mainChain), std::next(it));
		pend.push_back(tmp);
	}

	if (odd)
		pend.push_back(std::end(mainChain));

	// Binary insertion to main chain
	Iterator current_it = first + 2;
	typename std::list<typename std::list<Iterator>::iterator>::iterator current_pend = std::begin(pend);

	for(int k = 2; ; k++)
	{
		std::size_t dist = jacobsthal_diff(k);

		if (dist > static_cast<std::size_t>(std::distance(current_pend, std::end(pend))))
			break;

		Iterator toInsert = std::next(current_it, dist * 2);
		typename std::list<typename std::list<Iterator>::iterator>::iterator pend_start = std::next(current_pend, dist);
		while (pend_start != current_pend)
		{
			pend_start--;
			toInsert -= 2;
			typename std::list<Iterator>::iterator insertion_point = std::upper_bound(std::begin(mainChain), *pend_start, *toInsert, compareFunc<Iterator>);
			mainChain.insert(insertion_point, toInsert);
		}
		std::advance(current_it, dist * 2);
		std::advance(current_pend, dist);
	}

	// If pend elements left, insert to main chain
	while (current_pend != std::end(pend))
	{
		typename std::list<Iterator>::iterator insertion_point = std::upper_bound(std::begin(mainChain), *current_pend, *current_it, compareFunc<Iterator>);
		mainChain.insert(insertion_point, current_it);
		current_it += 2;
		current_pend++;
	}

	std::list<std::size_t> cache;
	for (Iterator& it: mainChain)
	{
		decltype(it.getIter()) begin = it.getIter();
		decltype(it.getIter()) end = begin + it.getSize();
		std::move(begin, end, std::back_inserter(cache));
	}
	std::move(std::begin(cache), std::end(cache), first.getIter());
}

//MARK: Main
int	main(int argc, char **argv)
{
	if (argc < 2)
		exitError("Usage: ./PmergeMe <sequence of positive integers>");

	std::vector<long>	vec;
	std::deque<long>	dq;

	for (int i = 1; i < argc; i++)
	{
		std::istringstream ss(argv[i]);
		long num;
		if (!(ss >> num) || !ss.eof())
			exitError("Error: input invalid");
		if (num < 0)
			exitError("Error: negative numbers not allowed");
		vec.push_back(num);
		dq.push_back(num);
	}

	printValues("Before: ", vec);

	clock_t startVec(clock());
	fordJohnson(makeGroupIter(vec.begin(), 1), makeGroupIter(vec.end(), 1));
	double vecTime(static_cast<double>(clock() - startVec) / CLOCKS_PER_SEC);

	clock_t startDq(clock());
	fordJohnson(makeGroupIter(dq.begin(), 1), makeGroupIter(dq.end(), 1));
	double dqTime(static_cast<double>(clock() - startDq) / CLOCKS_PER_SEC);

	printValues("After: ", vec);

	printTime(vec, "vector", vecTime);
	printTime(dq, "deque", dqTime);

	return 0;
}
