/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wirare <wirare@42angouleme.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 01:07:09 by wirare            #+#    #+#             */
/*   Updated: 2025/04/23 01:25:29 by wirare           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(const std::string& name) : _name(name) {}

void Zombie::announce(void) const 
{
	std::cout << _name << " BraiiiiiiinnnzzzZ..." << std::endl;
}
