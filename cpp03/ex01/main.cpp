/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wirare <wirare@42angouleme.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 03:07:28 by wirare            #+#    #+#             */
/*   Updated: 2025/04/28 19:57:58 by ellanglo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ScavTrap.hpp"
#include <iostream>

int main() {
    std::cout << "=== ScavTrap Constructors ===" << std::endl;
    ScavTrap scav1("Guardian");
    ScavTrap scav2("Protector");

    std::cout << "\n=== Actions ===" << std::endl;
    
    scav1.attack("Intruder");
    scav2.takeDamage(20);
    
    scav2.attack("Guardian");
    scav1.takeDamage(15);

    scav1.beRepaired(10);
    scav2.beRepaired(5);

    std::cout << "\n=== Special Ability ===" << std::endl;
    scav1.guardGate();
    scav2.guardGate();

    std::cout << "\n=== Energy Exhaustion Test ===" << std::endl;
    for (int i = 0; i < 51; ++i) {
        scav1.attack("RandomTarget");
    }

    scav1.guardGate();

    std::cout << "\n=== Destructor Called at End ===" << std::endl;

    return 0;
}

