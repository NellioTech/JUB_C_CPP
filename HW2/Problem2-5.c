/*
CH-230-A
Problem2-5.c 
Nelson Tseng 
ntseng@jacobs-university.de
*/
#include <stdio.h>
int main()
{
    int a;
    printf ("Enter the value for a:");
    scanf ("%d",&a);
    printf ("Value of a:%d\n",a);
    int *ptr_a = &a; 
    // creating a pointer name ptr_a and points to the integer a
    printf ("address of pointer:%p\n",ptr_a); 
    // address of the pointer and the subject should be the same?
    *ptr_a+=5;
    //*ptr_a = *ptr_a +5
    printf ("New value of a:%d\n",a);
    printf ("address of a:%p\n",&a);
    return 0;
}