/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ellanglo <ellanglo@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 19:32:18 by ellanglo          #+#    #+#             */
/*   Updated: 2025/04/27 21:49:42 by ellanglo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed() : _value(0) {
	std::cout << "Default constructor called" << "\n";
}

Fixed::Fixed(const int value) : _value(value << _fractionalSize) {
	std::cout << "Int constructor called" << "\n";
}

Fixed::Fixed(const float value) : _value(roundf(value * (1 << _fractionalSize))) {
	std::cout << "Float constructor called" << "\n";
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

float Fixed::toFloat() const {
	return ((float)_value / (1 << _fractionalSize));
}

int Fixed::toInt() const {
	return (_value >> _fractionalSize);
}

std::ostream &operator<<(std::ostream &os, const Fixed &fixed) {
	os << fixed.toFloat();
	return os;
}
