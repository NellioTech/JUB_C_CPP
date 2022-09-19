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
class Taxi : public Car{
protected:
    int limit;
public:
    inline Taxi(string newbrandname, string newmodelname, double newprice, int newlimit):
    Car(newbrandname,newmodelname,newprice){
        limit = newlimit;
    }
    ~Taxi(){}
    void print(){
        cout << "model name: " << modelname << endl;
        cout << "brand name: " << brandname << endl;
        cout << "price: " << price << endl;
        cout << "limit of passenager: " << limit << endl;
    }
};
int main (){
    Taxi a(string("Tesla"), string("ModelX"), 200.22, 4);
    a.print();
}