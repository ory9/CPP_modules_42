#include "Point.hpp"

static float calVertices(Point const a, Point const b, Point const point) {
    float vConstOne = ((b.getX().toFloat() - a.getX().toFloat()) * (point.getY().toFloat() - a.getY().toFloat()));
    float vConstTwo = ((b.getY().toFloat() - a.getY().toFloat()) * (point.getX().toFloat() - a.getX().toFloat()));

    return (vConstOne - vConstTwo);
}

bool bsp( Point const a, Point const b, Point const c, Point const point){
    float vAB = calVertices(a, b, point);
    float vBC = calVertices(b, c, point);
    float vCA = calVertices(c, a, point);

    if (vAB > 0 && vBC > 0 && vCA > 0)
        return true;
    else if (vAB < 0 && vBC < 0 && vCA < 0)
        return true;
    return false;
}