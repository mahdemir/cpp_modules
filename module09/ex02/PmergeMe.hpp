/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PmergeMe.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mademir <mademir@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/03/04 13:47:23 by mademir       #+#    #+#                 */
/*   Updated: 2024/03/06 14:23:31 by mademir       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/******** DEFINE(S) ***********************************************************/

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#define TOMICROSECONDS 1000.0

/******** INCLUDE(S) **********************************************************/

#include <iostream>
#include <list>
#include <vector>
#include <ctime>
#include <chrono>

/******** CLASS(ES) ***********************************************************/

class PmergeMe
{
private:
	std::vector<int>	_vector;
	std::list<int>		_list;

public:
						PmergeMe();
						PmergeMe(const PmergeMe& toCopy);
						~PmergeMe();

	PmergeMe&			operator = (const PmergeMe& toCopy);

	void				sortVector(int argc, char **argv);
	void				sortList(int argc, char **argv);

	template<typename T>
	void				printVal(const T& container, const std::string prefix);
};

/******** PROTOTYPE(S) ********************************************************/

int	safeToInt(std::string str);

#endif // PMERGEME_HPP
