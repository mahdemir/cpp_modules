/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mademir <mademir@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/28 14:01:22 by mademir       #+#    #+#                 */
/*   Updated: 2024/02/29 13:31:36 by mademir       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int	main()
{
	int		intArr[LEN] = {0};
	char	charArr[LEN] = {0};
	
	::iter(intArr, LEN, ::print);
	::iter(intArr, LEN, ::val65);
	::iter(intArr, LEN, ::print);

	::iter(charArr, LEN, ::print); // prints null (non-printable)
	::iter(charArr, LEN, ::val65);
	::iter(charArr, LEN, ::print); // ascii value 65 == 'A'

	return (0);
}
