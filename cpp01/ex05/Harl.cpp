/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wirare <wirare@42angouleme.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 18:20:24 by wirare            #+#    #+#             */
/*   Updated: 2025/04/26 14:38:47 by ellanglo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Harl.hpp"

Harl::Harl() 
{
	this->HarlFn[0] = &Harl::debug;
	this->HarlFn[1] = &Harl::info;
	this->HarlFn[2] = &Harl::warning;
	this->HarlFn[3] = &Harl::error;
}

Harl::~Harl() 
{

}

void Harl::debug( void ) 
{
	std::cout << "[ DEBUG ]" << "\n";
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << "\n";
}

void Harl::info( void ) 
{
	std::cout << "[ INFO ]" << "\n";
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for it!" << "\n";
}

void Harl::warning( void ) 
{
	std::cout << "[ WARNING ]" << "\n";
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << "\n";
}

void Harl::error( void ) 
{
	std::cout << "[ ERROR ]" << "\n";
	std::cout << "This is unacceptable! I want to speak to the manager now." << "\n";
}

void Harl::complain( std::string level ) 
{
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int i = 0;

	while (i < 4 && levels[i] != level)
		i++;
	if (i < 4)
		(this->*HarlFn[i])();
	else
		std::cout << "[ Probably complaining about insignificant problems ]" << "\n";
}
