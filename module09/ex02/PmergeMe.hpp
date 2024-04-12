/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PmergeMe.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mademir <mademir@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/03/04 13:47:23 by mademir       #+#    #+#                 */
/*   Updated: 2024/04/12 10:38:11 by mademir       ########   odam.nl         */
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
#include <algorithm>

/******** CLASS(ES) ***********************************************************/

template<typename Container>
class PmergeMe
{
private:
	Container _it;
	std::size_t _size;

public:
	typedef typename Container::iterator_category	iterator_category;
	typedef typename Container::value_type			value_type;
	typedef typename Container::difference_type		difference_type;
	typedef typename Container::reference			reference;
	typedef typename Container::pointer				pointer;

	// CON/DE-STRUCTOR
					PmergeMe() = default;
					PmergeMe(Container it, std::size_t size) : _it(it), _size(size) {}
					~PmergeMe() {};

	// GETTERS
	Container	getIter() const
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

	PmergeMe&	operator++()
    {
        _it += _size;
        return *this;
    }

    PmergeMe	operator++(int)
    {
        auto tmp = *this;
        operator++();
        return tmp;
    }

    PmergeMe&	operator--()
    {
        _it -= _size;
        return *this;
    }

    PmergeMe	operator--(int)
    {
        auto tmp = *this;
        operator--();
        return tmp;
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
