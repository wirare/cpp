/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ellanglo <ellanglo@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 17:18:10 by ellanglo          #+#    #+#             */
/*   Updated: 2025/04/27 21:25:07 by ellanglo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#pragma once

#include <iostream>
#include <string>

class Fixed
{
	public:
		Fixed();
		Fixed(const int value);
		Fixed(const float value);
		Fixed(const Fixed &copy);
		Fixed &operator=(const Fixed &copy);
		~Fixed();

		int getRawBits(void) const;
		void setRawBits(int const raw);
	
		float toFloat(void) const;
		int toInt(void) const;

	private:
		const static int _fractionalSize = 8;
		int _value;
};
std::ostream &operator<<(std::ostream &os, const Fixed &fixed);
