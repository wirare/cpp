/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wirare <wirare@42angouleme.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 19:19:27 by wirare            #+#    #+#             */
/*   Updated: 2025/04/26 18:05:37 by ellanglo         ###   ########.fr       */
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
		for (size_t j = 0; av[i][j]; j++)
			av[i][j] = std::toupper(av[i][j]);
		std::cout << av[i];
	}
	std::cout << "\n";
	return (0);
}
