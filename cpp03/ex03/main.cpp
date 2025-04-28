/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wirare <wirare@42angouleme.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 03:07:28 by wirare            #+#    #+#             */
/*   Updated: 2025/04/28 22:33:26 by ellanglo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "DiamondTrap.hpp"
#include <iostream>

int main() {
    std::cout << "=== DiamondTrap Constructors ===" << std::endl;
    DiamondTrap diamond1("ShinyOne");
    DiamondTrap diamond2("Sparkle");

    std::cout << "\n=== Actions ===" << std::endl;

    diamond1.attack("EvilBot");
    diamond2.takeDamage(30);

    diamond2.attack("ShinyOne");
    diamond1.takeDamage(20);

    diamond1.beRepaired(15);
    diamond2.beRepaired(10);

    std::cout << "\n=== Special Abilities ===" << std::endl;
    diamond1.highFivesGuys();   // From FragTrap
    diamond2.guardGate();       // From ScavTrap

    std::cout << "\n=== Who Am I? ===" << std::endl;
    diamond1.whoAmI();
    diamond2.whoAmI();

    std::cout << "\n=== Energy Exhaustion Test ===" << std::endl;
    for (int i = 0; i < 51; ++i) {
        diamond1.attack("RandomEnemy");
    }

    diamond1.whoAmI(); // Should still work even if energy is 0

    std::cout << "\n=== Destructor Called at End ===" << std::endl;

    return 0;
}

