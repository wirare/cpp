/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wirare <wirare@42angouleme.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 20:26:45 by wirare            #+#    #+#             */
/*   Updated: 2025/04/22 18:52:23 by wirare           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "phonebook.hpp"


std::string	getInput(std::string prompt)
{
	std::string	input;

	std::cout << prompt;
	std::getline(std::cin, input);
	if (input.empty())
	{
		std::cout << "Input cannot be empty." << std::endl;
		return (getInput(prompt));
	}
	return (input);
}

int main(void)
{
	Phonebook *phonebook = new Phonebook();
	std::string	input;

	while (1)
	{
		input = getInput("Enter command (ADD, SEARCH, EXIT): ");
		if (input == "ADD")
			phonebook->addContact();
		elif (input == "SEARCH")
			phonebook->searchContact();
		elif (input == "EXIT")
		{
			delete phonebook;
			return (0);
		}
	}
}
