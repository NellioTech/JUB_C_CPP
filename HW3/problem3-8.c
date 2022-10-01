/*
CH-230-A
Problem3-8.c 
Nelson Tseng 
ntseng@jacobs-university.de
*/
#include <stdio.h>

float sum(float arr[], float count)
{
    float sum = 0.0;
    //sum of all array is 0 to start with
    for (int x = 0; x < count; x++)
        // as long as x is less than the amount of input
        // the new sum = sum + arr[x]
    {
        sum += arr[x];
    }
    return sum;
}
float average(float arr[], int count)
{
    float sum = 0.0;
    for (int x = 0; x < count; x++)
    {
        sum += arr[x];
    }
    float average = sum / count;
    //devide the sum by the amount of count to get average
    return average;
}

int main()
{
    float arr[10]; // an array that stores 10 floats
    int count = 0; // how many numbers of input 
    for (int x = 0; x < 10; x++)
    {
        scanf("%f", &arr[x]);
        if (arr[x] == -99.0)
        {   // if the number input is -99 then stop  getting input
            break;
        }
        // everytime the codition of x< 90 and arr[x] != -99
        // count gets increment by 1
        count++; 
        
    }
    float a = sum(arr, count);
    //passing the array and the number of count to sum function
    float b = average(arr,count);
    //passing the array and the number of count to sum function
    printf("%f\n", a);
    printf("%f\n", b);
    return 0;
}