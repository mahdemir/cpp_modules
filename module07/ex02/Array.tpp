/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Array.tpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: mademir <mademir@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/28 17:35:15 by mademir       #+#    #+#                 */
/*   Updated: 2024/02/28 18:11:59 by mademir       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T>
Array<T>::Array() : _arr(nullptr), _size(0) {}

template <typename T>
Array<T>::Array(unsigned int n) : _arr(new T[n]), _size(n) {}

template <typename T>
Array<T>::Array(const Array<T> &toCopy) : _arr(new T[toCopy._size]), _size(toCopy._size)
{
	for (int i = 0; i < toCopy._size; i++)
		_arr[i] = toCopy._arr[i];
}

template <typename T>
Array<T>::~Array()
{
	delete (_arr);
}

template <typename T>
Array<T>	&Array<T>::operator = (const Array<T> &toCopy)
{
	if (this != toCopy)
	{
		delete(_arr);
		_size = toCopy._size;
		_arr = new T[toCopy._size];
		for (int i = 0; i < toCopy._size; i++)
			_arr[i] = toCopy._arr[i];
	}
	return (*this);
}

template <typename T>
unsigned int	Array<T>::size() const
{
	return (_size);
}
