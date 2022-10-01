/* 
	Classic shape examples: an inheritance tree in a geometric context
*/
#ifndef __SHAPES_H
#define __SHAPES_H
#include <string>

class Shape
{                     // base class
private:              // private access modifier: could also be protected
    std::string name; // every shape will have a name
public:
    Shape(const std::string &); // builds a shape with a name
    Shape();                    // empty shape
    Shape(const Shape &);       // copy constructor
    void printName() const;     // prints the name

    void setName(std::string &newname); //setter
    std::string getName();              //getter
};

class CenteredShape : public Shape
{ // inherits from Shape
private:
    double x, y; // the center of the shape
public:
    // usual three constructors
    CenteredShape(const std::string &, double, double);
    CenteredShape();
    CenteredShape(const CenteredShape &);
    // moves the shape, i.e. it modifies it center
    void move(double, double);

    void setX(double newx); // setter
    void setY(double newy); // setter
    double getX();          // getter
    double getY();          // getter
};

class RegularPolygon : public CenteredShape
{ // a regular polygon is a centered_shape with a number of edges
private:
    int EdgesNumber;

public:
    RegularPolygon(const std::string &, double, double, int);
    RegularPolygon();
    RegularPolygon(const RegularPolygon &);

    void setEdgesNumber(int nedgesnumber); // setter
    int getEdgesNumber();                  // getter
};

class Circle : public CenteredShape
{ // a Circle is a shape with a center and a radius
private:
    double Radius;

public:
    Circle(const std::string &, double, double, double);
    Circle();
    Circle(const Circle &);

    void setRadius(double newradius); // setter
    double getRadius();               // getter
    double perimeter();
    double area();
};
class Rectangle : public RegularPolygon
{
private:
    double width;
    double height;

public:
    //name, x-center, y-center, width,neight
    Rectangle(const std::string &n, double nx, double ny, int nl, double nwidth, double nheight);
    Rectangle();
    Rectangle(const Rectangle &);

    void setWidth(double nwidth);   // setter
    void setHeight(double nheight); // setter
    double getWidth();              // getter
    double getHeight();
    double perimeter();
    double area(); // getter
};
class Square : public Rectangle
{
private:
    double side;

public:
    Square(const std::string &n, double nx, double ny, int nl, double nwidth, double nheight, double nside);
    Square();
    Square(const Square &);

    void setSide(double nside); // setter
    double getSide();
    double perimeter();
    double area(); // getter
};
#endif
