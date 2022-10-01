/*
CH-230-A
Problem8-4.c 
Nelson Tseng 
ntseng@jacobs-university.de
*/
#include "stack.h"
int main()
{
    struct stack *stack = (struct stack *)malloc(sizeof(struct stack));
    createEmptyStack(stack);
    unsigned int num;
    scanf("%i", &num);
    printf("The binary representation of %i is ", num);
    print_binary(stack,num);
    

    return 0;
}