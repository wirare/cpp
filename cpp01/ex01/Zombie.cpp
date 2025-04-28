/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wirare <wirare@42angouleme.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 01:07:09 by wirare            #+#    #+#             */
/*   Updated: 2025/04/26 17:23:10 by ellanglo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie() : _name() {}
Zombie::Zombie(const std::string& name) : _name(name) {}

void Zombie::announce(void) const 
{
	std::cout << _name << " BraiiiiiiinnnzzzZ..." << std::endl;
}
