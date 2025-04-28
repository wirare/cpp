/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ellanglo <ellanglo@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 20:43:57 by ellanglo          #+#    #+#             */
/*   Updated: 2025/04/28 15:55:30 by ellanglo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Fixed.hpp"

int main() {
    std::cout << "=== Constructors ===" << std::endl;
    Fixed a(5);
    Fixed b(10);
    const Fixed c(15);

    std::cout << "\na = " << a << std::endl;
    std::cout << "b = " << b << std::endl;
    std::cout << "c = " << c << std::endl;

    std::cout << "\n=== Comparison Operators ===" << std::endl;
    std::cout << "a < b: " << (a < b) << std::endl;
    std::cout << "a > b: " << (a > b) << std::endl;
    std::cout << "a <= b: " << (a <= b) << std::endl;
    std::cout << "a >= b: " << (a >= b) << std::endl;
    std::cout << "a == b: " << (a == b) << std::endl;
    std::cout << "a != b: " << (a != b) << std::endl;

    std::cout << "\n=== Arithmetic Operators ===" << std::endl;
    Fixed sum = a + b;
    Fixed diff = a - b;
    Fixed prod = a * b;
    Fixed div = b / a;

    std::cout << "a + b = " << sum << std::endl;
    std::cout << "a - b = " << diff << std::endl;
    std::cout << "a * b = " << prod << std::endl;
    std::cout << "b / a = " << div << std::endl;

    std::cout << "\n=== Increment / Decrement Operators ===" << std::endl;
    Fixed d;

    std::cout << "d = " << d << std::endl;
    std::cout << "Pre-increment: " << ++d << std::endl;
    std::cout << "Post-increment: " << d++ << std::endl;
    std::cout << "After post-increment: " << d << std::endl;
    std::cout << "Pre-decrement: " << --d << std::endl;
    std::cout << "Post-decrement: " << d-- << std::endl;
    std::cout << "After post-decrement: " << d << std::endl;

    std::cout << "\n=== Min / Max Functions ===" << std::endl;
    std::cout << "min(a, b) = " << Fixed::min(a, b) << std::endl;
    std::cout << "min(c, b) = " << Fixed::min(c, b) << std::endl;
    std::cout << "max(a, b) = " << Fixed::max(a, b) << std::endl;
    std::cout << "max(c, b) = " << Fixed::max(c, b) << std::endl;

    return 0;
}

