#include <iostream>
using namespace std;
class worker
{
private:
    int num;
    string name;

public:
    worker(int newnum, string newname)
    {
        this->num = newnum;
        this->name = newname;
    }
    friend ostream &operator<<(ostream &out, const worker&p){
        out << p.num << " " << p.name << endl;
        return out;
    }
};
int main()
{
    worker a(234, "John McEnroe");
    worker b(324, "Jack Nicholson");
    cout << a << b;
    return 0;
}