/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wirare <wirare@42angouleme.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 00:52:21 by wirare            #+#    #+#             */
/*   Updated: 2025/04/23 01:44:10 by wirare           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#pragma once

#include <string>

class Zombie {
  private:
    std::string _name;

  public:
	Zombie();
    Zombie(const std::string& name);

    void announce(void) const;
};

Zombie* zombieHorde(int N, std::string name);
