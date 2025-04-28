/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wirare <wirare@42angouleme.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 03:07:28 by wirare            #+#    #+#             */
/*   Updated: 2025/04/28 03:08:48 by wirare           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ClapTrap.hpp"
#include <iostream>

int main() {
    ClapTrap clap1("Alpha");
    ClapTrap clap2("Beta");

    std::cout << "\n--- Start Testing ---\n" << std::endl;

    clap1.attack("Beta");
    clap2.takeDamage(5);
    clap2.attack("Alpha");
    clap1.takeDamage(3);
    clap1.beRepaired(4);
    clap2.beRepaired(2);

    std::cout << "\n--- Exhausting Energy Points ---\n" << std::endl;
    for (int i = 0; i < 8; ++i) {
        clap1.attack("Beta");
    }

    clap1.beRepaired(10);

    std::cout << "\n--- Reducing Hit Points to Zero ---\n" << std::endl;
    clap2.takeDamage(20);

    clap2.attack("Alpha");
    clap2.beRepaired(5);

    std::cout << "\n--- End of Testing ---\n" << std::endl;

    return 0;
}

