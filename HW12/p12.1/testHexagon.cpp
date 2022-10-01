#include <iostream>
#include "Shapes.h"
using namespace std;

int main (int argc, char **argv){
    Hexagon blue("first", 2.0, 2.0, 6, "blue",9);
    cout << "the perimeter of the blue hexagon is: " << blue.perimeter() << endl;
    cout << "the area of the blue hexagon is: " << blue.area() << endl;
    Hexagon green("second", 3.0, 3.0, 6, "green",15);
    cout << "the perimeter of the green hexagon is: " << green.perimeter() << endl;
    cout << "the area of the green hexagon is: " << green.area() << endl;
    Hexagon copy = green; //calling the copy of green
    cout << "the perimeter of the copied hexagon is: " << copy.perimeter() << endl;
    cout << "the area of the copied hexagon is: " << copy.area() << endl;
    return 0;
}