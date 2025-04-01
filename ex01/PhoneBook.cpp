/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hali-mah <hali-mah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 10:15:38 by hali-mah          #+#    #+#             */
/*   Updated: 2025/04/01 11:52:51 by hali-mah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

Phonebook::Phonebook()
{
	_oldestIndex = 0;
	_contactCount = 0;
}

void	Phonebook::addContact(const Contact& contact)
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

std::string	Phonebook::truncateField(std::string field) const
{
	if (field.length() > 10)
		return (field.substr(0,9) + ".");
	return (field);
}

void	Phonebook::displayContactList() const
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
	for (int i = 0; i < _contactCount; i++)
	{
		std::cout << std::right << std::setw(10) << i << "|";
		std::cout << std::right << std::setw(10) << truncateField(_contacts[i].getFirstName()) << "|";
		std::cout << std::right << std::setw(10) << truncateField(_contacts[i].getLastName()) << "|";
		std::cout << std::right << std::setw(10) << truncateField(_contacts[i].getNickName()) << std::endl;
	}
}

void	Phonebook::displayContact(int index) const
{
	std::cout << "Contact details:" << std::endl;
	std::cout << "First name: " << _contacts[index].getFirstName() << std::endl;
	std::cout << "Last name: " << _contacts[index].getLastName() << std::endl;
	std::cout << "Nickname: " << _contacts[index].getNickName() << std::endl;
	std::cout << "Phone number: " << _contacts[index].getPhoneNumber() << std::endl;
	std::cout << "Darkest secret: " << _contacts[index].getDarkestSecret() << std::endl;
}

void	Phonebook::searchContact() const
{
	if (_contactCount == 0)
	{
		std::cout << "Phonebook is empty" << std::endl;
		return ;
	}
	displayContactList();
	std::cout << "Enter index of contact to display" << std::endl;
	std::string input;
	std::getline(std::cin, input);
	for (size_t i = 0; i < input.length(); i++)
	{
		if (!std::isdigit(input[i]))
		{
			std::cout << "Error! Index must be a number" << std::endl;
			return ;
		}
	}
	int index = std::atoi(input.c_str());
	if (index < 0 || index >= _contactCount)
	{
		std::cout << "Error! Index out of range" << std::endl;
		return ;
	}
	displayContact(index);
}
