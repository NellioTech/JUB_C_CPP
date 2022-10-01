#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 12
#define EMPTY (-1)
struct stack
{
    int count;
    int array[12]; // Container
};
void create_Stack(struct stack *new_starck)
{
    new_starck->count = EMPTY;
}
int isFull(struct stack *stack)
{
    if (stack->count == MAX)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isEmpty(struct stack *stack)
{
    if (stack->count == EMPTY)
    {
        return -1;
    }
    else
    {
        return 0;
    }
}
struct stack *push(struct stack *top)
{
    int new;
    scanf("%d", &new);
    if (isFull(top))
    {
        printf("Pushing Stack Overflow\n");
    }
    else
    {
        top->count++;
        top->array[top->count] = new;
        printf("Pushing %d\n", top->array[top->count]);
    }
    return top;
}
struct stack *pop(struct stack *top)
{
    if (isEmpty(top))
    {
        printf("Popping Stack Underflow\n");
    }
    else
    {
        printf("Popping %d\n", top->array[top->count]);
        top->count--;
    }
    return top;
}
void Empty(struct stack *stack)
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
    create_Stack(stack);

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

            Empty(stack);
            break;

        case 'q':
            printf("Quit\n");
            exit(0);
        }
    }

    return 0;
}