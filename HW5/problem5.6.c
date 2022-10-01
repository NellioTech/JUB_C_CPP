/*
CH-230-A
Problem5-6.c 
Nelson Tseng 
ntseng@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void count_negative(float *arr, int *elements, int *count)
// using the address of the dynamtic allocated memory
//also the address of the elements
{
    for (int x = 0; x < *elements; x++)
    {
        scanf("%f", &arr[x]);
        //entering inputs
    }

    for (int x = 0; arr[x] > 0; x++)
    { //using the address of count and increment it
        // by one very time the statement holds
        *count += 1;
    }
    return;
}
int main()
{
    int elements; //elements wanted in array
    int count = 0;
    //assume the very first element entered is negative
    scanf("%d", &elements);
    float *arr = (float *)malloc(sizeof(float *) * elements);
    if (arr == NULL) //checking for null
    {
        exit(1);
    }
    count_negative(arr, &elements, &count); //calling the function
    printf("Before the first negative value: %d elements", count);
    free(arr);
    return 0;
}