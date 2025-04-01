/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hali-mah <hali-mah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 10:16:16 by hali-mah          #+#    #+#             */
/*   Updated: 2025/04/01 12:13:49 by hali-mah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void displayPhonebook()
{
	std::cout << "\n==== Welcome to your custom Phonebook made by Hichem ====\n";
	std::cout << "Available commands:\n";
	std::cout << "ADD    _ Add a new contact\n";
	std::cout << "SEARCH _ Search for an existing contact\n";
	std::cout << "EXIT   _ Exit the program\n";
	std::cout <<"==============================\n";
}

Contact createContact()
{
	Contact     newContact;
	std::string input;

	std::cout << "Enter the first name: ";
	std::getline(std::cin, input);
	newContact.setFirstName(input);

	std::cout << "Enter the last name: ";
	std::getline(std::cin, input);
	newContact.setLastName(input);

	std::cout << "Enter the nickname: ";
	std::getline(std::cin, input);
	newContact.setNickName(input);

	std::cout << "Enter the phone number: ";
	std::getline(std::cin, input);
	newContact.setPhoneNumber(input);

	std::cout << "Enter the darkest secret: "
	std::getline(std::cin, input);
	newContact.setDarkestSecret(input);

	return (newContact);
}

int main()
{
	Phonebook   phonebook;
	std::string	command;
	
	std::cout << "My phonebook\n";
	while (true)
	{
		displayPhonebook();
		std::getline(std::cin, command);
		if (command == "ADD")
		{
			Contact contact = createContact();
			phonebook.addContact(contact);
		}
		else if (command == "SEARCH")
		{
			phonebook.searchContact();
		}
		else if (command == "EXIT")
		{
			std::cout << "Goodbye! All the contacts will be lost forever!\n";
			break;
		}
		else
			std::cout << "Unknown command, try again.\n";
	}
	return (0);
}
