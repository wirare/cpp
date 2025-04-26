/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wirare <wirare@42angouleme.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 14:48:58 by wirare            #+#    #+#             */
/*   Updated: 2025/04/23 14:55:14 by wirare           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon) 
{
	std::cout << "HumanA constructor called" << "\n";
}

HumanA::~HumanA() 
{
	std::cout << "HumanA destructor called" << "\n";
}

void HumanA::attack() 
{
	std::cout << _name << " attacks with their " << _weapon.getType() << "\n";
}
