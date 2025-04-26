/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wirare <wirare@42angouleme.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 14:04:52 by wirare            #+#    #+#             */
/*   Updated: 2025/04/23 14:50:09 by wirare           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#pragma once
#include "Weapon.hpp"

class HumanA
{
	public:
		HumanA(const std::string name, Weapon &weapon);
		~HumanA();

		void attack();
	
	private:
		std::string _name;
		Weapon& _weapon;
};
