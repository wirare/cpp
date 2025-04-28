/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wirare <wirare@42angouleme.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 20:54:04 by wirare            #+#    #+#             */
/*   Updated: 2025/04/27 20:34:00 by ellanglo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "phonebook.hpp"

Contact::Contact(void)
{
	this->_firstName = "";
	this->_lastName = "";
	this->_nickname = "";
	this->_phoneNumber = "";
	this->_darkestSecret = "";
}

Contact::~Contact(void)
{
}

SETTER(std::string, _firstName, FirstName, Contact)
SETTER(std::string, _lastName, LastName, Contact)
SETTER(std::string, _nickname, Nickname, Contact)
SETTER(std::string, _phoneNumber, PhoneNumber, Contact)
SETTER(std::string, _darkestSecret, DarkestSecret, Contact)

GETTER(std::string, _firstName, FirstName, Contact)
GETTER(std::string, _lastName, LastName, Contact)
GETTER(std::string, _nickname, Nickname, Contact)
GETTER(std::string, _phoneNumber, PhoneNumber, Contact)
GETTER(std::string, _darkestSecret, DarkestSecret, Contact)
