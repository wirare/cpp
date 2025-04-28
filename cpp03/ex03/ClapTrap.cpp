/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wirare <wirare@42angouleme.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 02:47:30 by wirare            #+#    #+#             */
/*   Updated: 2025/04/28 19:53:47 by ellanglo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("default"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap default constructor called" << "\n";
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap " << this->_name << " created." << "\n";
}

ClapTrap::ClapTrap(const ClapTrap &src)
{
	*this = src;
	std::cout << "ClapTrap " << this->_name << " copied." << "\n";
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << this->_name << " destroyed." << "\n";
}

ClapTrap &ClapTrap::operator=(const ClapTrap &copy)
{
	if (this != &copy)
	{
		this->_name = copy._name;
		this->_hitPoints = copy._hitPoints;
		this->_energyPoints = copy._energyPoints;
		this->_attackDamage = copy._attackDamage;
	}
	return *this;
}

void ClapTrap::attack(const std::string &target)
{
	if (_hitPoints == 0)
	{
		std::cout << "ClapTrap " << _name << " has no Hit Points left" << "\n";
		return ;
	}
	if (_energyPoints == 0)
	{
		std::cout << "ClapTrap " << _name << " has no Energy Points left" << "\n";
		return ;
	}
	std::cout << "ClapTrap " << _name << " attacks " << target
		<< ", causing " << _attackDamage << " points of damage !" << "\n";
	_energyPoints--;
}

void ClapTrap::takeDamage(unsigned int amout)
{
	if (_hitPoints <= 0)
	{
		std::cout << "ClapTrap " << _name << " is already dead !" << "\n";
		return ;
	}
	if (amout >= _hitPoints)
		_hitPoints = 0;
	else
		_hitPoints -= amout;
	std::cout << "ClapTrap " << _name << " has taken " << amout << " points of damage ! "
		<< _hitPoints << " lefts" << "\n";
}

void ClapTrap::beRepaired(unsigned int amout)
{
	if (_hitPoints == 0)
	{
		std::cout << "ClapTrap " << _name << " has no Hit Points left" << "\n";
		return ;
	}
	if (_energyPoints == 0)
	{
		std::cout << "ClapTrap " << _name << " has no Energy Points left" << "\n";
		return ;
	}
	std::cout << "ClapTrap " << _name << " has repaired itself " << amout << " Hit Points !" << "\n";
	_hitPoints += amout;
	_energyPoints--;
}
