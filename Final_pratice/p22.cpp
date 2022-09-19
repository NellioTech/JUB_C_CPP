#include <iostream>
#include <exception>
using namespace std;
int main()
{
    int den = 0, num = 50, result;
    try
    {
        if (den == 0)
        {
            throw logic_error("cannot divide by 0");
        }
        result = num / den;
    }
    catch (logic_error &e)
    {
        cerr << e.what() << endl;
    }
    return 0;
}
