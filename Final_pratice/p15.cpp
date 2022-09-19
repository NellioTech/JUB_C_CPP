#include <iostream>
using namespace std;
class Car
{
protected:
    string brandname;
    string modelname;
    double price;
public:
    inline Car(string newbrandname, string newmodelname, double newprice)
    {
        brandname = newbrandname;
        modelname = newmodelname;
        price = newprice;
    }
    ~Car(){}
    void set_brandname(string newbrandname)
    {
        brandname = newbrandname;
    }
};