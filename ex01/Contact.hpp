/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hali-mah <hali-mah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 09:43:15 by hali-mah          #+#    #+#             */
/*   Updated: 2025/04/01 10:44:44 by hali-mah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <iomanip>
#include <string>

class Contact
{
    public:
        Contact();
        void    setFirstName(std::string firstName);
        void    setLastName(std::string lastName);
        void    setNickName(std::string nickName);
        void    setPhoneNumber(std::string phoneNunber);
        void    setDarkestSecret(std::string darkestSecret);
        
    private:
        std::string _firstname;
        std::string _lastname;
        std::string _nickname;
        std::string _phonenumber;
        std::string _darkestsecret;
};

#endif