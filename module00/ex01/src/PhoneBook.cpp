/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PhoneBook.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: mademir <mademir@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/03 12:06:50 by mademir       #+#    #+#                 */
/*   Updated: 2024/01/05 07:02:44 by mademir       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	PhoneBook::printWelcome(void)
{
	contacts[0].printHeader(WELCOME);
}

void	PhoneBook::addContact(void)
{
	static int	i;

	if (i == 8)
		i = 0;
	contacts[i % BOOK_SIZE].checkSetData(&i);
	
}

int PhoneBook::findContact(void)
{
	std::string	str;
	int			id;

	while (true)
	{
		id = 0;
		std::cout << "  id_number > ";
		if (!std::getline(std::cin, str))
			return -1;
		if (str == "EXIT" || str == "exit")
			return -1;
			std::stringstream	str_to_int(str);
			str_to_int >> id;
			if (1 <= id && id <= BOOK_SIZE)
			{
				if (!contacts[id - 1].checkContact())
					std::cout << "  contact not found" << std::endl;
				else
        			return id;
			}
			else
        		std::cout << "  invalid value" << std::endl;
	}
	return id;
}

void	PhoneBook::showContact(void)
{
	int id;

	if (!contacts[0].checkContact())
		return contacts[0].printHeader(NO_CONTACT);
	contacts[0].printHeader(CONTACT);
	contacts[0].viewListNames();
	for (int i = 0; i < BOOK_SIZE && contacts[i].checkContact(); i++)
		contacts[i].viewList();
	while ((id = PhoneBook::findContact()))
	{
		if (id == -1)
			break ;
		contacts[id - 1].viewFoundList();
	}
}
