#ifndef _BOX_H
#define _BOX_H
#include <iostream>
#include <string>
class BOX
{
private:
   double height;
   double width;
   double depth;
public:
    BOX();
    BOX(double newheight, double newwidth, double newdepth);
    BOX(const BOX &);
    ~BOX();

    void setHeight (double newheight);
    void setWidth(double newwidth);
    void setDepth(double newdepth);
    double getHeight ();
    double getWidth();
    double getDepth();

    void print();

};
#endif