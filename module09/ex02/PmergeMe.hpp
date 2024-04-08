/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PmergeMe.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mademir <mademir@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/03/04 13:47:23 by mademir       #+#    #+#                 */
/*   Updated: 2024/04/08 11:19:28 by mademir       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/******** DEFINE(S) ***********************************************************/

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#define CACHED_DIFFS 2u, 2u, 6u, 10u, 22u, 42u, 86u, 170u, 342u, 682u, 1366u, \
2730u, 5462u, 10922u, 21846u, 43690u, 87382u, 174762u, 349526u, 699050u

/******** INCLUDE(S) **********************************************************/

#include <iostream>
#include <deque>
#include <vector>
#include <list>
#include <sstream>
#include <iomanip>
// #include <ctime>
// #include <algorithm>


/******** CLASS(ES) ***********************************************************/

// Iterator class for groups
template<typename Iterator>
class PmergeMe
{
private:
	Iterator _it;
	std::size_t _size;

public:
	typedef typename Iterator::iterator_category	iterator_category;
	typedef typename Iterator::value_type			value_type;
	typedef typename Iterator::difference_type		difference_type;
	typedef typename Iterator::reference			reference;
	typedef typename Iterator::pointer				pointer;

	// CON/DE-STRUCTOR
					PmergeMe() = default;
					PmergeMe(Iterator it, std::size_t size) : _it(it), _size(size) {}
					~PmergeMe() {};

	// GETTERS
	Iterator	getIter() const
	{
		return _it;
	}

	std::size_t		getSize() const
	{
		return _size;
	}

	// OVERLOAD FUNCTIONS
	reference		operator * () const
	{
		return _it[_size - 1];
	}

	PmergeMe&		operator += (std::size_t increment)
	{
		_it += _size * increment;
		return *this;
	}

	PmergeMe&		operator -= (std::size_t increment)
	{
		_it -= _size * increment;
		return *this;
	}

	bool			operator != (const PmergeMe& toCompare) const
	{
		return _it != toCompare._it;
	}

	PmergeMe		operator + (std::size_t size) const
	{
		PmergeMe ret = *this;
		ret += size;
		return ret;	
	}

	difference_type	operator - (const PmergeMe& toSubtract) const
	{
		return (_it - toSubtract._it) / _size;
	}
};

/******** PROTOTYPE(S) ********************************************************/

#endif // PMERGEME_HPP
