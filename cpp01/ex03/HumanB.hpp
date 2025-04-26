/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wirare <wirare@42angouleme.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 14:44:01 by wirare            #+#    #+#             */
/*   Updated: 2025/04/23 14:58:44 by wirare           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#pragma once
#include "Weapon.hpp"

class HumanB
{
	public:
		HumanB(const std::string name);
		~HumanB();

		void attack();
		void setWeapon(Weapon& weapon);

	private:
		std::string _name;
		Weapon* _weapon;
};
