/*
CH-230-A
Problem4-3.c 
Nelson Tseng 
ntseng@jacobs-university.de
*/
#include <stdio.h>
#include <math.h>

float geometric_mean(float arr[], int num)
{
    float product = 1;
    for (int x = 0; x < num; x++)
    {
        if (arr[x] < 0)
        {
            //stop and computes answer when
            //the elements in arr is less than 0
            break;
        }
        product = product * arr[x];
    }
    float gmean = pow(product, (float)1 / num);
    // product is the base 
    //num is product' power
    //need to cast to float b/c the answer will be in decimal
    //otherwise the answer will be off
    return gmean;
}
float highest_number(float arr[], int num)
{
    float highest = arr[0];
    for (int x = 0; x < num; x++)
    {
        if (arr[x] < 0)
        {
            //stop and computes answer when
            //the elements in arr is less than 0
            break;
        }
        if (highest < arr[x])
        {
            highest = arr[x];
        }
    }
    return highest;
}
float smallest_number(float arr[], int num)
{
    float smallest = arr[0];
    for (int x = 0; x < num; x++)
    {
        if (arr[x] < 0)
        {
            //stop and computes answer when
            //the elements in arr is less than 0
            break;
        }
        if (smallest > arr[x])
        {
            smallest = arr[x];
        }
    }
    return smallest;
}
float print_sum(float arr[], int num)
{
    float sum = 0;
    arr[num] = 0;
    for (int x = 0; x < num; x++)
    {
        if (arr[x] < 0)
        {
            //stop and computes answer when
            //the elements in arr is less than 0
            break;
        }
        sum += arr[x];
    }
    return sum;
}
int main()
{
    float arr[15];
    // 15 elements in arr
    int num;
    printf("number of inputs:");
    scanf("%d", &num);
    for (int x = 0; x < num; x++)
    {
        scanf("%f", &arr[x]);
        //getting inputs
        if (arr[x] < 0)
        {
            //stop getting inputs if the number entered is less than 0
            break;
        }
    }
    char x;
    getchar();
    printf("Enter testcase:");
    scanf("%c", &x);
    switch (x)
    {
    case ('m'):
        printf("The geomertic mean is:%f\n", geometric_mean(arr, num));
        break;
    case ('h'):
        printf("The highest is:%f\n", highest_number(arr, num));
        break;
    case ('l'):
        printf("The smallest is:%f\n", smallest_number(arr, num));
        break;
    case ('s'):
        printf("The sum is:%f\n", print_sum(arr, num));
        break;
    default:
        break;
    }

    return 0;
}