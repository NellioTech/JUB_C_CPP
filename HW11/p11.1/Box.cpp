#include "Box.h"
#include <iostream>
#include <string>
using namespace std;
BOX::BOX()
{
    height = 3.0;
    width = 3.0;
    depth = 5.0;
}
BOX::BOX(double newheight, double newwidth, double newdepth){
    height = newheight;
    width = newwidth;
    depth = newdepth;
}
BOX::BOX(const BOX &copy){
    height = copy.height;
    width = copy.width;
    depth = copy.depth;
}
BOX::~BOX(){}
void BOX::setHeight(double newheight){
    height = newheight;
}
void BOX::setWidth(double newwidth){
    width = newwidth;
}
void BOX::setDepth(double newdepth){
    depth = newdepth;
}
double  BOX::getHeight(){
    return height;
}
double BOX::getWidth(){
    return width;
}
double BOX::getDepth(){
    return depth;
}
void BOX::print(){
    
        cout << "The volume of the box is:" ;
        cout << height * width * depth << endl;
}