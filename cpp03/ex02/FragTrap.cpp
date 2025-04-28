/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ellanglo <ellanglo@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 19:52:18 by ellanglo          #+#    #+#             */
/*   Updated: 2025/04/28 20:11:45 by ellanglo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	_name = "default";
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << "FragTrap default constructor called" << "\n";
}

FragTrap::FragTrap(const std::string &name) : ClapTrap(name)
{
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << "FragTrap constructor called" << "\n";
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called" << "\n";
}

FragTrap &FragTrap::operator=(const FragTrap &other)
{
	if (this != &other)
	{
		_name = other._name;
		_hitPoints = other._hitPoints;
		_energyPoints = other._energyPoints;
		_attackDamage = other._attackDamage;
	}
	return *this;
}

void FragTrap::highFivesGuys()
{
	if (_hitPoints <= 0)
	{
		std::cout << "FragTrap " << _name << " is out of hit points!" << "\n";
		return;
	}
	std::cout << "FragTrap " << _name << " is requesting a high five!" << "\n";
}
