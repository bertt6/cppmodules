#include "Point.hpp"


bool bsp( Point const a, Point const b, Point const c, Point const point) {
    double denominator = ((b.getY() - c.getY()) * (a.getX() - c.getX()) + (c.getX() - b.getX()) * (a.getY() - c.getY()));
    double ab = ((b.getY() - c.getY()) * (point.getX() - c.getX()) + (c.getX() - b.getX()) * (point.getY() - c.getY())) / denominator;
    double bb = ((c.getY() - a.getY()) * (point.getX() - c.getX()) + (a.getX() - c.getX()) * (point.getY() - c.getY())) / denominator;
    double cb = 1 - ab - bb;

    if (ab > 0 && bb > 0 && cb > 0 )
        return true;
    else
        return false;
    return false;
}
