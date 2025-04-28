/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ellanglo <ellanglo@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 19:32:18 by ellanglo          #+#    #+#             */
/*   Updated: 2025/04/28 17:20:00 by ellanglo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed() : _value(0) {
	if (DEBUG)
		std::cout << "Default constructor called" << "\n";
}

Fixed::Fixed(const int value) : _value(value << _fractionalSize) {
	if (DEBUG)
		std::cout << "Int constructor called" << "\n";
}

Fixed::Fixed(const float value) : _value(roundf(value * (1 << _fractionalSize))) {
	if (DEBUG)
		std::cout << "Float constructor called" << "\n";
}

Fixed::Fixed(const Fixed &other) {
	if (DEBUG)
		std::cout << "Copy constructor called" << "\n";
	*this = other;
}

Fixed& Fixed::operator=(const Fixed &copy) {
	if (DEBUG)
		std::cout << "Copy assignment operator called" << "\n";
	if (this != &copy)
		_value = copy.getRawBits();
	return *this;
}

Fixed::~Fixed() {
	if (DEBUG)
		std::cout << "Destructor called" << "\n";
}

int Fixed::getRawBits() const
{
	if (DEBUG)
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

bool Fixed::operator>(const Fixed &fixed) const {
	return _value > fixed._value;
}

bool Fixed::operator<(const Fixed &fixed) const {
	return _value < fixed._value;
}

bool Fixed::operator>=(const Fixed &fixed) const {
	return _value >= fixed._value;
}

bool Fixed::operator<=(const Fixed &fixed) const {
	return _value <= fixed._value;
}

bool Fixed::operator==(const Fixed &fixed) const {
	return _value == fixed._value;
}

bool Fixed::operator!=(const Fixed &fixed) const {
	return _value != fixed._value;
}

Fixed Fixed::operator+(const Fixed &fixed) const {
	return Fixed(this->toFloat() + fixed.toFloat());
}

Fixed Fixed::operator-(const Fixed &fixed) const {
	return Fixed(this->toFloat() - fixed.toFloat());
}

Fixed Fixed::operator*(const Fixed &fixed) const {
	return Fixed(this->toFloat() * fixed.toFloat());
}

Fixed Fixed::operator/(const Fixed &fixed) const {
	return Fixed(this->toFloat() / fixed.toFloat());
}

Fixed &Fixed::operator++() {
	_value++;
	return *this;
}

Fixed Fixed::operator++(int) {
	Fixed cpy = *this;
	_value++;
	return cpy;
}

Fixed &Fixed::operator--() {
	_value--;
	return *this;
}

Fixed Fixed::operator--(int) {
	Fixed cpy = *this;
	_value--;
	return cpy;
}

Fixed &Fixed::min(Fixed &a, Fixed &b) {
	if (a.toFloat() > b.toFloat())
		return (b);
	return (a);
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b) {
	if (a.toFloat() > b.toFloat())
		return (b);
	return (a);
}

Fixed &Fixed::max(Fixed &a, Fixed &b) {
	if (a.toFloat() < b.toFloat())
		return (b);
	return (a);
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b) {
	if (a.toFloat() < b.toFloat())
		return (b);
	return (a);
}
