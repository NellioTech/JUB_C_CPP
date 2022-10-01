// please refer to shapes.h for methods documentation

#include <iostream>
#include <cmath>
#include "Shapes.h"
using namespace std;

// implementation for shape

Shape::Shape()
{
    name = "default_shape";
}
Shape::Shape(const string &n) : name(n)
{
}
Shape::Shape(const Shape &s)
{
    name = s.name;
}
void Shape::printName() const
{
    cout << name << endl;
}
void Shape::setName(string &newname)
{
    name = newname;
}
string Shape::getName()
{
    return name;
}

// implementation for CenteredShape
CenteredShape::CenteredShape()
{
    // default constructors
    x = 2.0;
    y = 2.0;
}
CenteredShape::CenteredShape(const string &n, double nx, double ny) : Shape(n)
{
    x = nx;
    y = ny;
}
CenteredShape::CenteredShape(const CenteredShape &cs)
{
    x = cs.x;
    y = cs.y;
}
void CenteredShape::setX(double nx)
{
    x = nx;
}
void CenteredShape::setY(double ny)
{
    y = ny;
}
double CenteredShape::getX()
{
    return x;
}
double CenteredShape::getY()
{
    return y;
}

// implementation for RegularPolygon
RegularPolygon::RegularPolygon()
{
    // default constructors
    EdgesNumber = 4;
}
RegularPolygon::RegularPolygon(const string &n, double nx, double ny, int nl) : CenteredShape(n, nx, ny)
{
    EdgesNumber = nl;
}
RegularPolygon::RegularPolygon(const RegularPolygon &re)
{
    EdgesNumber = re.EdgesNumber;
}
void RegularPolygon::setEdgesNumber(int nedgesnumeber)
{
    EdgesNumber = nedgesnumeber;
}
int RegularPolygon::getEdgesNumber()
{
    return EdgesNumber;
}

// implementation for Rectangle
Rectangle::Rectangle()
{
    width = 4.5;
    height = 4.5;
}
Rectangle::Rectangle(const string &n, double nx, double ny,
                     int nl, double nwidth, double nheight) : RegularPolygon(n, nx, ny, nl)
{
    width = nwidth;
    height = nheight;
}
Rectangle::Rectangle(const Rectangle &rec)
{
    width = rec.width;
    height = rec.height;
}
void Rectangle::setHeight(double nheight)
{
    height = nheight;
}
void Rectangle ::setWidth(double nwidth)
{
    width = nwidth;
}
double Rectangle::getHeight()
{
    return height;
}
double Rectangle::getWidth()
{
    return width;
}
double Rectangle::perimeter()
{
    return (height + width) * 2;
}
double Rectangle::area()
{
    return width * height;
}
// implementation for Sqaure
Square::Square()
{
    side = 6.0;
}
Square::Square(const string &n, double nx, double ny, int nl, double nheight,
               double nwidth, double nside) : Rectangle(n, nx, ny, nl, nheight, nwidth)
{
    side = nside;
}
Square::Square(const Square &sq)
{
    side = sq.side;
}
void Square::setSide(double nside)
{
    side = nside;
}
double Square::getSide()
{
    return side;
}
double Square::perimeter()
{
    return side * 4;
}
double Square::area()
{
    return side * side;
}
// implementation for Circle
Circle::Circle()
{
    // default constructors
    Radius = 5.0;
}
Circle::Circle(const string &n, double nx, double ny, double r) : CenteredShape(n, nx, ny)
{
    Radius = r;
}
Circle::Circle(const Circle &c)
{
    Radius = c.Radius;
}
void Circle ::setRadius(double nradius)
{
    Radius = nradius;
}
double Circle::getRadius()
{
    return Radius;
}
double Circle::perimeter()
{
    return 2 * M_PI * Radius;
}
double Circle::area()
{
    return pow(Radius, 2) * M_PI;
}