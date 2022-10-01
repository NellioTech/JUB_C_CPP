/*
CH-230-A
Problem5-11.c 
Nelson Tseng 
ntseng@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>
int check_prime(int num, int x)
{
    if (x >= num && num!=1) {
       
        printf("%d is prime\n",num);
        return 1;
    }

    if (num % x == 0 || num==1) {
        printf("%d is not prime\n",num);
        return 0;
    }
    return check_prime(num, ++x); 
    // since prime number also includes the multiple 
    // of 3,5,7,9 and many more
    // so the size of x must be in incremented by 1 BEFORE it is return

    // ++X is prefix increment the value by one then returns the value
    // X++ is postfix return the value then increment

}
int main()
{
    int num;
    int x = 2 ; 
    // for checking if num is divisble by 2
    //printf("enter a number:");
    scanf("%d", &num);
    check_prime(num, x);
    return 0;
}