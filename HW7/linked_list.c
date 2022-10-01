#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"
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