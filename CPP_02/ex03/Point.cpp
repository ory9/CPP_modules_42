#include "Point.hpp"

Point::Point(): _x(0), _y(0) {}

Point::Point(const float x, const float y): _x(x), _y(y){
}

Point::Point (const Point& obj){
    *this = obj;
}

Fixed const Point::getY(void) const{
    return this->_y;
}

Fixed const Point::getX() const{
    return this->_x;
}

Point   &Point::operator=(const Point& cop){
    if (this != &cop)
    {
        new (this)Point(cop.getX().toFloat(), cop.getY().toFloat());
    }
    return *this;
}

Point::~Point(){}

std::ostream &operator>>(std::ostream &o, const Point &value){
    o << "_x:(" << value.getX() << "); _y:(" << value.getY() << ");";
    return o;
}

