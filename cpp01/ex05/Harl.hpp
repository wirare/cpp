/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wirare <wirare@42angouleme.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 15:19:46 by wirare            #+#    #+#             */
/*   Updated: 2025/04/24 18:25:31 by wirare           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#pragma once

#include <iostream>
#include <string>

class Harl
{
	public:
		Harl();
		~Harl();

		void complain(std::string level);
	
	private:
		void debug();
		void info();
		void warning();
		void error();

		void (Harl::*HarlFn[4])();
};
