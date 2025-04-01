/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hali-mah <hali-mah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 10:15:00 by hali-mah          #+#    #+#             */
/*   Updated: 2025/04/01 11:27:39 by hali-mah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
    _firstname = "";
    _lastname = "";
    _nickname = "";
    _phonenumber = "";
    _darkestsecret = "";
}

void    Contact::setFirstName(std::string firstName)
{
    _firstname = firstName;
}

void    Contact::setLastName(std::string lastName)
{
    _lastname = lastName;
}

void    Contact::setNickName(std::string nickName)
{
    _nickname = nickName;
}

void    Contact::setPhoneNumber(std::string phoneNumber)
{
    _phonenumber = phoneNumber;
}

void    Contact::setDarkestSecret(std::string darkestSecret)
{
    _darkestsecret = darkestSecret;
}

std::string	Contact::getFirstName() const
{
    return _firstname;
}

std::string Contact::getLastName() const
{
    return _lastname;
}

std::string Contact::getNickName() const
{
    return _nickname;
}

std::string Contact::getPhoneNumber() const
{
    return _phonenumber;
}

std::string Contact::getDarkestSecret() const
{
    return _darkestsecret;
}

bool Contact::isEmpty() const
{
    return (_firstname.empty() || _lastname.empty() || _nickname.empty() || _phonenumber.empty() || _darkestsecret.empty());
}
