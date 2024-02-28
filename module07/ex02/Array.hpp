/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Array.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: mademir <mademir@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/28 17:35:17 by mademir       #+#    #+#                 */
/*   Updated: 2024/02/28 18:17:32 by mademir       ########   odam.nl         */
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
	unsigned int	_size;

public:
					Array();
					Array(unsigned int n);
					Array(const Array<T> &toCopy);
					~Array();

	Array<T>		&operator = (const Array<T> &toCopy);
	// [] overload
	unsigned int	size() const;


};

#endif // ARRAY_HPP
