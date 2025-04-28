/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wirare <wirare@42angouleme.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 03:07:28 by wirare            #+#    #+#             */
/*   Updated: 2025/04/28 20:13:10 by ellanglo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "FragTrap.hpp"
#include <iostream>

int main() {
    std::cout << "=== FragTrap Constructors ===" << std::endl;
    FragTrap frag1("Blaster");
    FragTrap frag2("Boomer");

    std::cout << "\n=== Actions ===" << std::endl;
    
    frag1.attack("BadGuy");
    frag2.takeDamage(30);

    frag2.attack("Blaster");
    frag1.takeDamage(20);

    frag1.beRepaired(15);
    frag2.beRepaired(10);

    std::cout << "\n=== Special Ability ===" << std::endl;
    frag1.highFivesGuys();
    frag2.highFivesGuys();

    std::cout << "\n=== Energy Exhaustion Test ===" << std::endl;
    for (int i = 0; i < 101; ++i) {
        frag1.attack("RandomEnemy");
    }

    frag1.highFivesGuys();

    std::cout << "\n=== Destructor Called at End ===" << std::endl;

    return 0;
}

