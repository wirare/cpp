/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wirare <wirare@42angouleme.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 15:19:46 by wirare            #+#    #+#             */
/*   Updated: 2025/04/26 14:26:16 by ellanglo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#pragma once

#include <iostream>
#include <string>

class Harl
{
	public:
		Harl(const std::string level);
		~Harl();

		void complain();
	
	private:
		void debug();
		void info();
		void warning();
		void error();

		void (Harl::*HarlFn[4])();
		int	_HarlLevel;
};
