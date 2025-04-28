/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ellanglo <ellanglo@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 16:01:55 by ellanglo          #+#    #+#             */
/*   Updated: 2025/04/28 17:15:38 by ellanglo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#pragma once

#include <iostream>
#include <cmath>
#include <string>
#include "Fixed.hpp"

#define GETTER(type, _name, Name, Class) type Class::get##Name(void) const { return this->_name; }

class Point
{
	public:
		Point();
		Point(const Point &copy);
		Point(const float x, const float y);
		~Point();
		Point &operator=(const Point &copy);

		const Fixed getX(void) const;
		const Fixed getY(void) const;

	private:
		const Fixed _x;
		const Fixed _y;
};

bool bsp(Point const a, Point const b, Point const c, Point const point);
