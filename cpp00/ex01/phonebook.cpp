/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wirare <wirare@42angouleme.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 20:58:39 by wirare            #+#    #+#             */
/*   Updated: 2025/04/26 17:59:41 by ellanglo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "phonebook.hpp"

Phonebook::Phonebook(void)
{
	this->index = 0;
	this->count = 0;
}

Phonebook::~Phonebook(void)
{
}

void Phonebook::addContact(void)
{
	Contact		contact;
	int			index = this->index;
	std::string	input;

	if (this->count < 8)
		this->count++;
	input = getInput("Enter first name: ");
	contact.setFirstName(input);
	input = getInput("Enter last name: ");
	contact.setLastName(input);
	input = getInput("Enter nickname: ");
	contact.setNickname(input);
	input = getInput("Enter phone number: ");
	contact.setPhoneNumber(input);
	input = getInput("Enter darkest secret: ");
	contact.setDarkestSecret(input);
	this->contacts[index] = contact;
	this->index = (index + 1) % 8;
}

void Phonebook::searchContact(void)
{
	std::string			input;

	if (this->count == 0)
	{
		std::cout << "No contacts to display." << std::endl;
		return ;
	}
	std::cout << "Index     |First Name|Last Name | Nickname " << std::endl;
	for (int i = 0; i < this->count; i++)
	{
		Contact	contact = this->contacts[i];
		std::cout << std::setw(10) << i+1 << '|';
		std::cout << std::setw(10) << setupString(contact.getFirstName()) << '|';
		std::cout << std::setw(10) << setupString(contact.getLastName()) << '|';
		std::cout << std::setw(9) << setupString(contact.getNickname()) << "\n";
	}
	std::stringstream str(getInput("Enter index of contact to display: "));
	int index;
	str >> index;
	if (index <= 0 || index >= this->count + 1)
	{
		std::cout << "Invalid index." << "\n";
		return ;
	}
	displayContact(this->contacts[index - 1]);
}

std::string Phonebook::setupString(const std::string str)
{
	std::string substr;

	if (str.length() <= 10)
		return (str);
	for (int i = 0; i < 9; i++)
		substr.push_back(str[i]);
	substr.push_back('.');
	return (substr);
}

void Phonebook::displayContact(const Contact &contact)
{
	std::cout << "First Name : " << contact.getFirstName() << "\n";
	std::cout << "Last Name : " << contact.getLastName() << "\n";
	std::cout << "Nickname : " << contact.getNickname() << "\n";
	std::cout << "Phone Number : " << contact.getPhoneNumber() <<  "\n";
	std::cout << "Darkest Secret : " << contact.getDarkestSecret() << "\n";
}
