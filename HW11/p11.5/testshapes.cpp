/*
CH-230-A
Problem11-5.cpp
Nelson Tseng 
ntseng@jacobs-university.de
*/
#include <iostream>
#include "Shapes.h"
using namespace std;
int main(int argc, char **argv)
{

    cout << "Creating a circle..." << endl;
    Circle c("first circle", 3, 4, 7);
    cout << "The perimeter of the circle is: " << c.perimeter() << endl;
    cout << "The area of the circel is: " << c.area() << endl;

    cout << "Creating a rectangle..." << endl;
    Rectangle r("Rectangle", 2.0, 2.0, 4, 3.5, 6.0);
    cout << "The perimeter of the rectangle is: " << r.perimeter() << endl;
    cout << "The area of the rectangle is: " << r.area() << endl;

    cout << "Creating a sqaure..." << endl;
    Square s("Square", 4.0, 4.0, 4, 3.0, 3.0, 3.0);
    cout << "The perimeter of square is: " << s.perimeter() << endl;
    cout << "The area of sqaure is: " << s.area() << endl;
}