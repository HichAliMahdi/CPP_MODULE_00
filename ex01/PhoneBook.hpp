/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hali-mah <hali-mah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 11:05:09 by hali-mah          #+#    #+#             */
/*   Updated: 2025/04/01 11:22:02 by hali-mah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include "Contact.hpp"

class	Phonebook
{
	public:
		Phonebook();
		void	addContact(const Contact& contact);
		void	searchContact() const;
		void	displayContactList() const;
	private:
		Contact		_contacts[8];
		int			_oldestIndex;
		int			_contactCount;
		std::string	truncateField(std::string field) const;
		void		displayContact(int index) const;
};

#endif