/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wirare <wirare@42angouleme.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 20:00:47 by wirare            #+#    #+#             */
/*   Updated: 2025/04/27 20:32:51 by ellanglo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#pragma once

#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>

#define elif else if

#define SETTER(type, _name, Name, Class) void Class::set##Name(const type &value) { this->_name = value; }
#define GETTER(type, _name, Name, Class) type Class::get##Name(void) const { return this->_name; }

std::string	getInput(std::string prompt);

class Contact
{
public:
	Contact();
	~Contact();

	void setFirstName(const std::string &_firstName);
	void setLastName(const std::string &_lastName);
	void setNickname(const std::string &_nickname);
	void setPhoneNumber(const std::string &_phoneNumber);
	void setDarkestSecret(const std::string &_darkestSecret);

	std::string getFirstName() const;
	std::string getLastName() const;
	std::string getNickname() const;
	std::string getPhoneNumber() const;
	std::string getDarkestSecret() const;

private:
	std::string _firstName;
	std::string _lastName;
	std::string _nickname;
	std::string _phoneNumber;
	std::string _darkestSecret;
};

class Phonebook
{
public:
	Phonebook();
	~Phonebook();

	void addContact();
	void searchContact();
	
private:
	Contact contacts[8];
	int index;
	int count;
	void displayContact(const Contact &contact);
	std::string setupString(std::string str);
};
