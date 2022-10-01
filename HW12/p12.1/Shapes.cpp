// please refer to shapes.h for methods documentation

#include <iostream>
#include "Shapes.h"
#include <cmath>

using namespace std; 

Shape::Shape(const string& n) : name(n) {
}

void Shape::printName() const {
	cout << name << endl;
}

CenteredShape::CenteredShape(const string& n, double nx, double ny): Shape(n) {
	x = nx;
	y = ny;
}

RegularPolygon::RegularPolygon(const string& n, double nx, double ny, int nl) :
	CenteredShape(n,nx,ny) 
{
	EdgesNumber = nl;
}
Hexagon::Hexagon():RegularPolygon("default",2.0,2.0,6){
    color = "default" ;
    side = 6;
}
Hexagon::Hexagon(const string& n, double nx, double ny, int nl, std::string ncolor, int nside):
    RegularPolygon(n,nx,ny,nl)
{
    color = ncolor;
    side = nside;
}
Hexagon::Hexagon(const Hexagon &nhexagon):RegularPolygon("default",2.0,2.0,6){
    color = nhexagon.color;
    side = nhexagon.side;
}
Hexagon::~Hexagon(){
    cout << "calling destructor...\n";
}
double Hexagon::perimeter(){
    return 6*side;
}
double Hexagon::area(){
    return pow(side,2)*((3*sqrt(3))/2);
}
void Hexagon::setColor(string newcolor){
    color = newcolor;
}
void Hexagon::setSide(int newside){
    side = newside;
}
string Hexagon::getSColor(){
    return color;
}
int Hexagon::getSide(){
    return side;
}
Circle::Circle(const string& n, double nx, double ny, double r) : 
  CenteredShape(n,nx,ny) 
{
	Radius = r;
}
