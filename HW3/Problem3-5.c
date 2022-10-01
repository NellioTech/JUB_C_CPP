/*
CH-230-A
Problem3-5.c 
Nelson Tseng 
ntseng@jacobs-university.de
*/
#include <stdio.h>
int main()
{
    char c; // c is the choice for testcase
    scanf("%c", &c);
    int n ; // n is number of set of temperture
    scanf("%d", &n);
    double arr[100]; //an double array that socres at most 100 set of temperture(in double)
    double sum_arr = 0; //the orginal sum of array is 0 
   
    for (int x = 1; x <= n; x++) 
    { // entering n sets of temperture into the double array
        scanf("%lf", &arr[x]);
        sum_arr = sum_arr + arr[x]; //the new sum_arr = 0 + the number entered
    }
   
    switch (c)
    {
        case 'c':
        {
            printf("%lf\n", sum_arr);
            break;
        }
        case 'p':
        {
            for (int x = 1; x <= n; x++)
            {
                printf("%lf\n", arr[x]);
            }
        }
            break;
        case 't':
        {
            for (int x = 1; x <= n; x++)
            {
                printf("%lf\n", (arr[x]*9/5)+32);
                //F = (9/5 * C)+32
            }
        }
            break;
        default:
        {
           printf("%lf\n",sum_arr/n);
           // sum of arrays / number of sets of arrays
        }
        break;
    }

    return 0;
}
