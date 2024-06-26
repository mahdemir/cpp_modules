/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mademir <mademir@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/03 09:31:44 by mademir       #+#    #+#                 */
/*   Updated: 2024/01/12 23:12:46 by mademir       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main(void)
{
	PhoneBook book;
	std::string input;

	book.printWelcome();
	while (input != "EXIT")
	{
		std::cout << "command > ";
		if (!std::getline(std::cin, input))
			return 1;
		else if (input == "ADD")
			book.addContact();
		else if (input == "SEARCH")
			book.showContact();
		else if ((input != "EXIT"))
			std::cout << "wrong command" << std::endl;
	}
	return 0;
}
