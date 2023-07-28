#include "Point.hpp"


Point::Point(): _x(0), _y(0){}

Point::~Point() {}

Point::Point(const Fixed x, const Fixed y) : _x(x), _y(y) {}

Point::Point(const Point &copy) : _x(copy._x), _y(copy._y) {}

int Point::getX(void) const {
    return this->_x.toInt();
}


int Point::getY(void) const {
    return this->_y.toInt();
}

Point &Point::operator = (const Point &copy) 
{
	(void)copy;
	return *this;
}

