/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wirare <wirare@42angouleme.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 13:59:06 by wirare            #+#    #+#             */
/*   Updated: 2025/04/23 14:01:38 by wirare           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type) 
{
	std::cout << "Weapon constructor called" << "\n";
}

Weapon::~Weapon() 
{
	std::cout << "Weapon destructor called" << "\n";
}

std::string Weapon::getType() 
{
	return this->_type;
}

void Weapon::setType(const std::string type) 
{
	this->_type = type;
}
