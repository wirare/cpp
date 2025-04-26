/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wirare <wirare@42angouleme.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 20:54:04 by wirare            #+#    #+#             */
/*   Updated: 2025/04/22 17:54:15 by wirare           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "phonebook.hpp"

Contact::Contact(void)
{
	this->firstName = "";
	this->lastName = "";
	this->nickname = "";
	this->phoneNumber = "";
	this->darkestSecret = "";
}

Contact::~Contact(void)
{
}

STRING_SETTER(firstName, FirstName, Contact)
STRING_SETTER(lastName, LastName, Contact)
STRING_SETTER(nickname, Nickname, Contact)
STRING_SETTER(phoneNumber, PhoneNumber, Contact)
STRING_SETTER(darkestSecret, DarkestSecret, Contact)

STRING_GETTER(firstName, FirstName, Contact)
STRING_GETTER(lastName, LastName, Contact)
STRING_GETTER(nickname, Nickname, Contact)
STRING_GETTER(phoneNumber, PhoneNumber, Contact)
STRING_GETTER(darkestSecret, DarkestSecret, Contact)
