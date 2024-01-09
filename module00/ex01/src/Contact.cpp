/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Contact.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mademir <mademir@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/03 12:06:40 by mademir       #+#    #+#                 */
/*   Updated: 2024/01/05 07:02:44 by mademir       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void	Contact::printHeader(t_header print) const
{
	if (print == WELCOME)
	{
		std::cout << "*********************************************" << std::endl;
		std::cout << "*                 Phonebook                 *" << std::endl;
		std::cout << "*       Commands > ADD | SEARCH | EXIT      *" << std::endl;
		std::cout << "*********************************************" << std::endl;
	}
	else if (print == ADD)
	{
		std::cout << "*********************************************" << std::endl;
		std::cout << "*             Enter information             *" << std::endl;
		std::cout << "*********************************************" << std::endl;
	}
	else if (print == ADD_SUCCES)
	{
		std::cout << "*********************************************" << std::endl;
		std::cout << "*          Registration successful          *" << std::endl;
		std::cout << "*********************************************" << std::endl;
	}
	else if (print == CONTACT)
	{
		std:: cout << "*********************************************" << std::endl;
		std:: cout << "*                 Contacts                  *" << std::endl;
		std:: cout << "*        Commands > ID number | EXIT        *" << std::endl;
		std:: cout << "*********************************************" << std::endl;
	}
	else if (print == NO_CONTACT)
	{
		std:: cout << "*********************************************" << std::endl;
		std:: cout << "*              No contacts yet              *" << std::endl;
		std:: cout << "*       Use ADD command to create one       *" << std::endl;
		std:: cout << "*********************************************" << std::endl;
	}
}

void	Contact::checkSetData(int *i)
{
	printHeader(ADD);
	if ((this->firstName = getInput("First name > ")) == "")
		return ;
	if ((this->lastName = getInput("Last name > ")) == "")
		return ;
	if ((this->nickName = getInput("Nick name > ")) == "")
		return ;
	if ((this->phoneNumber = getInput("Phone number > ")) == "")
		return ;
	if ((this->darkestSecret = getInput("Darkest secret > ")) == "")
		return ;
	this->id = ++(*i);
	printHeader(ADD_SUCCES);
}

std::string	Contact::getInput(std::string const str)
{
	std::string	input;
	while (38)
	{
		std:: cout << str;
		std::getline(std::cin, input);
		if (std::cin.eof())
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			return "";
		}
		if (input.length() > 20)
		{
			std::cout << "use less then 20 letters" << std::endl;
			continue ;
		}
		if (std::cin.good() && !input.empty())
			break ;
		else
		{
			std::cin.clear();
			std::cout << "invalid value" << std::endl;
		}
	}
	return (input);
}

std::string	Contact::printFormat(std::string str) const
{
	if (str.length() <= 10)
		return str;
	return str.substr(0, 9) + ".";
}

void	Contact::viewListNames(void) const
{
	std::cout << "|" << std::setw(10) <<  "ID num";
	std::cout << "|" << std::setw(10) <<  "First name";
	std::cout << "|" << std::setw(10) <<  "Last name";
	std::cout << "|" << std::setw(10) <<  "Nick name";
	std::cout << "|" << std::endl;
}

void	Contact::viewList(void) const
{
	if (!this->checkContact())
		return ;
	std::cout << "|" << std::setw(10) <<  this->id;
	std::cout << "|" << std::setw(10) <<  printFormat(this->firstName);
	std::cout << "|" << std::setw(10) <<  printFormat(this->lastName);
	std::cout << "|" << std::setw(10) <<  printFormat(this->nickName);
	std::cout << "|" << std::endl;
}

void	Contact::viewFoundList(void) const
{
	std::cout << "    ID number:\t\t" << this->id << std::endl;
	std::cout << "    First name:\t\t" <<  this->firstName << std::endl;
	std::cout << "    Last name:\t\t" <<  this->lastName << std::endl;
	std::cout << "    Nick name:\t\t" <<  this->nickName << std::endl;
	std::cout << "    Phone number:\t" <<  this->phoneNumber << std::endl;
	std::cout << "    Darkest secret:\t" <<  this->darkestSecret << std::endl;
}

bool	Contact::checkContact(void) const
{
	if (this->id <= 0)
		return false;
	else if(this->firstName.empty())
		return false;
	return true;
}
