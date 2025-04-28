/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ellanglo <ellanglo@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 19:52:18 by ellanglo          #+#    #+#             */
/*   Updated: 2025/04/28 20:14:40 by ellanglo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	_name = "default";
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << "ScavTrap default constructor called" << "\n";
}

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name)
{
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << "ScavTrap constructor called" << "\n";
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called" << "\n";
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
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

void ScavTrap::guardGate()
{
	if (_hitPoints == 0)
	{
		std::cout << "ScavTrap " << _name << " has no Hit Points left" << "\n";
		return ;
	}
	std::cout << "ScavTrap " << _name << " is now in Gate keeper mode." << "\n";
}

void ScavTrap::attack(const std::string &target)
{
	if (_hitPoints == 0)
	{
		std::cout << "ScavTrap " << _name << " has no Hit Points left" << "\n";
		return ;
	}
	if (_energyPoints == 0)
	{
		std::cout << "ScavTrap " << _name << " has no Energy Points left" << "\n";
		return ;
	}
	std::cout << "ScavTrap " << _name << " attacks " << target
		<< ", causing " << _attackDamage << " points of damage !" << "\n";
	_energyPoints--;
}
