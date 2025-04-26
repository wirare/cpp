/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wirare <wirare@42angouleme.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 18:23:19 by wirare            #+#    #+#             */
/*   Updated: 2025/04/24 18:25:10 by wirare           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Harl.hpp"

int main()
{
    Harl harl;

    std::cout << ">>> DEBUG test:\n";
    harl.complain("DEBUG");
    std::cout << "\n";

    std::cout << ">>> INFO test:\n";
    harl.complain("INFO");
    std::cout << "\n";

    std::cout << ">>> WARNING test:\n";
    harl.complain("WARNING");
    std::cout << "\n";

    std::cout << ">>> ERROR test:\n";
    harl.complain("ERROR");
    std::cout << "\n";

    std::cout << ">>> INVALID level test:\n";
    harl.complain("NOTALEVEL");
    std::cout << "\n";

    return 0;
}

