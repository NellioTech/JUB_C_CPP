/*
CH-230-A
Problem9-6.c 
Nelson Tseng 
ntseng@jacobs-university.de
*/
#include <iostream>
using namespace std;

int myfirst(int arr[])
{
    for (int x = 0; x < 5; x++)
    {
        if (arr[x] > 1 && arr[x] % 2 == 0)
        // divide the number by 2 and if the remainder 
        // is zero, it means it is even
        {
            return arr[x];
        }
    }
    return -1;
}
double myfirst(double arr[])
{
    for (int x = 0; x < 5; x++)
    {
        if (arr[x] < 0 && arr[x] == (int)arr[x])
        // comparing the value of the double to its cast int
        {
            return arr[x];
        }
    }
    return -1.1;
}
char myfirst(char arr[])
{
    for (int x = 0; x < 5; x++)
    {
        if (arr[x] != 'A' && arr[x] != 'E' && arr[x] != 'I' && arr[x] != 'O' &&
            arr[x] != 'U' && arr[x] != 'a' && arr[x] != 'e' && arr[x] != 'i' &&
            arr[x] != 'o' && arr[x] != 'u')
            // cosonants are letter that aren't vowels
        {
            return arr[x];
        }
    }
    return 0;
}
int main(int argc, char **argv)
{
    int arr[] = {1, -2, 3, 4, 5};
    double arr2[] = {1.1, 1.8, 2.2, -3.0, -4.0};
    char arr3[] = {'a', 'B', 'a', 'b', 'c'};
    cout << "The first positive and even int is " << myfirst(arr) << endl;
    cout << "The first negaitve whole double is " << myfirst(arr2) << endl;
    cout << "The first consonant char is " << myfirst(arr3) << endl;
    return 0;
    
}