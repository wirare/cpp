/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wirare <wirare@42angouleme.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 20:00:47 by wirare            #+#    #+#             */
/*   Updated: 2025/04/22 18:50:25 by wirare           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#pragma once

#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>

#define elif else if

#define STRING_SETTER(name, Name, Class) void Class::set##Name(const std::string &value) { this->name = value; }
#define STRING_GETTER(name, Name, Class) std::string Class::get##Name(void) const { return this->name; }

std::string	getInput(std::string prompt);

class Contact
{
public:
	Contact();
	~Contact();

	void setFirstName(const std::string &firstName);
	void setLastName(const std::string &lastName);
	void setNickname(const std::string &nickname);
	void setPhoneNumber(const std::string &phoneNumber);
	void setDarkestSecret(const std::string &darkestSecret);

	std::string getFirstName() const;
	std::string getLastName() const;
	std::string getNickname() const;
	std::string getPhoneNumber() const;
	std::string getDarkestSecret() const;

private:
	std::string firstName;
	std::string lastName;
	std::string nickname;
	std::string phoneNumber;
	std::string darkestSecret;
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
