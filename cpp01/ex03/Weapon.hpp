/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wirare <wirare@42angouleme.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 13:54:14 by wirare            #+#    #+#             */
/*   Updated: 2025/04/23 14:01:04 by wirare           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#pragma once

#include <string>
#include <iostream>

class Weapon
{
	public:
		Weapon(const std::string type);
		~Weapon();
		std::string getType();
		void setType(const std::string type);
	
	private:
		std::string _type;
};
