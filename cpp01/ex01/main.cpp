/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wirare <wirare@42angouleme.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 01:50:55 by wirare            #+#    #+#             */
/*   Updated: 2025/04/26 17:23:30 by ellanglo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Zombie.hpp"

int main() 
{
	int N = 10;
	Zombie *horde = zombieHorde(N, "one zombie");

	for (int i = 0; i < N; i++)
		horde[i].announce();

	delete[] horde;
}
