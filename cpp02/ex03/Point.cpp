/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ellanglo <ellanglo@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 16:39:09 by ellanglo          #+#    #+#             */
/*   Updated: 2025/04/28 17:16:56 by ellanglo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Point.hpp"

Point::Point() : _x(0), _y(0) {}

Point::Point(const Point &copy) : _x(copy._x), _y(copy._y) {}

Point::Point(const float x, const float y) : _x(x), _y(y) {}

Point::~Point() {}

Point& Point::operator=( Point const & ){
	return (*this);
}

GETTER(const Fixed, _x, X, Point)
GETTER(const Fixed, _y, Y, Point)

float sign(Point p1, Point p2, Point p3) {
    return (p1.getX().toFloat() - p3.getX().toFloat()) * (p2.getY().toFloat() - p3.getY().toFloat()) -
           (p2.getX().toFloat() - p3.getX().toFloat()) * (p1.getY().toFloat() - p3.getY().toFloat());
}

bool bsp(Point const a, Point const b, Point const c, Point const p) {
    float d1 = sign(p, a, b);
    float d2 = sign(p, b, c);
    float d3 = sign(p, c, a);

    bool has_neg = (d1 < 0) || (d2 < 0) || (d3 < 0);
    bool has_pos = (d1 > 0) || (d2 > 0) || (d3 > 0);

    return !(has_neg && has_pos);
}
