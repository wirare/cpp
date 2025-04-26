/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wirare <wirare@42angouleme.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 13:41:42 by wirare            #+#    #+#             */
/*   Updated: 2025/04/23 13:49:56 by wirare           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <string>

int main(void)
{
	std::string brain = "HI THIS IS BRAIN";
	std::string* stringPTR = &brain;
	std::string& stringREF = brain;

	std::cout << "Memory adress of brain: " << &brain << "\n";
	std::cout << "Memory adress held by stringPTR: " << stringPTR << "\n";
	std::cout << "Memory adress held by stringREF: " << &stringREF << "\n";

	std::cout << "Value of brain: " << brain << "\n";
	std::cout << "Value pointed to by stringPTR: " << *stringPTR << "\n";
	std::cout << "Value pointed to by stringREF: " << stringREF << "\n";
}
