/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PhoneBook.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: mademir <mademir@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/03 09:32:05 by mademir       #+#    #+#                 */
/*   Updated: 2024/01/05 07:26:05 by mademir       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP

#define PHONEBOOK_HPP
#define BOOK_SIZE 8

#include <iostream>
#include "Contact.hpp"

class PhoneBook
{
	private:
		Contact	contacts[BOOK_SIZE];
		int		findContact(void);
	public:
		void	addContact(void);
		void	showContact(void);
		void	printWelcome(void);
};

#endif
