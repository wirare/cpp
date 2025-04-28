/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ellanglo <ellanglo@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 20:43:57 by ellanglo          #+#    #+#             */
/*   Updated: 2025/04/28 17:33:29 by ellanglo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include "Point.hpp"

# define RESET   "\033[0m"
# define RED     "\033[31m"
# define GREEN   "\033[32m"
# define YELLOW  "\033[33m"
# define BLUE    "\033[34m"
# define MAGENTA "\033[35m"
# define CYAN    "\033[36m"
# define GRAY    "\033[90m"

int main( void )
{
	Point a(0.0f, 0.0f);
	Point b(0.0f, 0.0f);
	Point c(0.0f, 0.0f);

	Fixed x_min = Fixed::min(a.getX(), Fixed::min(b.getX(), c.getX())) - 5;
	Fixed x_max = Fixed::max(a.getX(), Fixed::max(b.getX(), c.getX())) + 5;
	Fixed y_min = Fixed::min(a.getY(), Fixed::min(b.getY(), c.getY())) - 1;
	Fixed y_max = Fixed::max(a.getY(), Fixed::max(b.getY(), c.getY())) + 2;

	for (Fixed y = y_min; y < y_max; y = y + 1.0f)
	{
		std::cout << "    ";
		for (Fixed x = x_min; x < x_max; x = x + 1.0f)
		{
			std::cout << (bsp(a, b, c, Point(x.toFloat(), y.toFloat())) ?  RESET : RED) << "█";
		}
		std::cout << RESET << std::endl;
	}

	return 0;
}
