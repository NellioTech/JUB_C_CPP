/*
CH-230-A
Problem9-8.c 
Nelson Tseng 
ntseng@jacobs-university.de
*/
#include <iostream>
using namespace std;
void subtract_max(int arr[], int n)
{
    int max = arr[0]; 
    // max num is always the first position to start with
    for (int x = 0; x < n; x++)
    {
        if (max < arr[x])
        {
            max = arr[x];
            // if the num in that position is greater
            // max becomes the num in that position
        }
    }
    cout << "The max number is the array is " << max << endl;
    cout << "The new array after subtracting the maximum is:" << endl;
    for (int x = 0; x < n; x++)
    {
        cout << arr[x] - max << endl;
        // subtracting the max from the array
    }
}
void deallocate(int arr[])
{
    delete[] arr;
    //freeing memory
}
int main(int argc, char **argv)
{
    int n;
    cout << "Size of int array: " ;
    cin >> n;
    int *a = new int[n];
    cout << "The array is:" << endl ;
    for (int x = 0; x < n; x++)
    {
        cin >> a[x];
    }
    subtract_max(a, n);
    deallocate(a);
    return 0;
}