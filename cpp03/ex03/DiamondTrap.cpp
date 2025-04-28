/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ellanglo <ellanglo@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 22:27:12 by ellanglo          #+#    #+#             */
/*   Updated: 2025/04/28 22:41:12 by ellanglo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( void ): ClapTrap("clap_name"), ScavTrap(), FragTrap(), _name("default"){
	_hitPoints = FragTrap::_hitPoints;
	_energyPoints = ScavTrap::_energyPoints;
	_attackDamage = FragTrap::_attackDamage;
	std::cout << "DiamondTrap default constructor called" << "\n";
}

DiamondTrap::DiamondTrap(const std::string &name): ClapTrap(name + "_clap_name"), ScavTrap(), FragTrap(), _name(name)
{
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 30;
    std::cout << "DiamondTrap constructor called" << "\n";
}

DiamondTrap::~DiamondTrap( void ){
	std::cout << "DiamondTrap destructor called" << "\n";
}

DiamondTrap::DiamondTrap( const DiamondTrap &other ): ClapTrap(other), ScavTrap(other), FragTrap(other){
	*this = other;
	std::cout << "DiamondTrap copy constructor called" << "\n";
}

DiamondTrap &DiamondTrap::operator=( const DiamondTrap &other ){
	if (this != &other){
		_name = other._name;
		ClapTrap::operator=(other);
	}
	std::cout << "DiamondTrap assignment operator called" << "\n";
	return *this;
}

void DiamondTrap::attack( const std::string &target ){
	if (_hitPoints <= 0){
		std::cout << "DiamondTrap " << _name << " is out of hit points!" << "\n";
		return;
	}
	if (_energyPoints <= 0){
		std::cout << "DiamondTrap " << _name << " is out of energy points!" << "\n";
		return;
	}
	_energyPoints--;
	std::cout << "DiamondTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << "\n";
}

void DiamondTrap::whoAmI( void ){
	std::cout << "DiamondTrap name: " << _name << ", ClapTrap name: " << ClapTrap::_name << "\n";
}
