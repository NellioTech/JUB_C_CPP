/*
CH-230-A
Problem4-9.c 
Nelson Tseng 
ntseng@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>
int prodminmax(int arr[], int n)
{
    int max = arr[0];
    // assume max = first element in the array
    for (int x = 0; x < n; x++)
    {
        // going through the array to check
        if (arr[x] > max)
        {
            // if any number stored in the position in the
            // arr array are larger than the "max", max becomes
            //the number in that array position where the condition stands
            max = arr[x];
        }
    }
    int small = arr[0];
    //assume small = first element
    for (int y = 0; y < n; y++)
    {
        //going though the array to check
        if (arr[y] < small)
        {
            // if any number stored in the arr array are smaller
            //than the current "small", small becomes the number
            // in that position where the condition stands
            small = arr[y];
        }
    }
    int product = max * small;
    return product;
}
int main()
{
    int n;
    scanf("%d", &n);
    int *arr = (int *)malloc(sizeof(int) * n); // dynamic memory allocation
    if (arr == NULL)                           // checking for null
    {
        printf("memory is not allocated\n");
        exit(0);
    }
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        // getting input
    }
    for (int i = 0; i < n; i++)
    {
        printf("The number entered is:%d\n", arr[i]);
        // for personal checking
    }
    printf("The product of largest and smallest is:%d", prodminmax(arr, n));
    free(arr); // deallocation
    return 0;
}