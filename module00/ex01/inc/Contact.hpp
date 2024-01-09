/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Contact.hpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mademir <mademir@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/03 12:06:44 by mademir       #+#    #+#                 */
/*   Updated: 2024/01/05 07:02:44 by mademir       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP
#define BOOK_SIZE 8

#include <iostream>
#include <sstream>
#include <iomanip>

typedef enum e_header
{
	WELCOME,
	ADD,
	ADD_SUCCES,
	CONTACT,
	NO_CONTACT
}	t_header;

class Contact
{
	private:
		int			id;
		std::string	firstName;
		std::string	lastName;
		std::string	nickName;
		std::string	phoneNumber;
		std::string	darkestSecret;
		std::string	printFormat(std::string const str) const;
		std::string	getInput(std::string const str);
	public:
		void		checkSetData(int *i);
		void		viewList(void) const;
		void		viewListNames(void) const;
		void		viewFoundList(void) const;
		void		printHeader(t_header print) const;
		bool		checkContact(void) const;
};

#endif
