/*
CH-230-A
Problem4-6.c 
Nelson Tseng 
ntseng@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

void two_greatest_value(int *arr, int n, int *max1, int *max2)
{

    *max1 = arr[0];
    *max2 = arr[1];
    // number entered be: 44,11,22
    // max1 = 44, because it is on the 0 posion
    // max2 = 11, because it is position 1
    for (int x = 0; x < n; x++)
    {
        if (*max1 < arr[x]){
        // is 44 < 44 -> NO
        //goes to else if
        //
        // x = 1 , is 44 < arr[1], which is 11.
        //no, goes to else if
        //
        //x =2 , is 44 < arr[2], which is 22
        // no, goes to else if
            *max2 = *max1;
            *max1 = arr[x];
        }
        else if (*max2 < arr[x] && arr[x] != *max1){
        // is 11 < 44 -> yes 
        // is arr[0], which is 44, different from max1, which is 44?
        // no -> so does nothing and go back to if loop 
    
        // is 11< 11, no -> go back to if loop?

        // is 11 < 22 -> yes
        // is 22 different from 44 -> yes
        // max2 = 22
            *max2 = arr[x];
        }
    }
}
int main(int argc, char *argv[])
{
    int n; // numbers of integer wanted
    int max1, max2;
    scanf("%d", &n);
    int *arr = (int *)malloc(sizeof(int) * n);// dynamic memory alloc
    if (arr == NULL) // checking for null
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
    }
    two_greatest_value(arr, n, &max1, &max2);//calling function
    printf("Greatest number:%d\nSecond greatest number:%d\n", max1, max2);
    free(arr); // freeing the memory
    return 0;
}