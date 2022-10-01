/*
CH-230-A
Problem2-7.c 
Nelson Tseng 
ntseng@jacobs-university.de
*/
#include <stdio.h>
int main()
{
    int i = 8;
    while (i >= 4){
        printf("i is %d\n", i);
        i--;
    }
    //need to use {} otherwise the loop will be endless
    printf("That’s it.\n");
    return 0;
}