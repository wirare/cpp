/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wirare <wirare@42angouleme.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 00:52:21 by wirare            #+#    #+#             */
/*   Updated: 2025/04/23 01:25:00 by wirare           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#pragma once

#include <string>

class Zombie {
  private:
    std::string _name;

  public:
    Zombie(const std::string& name);

    void announce(void) const;
};

Zombie *newZombie(std::string name);
void    randomChump(std::string name);
