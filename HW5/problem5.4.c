/*
CH-230-A
Problem5-4.c 
Nelson Tseng 
ntseng@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void divby5(float arr[], int size)
{
    for (int x = 0; x < size; x++)
    {
        // size is now equal n
        // where n is number of compoents
        // that is in the dynamic allocated array

        //setting the value store in
        // each position to be divided 5
        arr[x] = arr[x] / 5;
    }
    return;
}
int main()
{
    int n;
    scanf("%d", &n);
    float *arr = (float *)malloc(sizeof(float) * n); // dynamic memory alloc
    if (arr == NULL)
    {
        printf("Memory is not allocated!\n");
        exit(1);
    }
    for (int x = 0; x < n; x++)
    {
        scanf("%f", &arr[x]);
    }
    printf("Before:\n");
    for (int x = 0; x < n; x++)
    {
        // n is the components in the array
        printf("%.3f ", arr[x]);
    }
    printf("\nAfter:\n");
    divby5(arr, n); //calling the function
    for (int x = 0; x < n; x++)
    { 
        // n is the components in the array
        printf("%.3f ", arr[x]);
    }
    printf("\n");
    free(arr);
    return 0;
}