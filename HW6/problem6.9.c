/*
CH-230-A
Problem6-9.c 
Nelson Tseng 
ntseng@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>

struct list
{
    int data;
    struct list *next;
};
struct list *push_front(struct list *my_list, int new_data)
{

    struct list *new_list = (struct list *)malloc(sizeof(struct list));
    //creating memory for the new_list
    if (new_list == NULL) // if the new_list is empty
    {
        printf("Error allocating memory\n");
        return my_list;
    }
    new_list->data = new_data; 
    // in the new list, put in a new data after the orginal data
    new_list->next = my_list;
    // move the next data to the front
    return new_list;
}

struct list *push_back(struct list *my_list, int new_data)
{
    struct list *cursor = my_list;
    // When there is only on element in the list
    struct list *new_list  = (struct list *)malloc(sizeof(struct list));
    if (new_list == NULL)
    {
        printf("Error allocating memory\n");
        return my_list;
    }
    new_list->data = new_data;
    new_list->next = NULL;
    // set the new data in the new list to be null
    if (my_list == NULL)
    {
        // if nothing is in the original list
        return new_list;
    }

    while (cursor->next != NULL)
    {
        // while there are elements after the last element
        //    last element will be change to the next element wanted
        cursor = cursor->next;
    }
    cursor->next = new_list;
    return my_list;
}
struct list *delete_position(struct list *my_list, int position)
{
    // If linked list is empty 
    if (my_list == NULL)
    {
        return my_list;
    }
    // store in info in my_list to delete
    struct list *delete = my_list;
    my_list = my_list -> next ;
    free (delete);
    return my_list;
    // If head needs to be removed 
}
struct list *reverse(struct list *my_list)
{
    struct list *prev = NULL;
    struct list *current = my_list;
    struct list *next = NULL;
    while (current != NULL)
    {
        next = current -> next;
        current -> next = prev;
        prev = current;
        current = next;
    }
    return prev;
}
int count(struct list *my_list)
{
    struct list *get_num = my_list;
    int count = 0;
    while (get_num->next != NULL)
    {
        get_num = get_num->next;
        count++;
    }
    return count + 1;
}
struct list *insert_after(struct list *my_list, int position, int new_data)
{
    if ((count(my_list) - 1) < position)
    {
        printf("Invalid position!\n");
        return my_list;
    }

    struct list *new_list, *get_position;

    if (position == 0)
    {
        return push_front(my_list, new_data);
        //when wanting to insert after position 0
    }
    new_list = (struct list *)malloc(sizeof(struct list));

    new_list->data = new_data;
    get_position = my_list;

    for (int i = 0; i < position - 1; i++)
    {
        get_position = get_position -> next;
    }
    new_list->next = get_position -> next;
    get_position->next = new_list;
    return my_list;
}
void print_list(struct list *my_list)
{
    struct list *p;
    for (p = my_list; p; p = p->next)
    {
        printf("%d ", p->data);
    }
    printf("\n");
}

void dispose_list(struct list *my_list)
{
    struct list *nextelem;
    while (my_list != NULL)
    {
        nextelem = my_list->next;
        free(my_list);
        my_list = nextelem;
    }
}
int main()
{
    struct list *my_list = NULL;
    while (1)
    {
        char c;
        scanf("%c", &c);
        int x, y;
        switch (c)
        {
        case 'a':
            scanf("%d", &x);
            // after this you will read a character \n has to be removed
            getchar();
            my_list = push_back(my_list, x);
            break;
        case 'b':
            scanf("%d", &y);
            // after this you will read a character \n has to be removed
            getchar();
            my_list = push_front(my_list, y);
            break;
        case 'r':
            my_list = delete_position(my_list, 0);
            break;
        case 'i':
            scanf("%d", &x);
            scanf("%d", &y);
            my_list = insert_after(my_list, x, y);
            break;
        case 'R':
            my_list = reverse(my_list);
            break;
        case 'p':
            print_list(my_list);
            break;
        case 'q':
            dispose_list(my_list);
            // end the execution of the main function by return
            return 0;
            break;
        default:
            break;
        }
    }
    return 0;
}