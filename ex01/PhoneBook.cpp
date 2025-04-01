/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hali-mah <hali-mah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 10:15:38 by hali-mah          #+#    #+#             */
/*   Updated: 2025/04/01 11:41:36 by hali-mah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

Phonebook::Phonebook()
{
	_oldestIndex = 0;
	_contactCount = 0;
}

void Phonebook::addContact(const Contact& contact)
{
	if (contact.getFirstName().empty() || contact.getLastName().empty() || 
		contact.getNickName().empty() || contact.getPhoneNumber().empty() || 
		contact.getDarkestSecret().empty())
	{
		std::cout << "Error: All contact fields must be filled." << std::endl;
		return ;
    }
	if(_contactCount = 8)
	{
		_contacts[_oldestIndex] = contact;
		_oldestIndex = (_oldestIndex + 1) % 8;
	}
	else
	{
		_contacts[_contactCount] = contact;
		_contactCount++;
	}
	std::cout << "Contact added successfully!" << std::endl;
}

std::string Phonebook::truncateField(std::string field) const
{
	if (field.length() > 10)
		return (field.substr(0,9) + ".");
	return (field);
}

void Phonebook::displayContactList() const
{
	if (_contactCount == 0)
	{
		std::cout << "Phonebook is empty!" << std::endl;
		return ;
	}
	std::cout << std::right << std::setw(10) << "Index" << "|";
	std::cout << std::right << std::setw(10) << "First Name" << "|";
	std::cout << std::right << std::setw(10) << "Last Name" << "|";
	std::cout << std::right << std::setw(10) << "Nickname" << std::endl;
	std::cout << std::string(43, '-') << std::endl;
}
