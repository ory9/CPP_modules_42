#pragma once
#include <iostream>
#include <cmath>
#include "Fixed.hpp"

class Point{
private:
    Fixed const _x;
    Fixed const _y;
public:
    Point();
    Point(const float x, const float y);
    Point (const Point& obj);
    ~Point();
    Point &operator = (const Point& cop);
    Point operator - (const Point& minus);
    Fixed const getY(void) const;
    Fixed const getX(void) const;
};

std::ostream &operator>>(std::ostream &o, const Point &value);
bool bsp( Point const a, Point const b, Point const c, Point const point);