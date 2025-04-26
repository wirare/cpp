/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wirare <wirare@42angouleme.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 19:19:27 by wirare            #+#    #+#             */
/*   Updated: 2025/04/21 19:46:20 by wirare           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>

int	main(int ac, char **av)
{
	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << "\n";
		return (0);
	}
	for (int i = 1; i < ac; i++)
	{
		std::string current_str = av[i];
		for (size_t j = 0; j < current_str.length(); j++)
			std::cout << (char)toupper(current_str[j]);
	}
	std::cout << "\n";
	return (0);
}
