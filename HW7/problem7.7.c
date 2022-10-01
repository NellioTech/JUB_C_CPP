#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 12
#define EMPTY (-1)
// keep track of the stack
// When the stack is empty

struct stack
{
    int count;
    int array[12]; // Container
};
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

struct stack *push(struct stack *top)
{
    int new_item;
    scanf("%d", &new_item);
    if (isfull(top))
    {
        printf("Pushing Stack Overflow\n");
    }
    else
    {
        top->count++;
        //pushing an element into the stack
        //count will be increment by one
        top->array[top->count] = new_item;
        printf("Pushing %d\n", top->array[top->count]);
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
    printf("Emptying Stack ");

    while (stack->count >= EMPTY)
    {
        printf("%d ", stack->array[stack->count]);

        stack->count--;
        //this is going to be done multiple times until
        // the stack is empty, then the loops breaks

        if (stack->count == EMPTY)
        {
            break;
        }
    }
    printf("\n");
}
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