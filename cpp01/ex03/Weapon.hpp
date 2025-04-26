/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wirare <wirare@42angouleme.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 13:54:14 by wirare            #+#    #+#             */
/*   Updated: 2025/04/26 14:34:15 by ellanglo         ###   ########.fr       */
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
		const std::string& getType();
		void setType(const std::string type);
	
	private:
		std::string _type;
};
