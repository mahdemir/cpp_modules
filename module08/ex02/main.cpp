/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mademir <mademir@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/03/01 12:31:23 by mademir       #+#    #+#                 */
/*   Updated: 2024/03/02 12:54:04 by mademir       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include "MutantStack.tpp"
#include <list>

int main()
{
	std::cout << "SUBJECT TESTS:\n" << std::endl;
	{
		MutantStack<int> mstack;

		mstack.push(5);
		mstack.push(17);
		std::cout << mstack.top() << std::endl;
		mstack.pop();
		std::cout << mstack.size() << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::stack<int> s(mstack);
		std::cout	<< "top element copy stack: "
					<< s.top()
					<< std::endl;
	}
	std::cout << "\nMY TESTS:\n" << std::endl;
	{
		std::cout << "std::list:" << std::endl;

		std::list<int> mlist;

		mlist.push_back(5);
		mlist.push_back(17);
		std::cout << mlist.back() << std::endl;
		mlist.pop_back();
		std::cout << mlist.size() << std::endl;
		mlist.push_back(3);
		mlist.push_back(5);
		mlist.push_back(737);
		std::list<int>::iterator it = mlist.begin();
		std::list<int>::iterator ite = mlist.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::list<int> s(mlist);
	}
	{
		std::cout << "\nchar stack:" << std::endl;
		MutantStack<char>	charStack;

		charStack.push('A');
		charStack.push('B');
		charStack.push('C');
		MutantStack<char>::iterator it = charStack.begin();
		// MutantStack<char>::iterator it_end = charStack.end();
		
		std::cout	<< "before iterator: " << *it << "\n"
					<< "it++;\n"; it++;
		std::cout	<< "after increment: "
					<< *it <<  std::endl;

		std::cout << "\ncopy stack:" << std::endl;
		MutantStack<char>	charStackCopy(charStack);
		std::cout	<< "top element of copy: "
					<< charStackCopy.top()
					<< std::endl;
	}
	return (0);
}
