/*
CH-230-A
Problem7-7.c 
Nelson Tseng 
ntseng@jacobs-university.de
*/
#include "stack.h"
int main()
{
    char c;
    struct stack *stack = (struct stack *)malloc(sizeof(struct stack));
    createEmptyStack(stack);

    while (1)
    {

        scanf("%c", &c);
        switch (c)
        {
        case 's':

            stack = push(stack);
            break;

        case 'p':

            stack = pop(stack);
            break;

        case 'e':

            empty(stack);
            break;

        case 'q':
            printf("Quit\n");
            exit(0);
        }
    }

    return 0;
}