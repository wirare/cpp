/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ellanglo <ellanglo@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 19:32:18 by ellanglo          #+#    #+#             */
/*   Updated: 2025/04/27 20:45:53 by ellanglo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Fixed.hpp"

Fixed::Fixed() : _value(0) {
	std::cout << "Default constructor called" << "\n";
}

Fixed::Fixed(const Fixed &other) {
	std::cout << "Copy constructor called" << "\n";
	*this = other;
}

Fixed& Fixed::operator=(const Fixed &copy) {
	std::cout << "Copy assignment operator called" << "\n";
	if (this != &copy)
		_value = copy.getRawBits();
	return *this;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << "\n";
}

int Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << "\n";
	return _value;
}

void Fixed::setRawBits(int const raw)
{
	_value = raw;
}
