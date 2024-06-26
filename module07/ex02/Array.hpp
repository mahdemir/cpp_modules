/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Array.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: mademir <mademir@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/28 17:35:17 by mademir       #+#    #+#                 */
/*   Updated: 2024/03/06 21:29:57 by mademir       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/******** DEFINES *************************************************************/

#ifndef ARRAY_HPP
#define ARRAY_HPP

/******** INCLUDES ************************************************************/

#include <iostream>
#include <exception>

/******** CLASSES *************************************************************/

template <typename T>
class Array
{
private:
	T*				_arr;
	int				_size;

public:
					Array();
					Array(unsigned int n);
					Array(const Array& toCopy);
					~Array();

	Array&			operator = (const Array& toCopy);
	T&				operator [] (int index);
	const T&		operator [] (int index) const;

	int				size() const;

	class indexOutOfBound : public std::exception
	{
   		virtual const char* what() const throw()
		{
			return ("Index out of bound");
		}
	};
};

#endif // ARRAY_HPP
