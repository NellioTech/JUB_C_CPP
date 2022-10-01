/*
CH-230-A
Problem11-1.cpp
Nelson Tseng 
ntseng@jacobs-university.de
*/
#include "Box.h"
#include <iostream>
#include <string>
using namespace std;
int main(int argc, char **argv)
{
    BOX *box;
    double height, width, depth;
    int how_many;
    cout << "How many boxes: ";
    cin >> how_many;
    box = new BOX[2 * how_many];
    int x;
    for (x = 0; x < how_many; x++)
    {
        cout << "Height: ";
        cin >> height;
        box[x].setHeight(height);
        cout << "Width: ";
        cin >> width;
        box[x].setWidth(width);
        cout << "Depth: ";
        cin >> depth;
        box[x].setDepth(depth);
    }
    for (int x = how_many; x <= (2 * how_many - 1); x++)
    {
        box[x] = BOX(box[x - how_many]);
    }
    for (int x = 0; x < 2 * how_many; x++)
    {
        box[x].print();
    }
    return 0;
}