/*
CH-230-A
Problem8-4.c 
Nelson Tseng 
ntseng@jacobs-university.de
*/
#include "stack.h"
void createEmptyStack(struct stack *new_stack)
{
    new_stack->count = EMPTY;
}

int isfull(struct stack *stack)
{
    if (stack->count == MAX - 1)
    // using poistion
    // first element on the stack is on position 0
    {
        return 1;
    }

    else
    {
        return 0;
    }
}

int isempty(struct stack *stack)
{
    if (stack->count == EMPTY)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

struct stack *push(struct stack *top, unsigned int num)
{

    if (isfull(top))
    {
        printf("Pushing Stack Overflow\n");
    }
    else
    {
        top->count++;
        //pushing an element into the stack
        //count will be increment by one
        top->array[top->count] = num;
        // printf("Pushing %d\n", top->array[top->count]);
    }

    return top;
}

struct stack *pop(struct stack *top)
{
    if (isempty(top))
    {
        printf("Popping Stack Underflow\n");
    }
    else
    {
        printf("Popping %d\n", top->array[top->count]);
        //save the info that is on top of the stack and
        // move the top of the stack down by one
        top->count--;
        // popping an element in the stack does not atully removes
        // the data that we pop off, but because we are moving top
        // down by one, so the next next we push, it is going to "replace"
        // the orginal data that is stored on the top
    }

    return top;
}

void empty(struct stack *stack)
{
    //printf("");

    while (stack->count >= EMPTY)
    {
        printf("%d", stack->array[stack->count]);

        stack->count--;
        //this is going to be done multiple times until
        // the stack is empty, then the loops breaks

        if (stack->count == EMPTY)
        {
            break;
        }
    }
    printf(".\n");
}
void print_binary(struct stack *stack, unsigned int num)
{
    while (num != 0)
    {
        // divide num by 2 and write down the remainder
        // divided the integer result of num by 2 again 
        // and write down the remainder do this until the num is 0
        push(stack, num % 2);
        num = num / 2;
    }
    empty(stack);
}