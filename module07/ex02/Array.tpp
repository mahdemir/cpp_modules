/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Array.tpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: mademir <mademir@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/28 17:35:15 by mademir       #+#    #+#                 */
/*   Updated: 2024/02/29 14:22:03 by mademir       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
#define ARRAY_TPP

#include "Array.hpp"

/******** CONSTRUCTOR(S) ******************************************************/

template <typename T>
Array<T>::Array()
							: _arr(nullptr), _size(0) {}
template <typename T>
Array<T>::Array(unsigned int n)
							: _arr(new T[n]), _size(n) {}

template <typename T>
Array<T>::Array(const Array &toCopy)
							: _arr(new T[toCopy._size]), _size(toCopy._size)
{
	*this = toCopy;
}

/******** DESTRUCTOR **********************************************************/

template <typename T>
Array<T>::~Array() { delete[] (_arr); }

/******** OVERLOAD FUNCTION(S) ************************************************/

template <typename T>
Array<T>&	Array<T>::operator = (const Array& toCopy)
{
	if (this != &toCopy)
	{
		delete[] (_arr);
		_size = toCopy._size;
		_arr = new T[toCopy._size];
		for (unsigned int i = 0; i < toCopy._size; i++)
			_arr[i] = toCopy._arr[i];
	}
	return (*this);
}

template <typename T>
T&	Array<T>::operator [] (unsigned int index)
{
	if (index < 0 || index > _size)
		throw indexOutOfBound();
	return ((*this)._arr[index]);
}

/******** GETTER(S) ***********************************************************/

template <typename T>
unsigned int	Array<T>::size() const { return (_size); }

/******** HELPER(S) ***********************************************************/

template <typename T>
void	print(T& toPrint)
{
	std::cout << toPrint << std::endl;
}

#endif // ARRAY_TPP
