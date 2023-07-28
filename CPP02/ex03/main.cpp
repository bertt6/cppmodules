#include "Point.hpp"

int main()
{
    const Point a(2, 9);
    const Point b(-6, -1);
    const Point c(6, -5);
    const Point target(0, 0);

    if (bsp(a, b ,c, target)) 
        cout << "inside" << endl;
    else 
        cout << "outside" << endl;
}