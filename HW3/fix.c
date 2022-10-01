/*
CH-230-A
Problem3-8.c 
Nelson Tseng 
ntseng@jacobs-university.de
*/
/* Write a program where you can enter from the keyboard up to 10 floats.
 If the number entered is equal to −99.0, stop reading numbers from the keyboard and compute the sum and average of all values (excluding −99.0) 
 using two functions (one for the sum and one for the average). Print your results on the screen.*/
#include <stdio.h>

float sum(float arr[], float count)
{
    float sum = 0.0;
    // here you should use count 
    // because that is the number of elements 
    // you are dealing with
    // always start index with 0 not 1 
    for (int x = 0; x < count; x++)
    {
		// if you know count then break is 
		// not needed anymore
		// you only need that for the input
        sum += arr[x];
    }
    return sum;
}
float average(float arr[], int count)
{
    float sum = 0.0;
    for (int x = 0; x < count; x++)
    {
        // same as above
        sum += arr[x];
    }
    // here you just use count to divide
    float average = sum / count;
    return average;
}

int main()
{
    float arr[10];
    int count = 0;
    // always start index with 0 not 1
    for (int x = 0; x < 10; x++)
    {
        scanf("%f", &arr[x]);
        if (arr[x] == -99.0)
        {
            break;
        }
        // you forgot to increment count
        count++;
    }
    // here you need count the same way you need 
    // it for the averege as well
    float a = sum(arr, count);
    float b = average(arr,count);
    printf("%f\n", a);
    printf("%f\n", b);
    return 0;
}
