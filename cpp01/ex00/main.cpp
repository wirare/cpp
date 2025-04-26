/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wirare <wirare@42angouleme.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 01:33:31 by wirare            #+#    #+#             */
/*   Updated: 2025/04/23 01:33:38 by wirare           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Zombie.hpp"

int main()
{
	Zombie *heap = newZombie("heap heap");
	heap->announce();
	delete heap;
	randomChump("stack stack");
}
