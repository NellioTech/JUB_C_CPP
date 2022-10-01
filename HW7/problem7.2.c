/*
CH-230-A
Problem7-5.c 
Nelson Tseng 
ntseng@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>

struct list
{
    int data;
    struct list *next;
    struct list *prev;
};
struct list *push_front(struct list *my_list, int new_data)
{
    struct list *new_list = (struct list *)malloc(sizeof(struct list));
    if (new_list == NULL) // if the new_list is empty
    {
        printf("Error allocating memory\n");
        return my_list;
    }
    new_list->data = new_data;
    new_list->prev = NULL;
    new_list->next = my_list;
    if (my_list != NULL)
    {
        my_list->prev = new_list;
    }
    my_list = new_list;
    return new_list;
}
void deleteNode(struct list **my_list, struct list *delet)
{
    if (*my_list == NULL || delet == NULL)
        return;
    // if either is null, return and break
    if (*my_list == delet)
    {
        *my_list = delet->next;
    }
    if (delet->next != NULL)
    {
        delet->next->prev = delet->prev;
        // Change next when if the  node to be deleted is not the last node
    }
    if (delet->prev != NULL)
    {
        delet->prev->next = delet->next;
        ///* Change prev when if the node to be deleted is not the first node
    }
    free(delet);
    // free the memory
}

// delete the note at a specific position
void delete_at(struct list **my_list, char c)
{
    if ((my_list) == NULL)
    {
        return;
    }
    struct list *current = *my_list;
    struct list *next;
    int countnum = 0;
    while (current != NULL)
    {
        if (current->data == c)
        {
            countnum++;
            next = current->next;
            deleteNode(my_list, current);
            current = next;
        }
        else
            current = current->next;
    }

    if (countnum == 0)
    {
        printf("The element is not in the list!\n");
        return;
    }
}
void print_list(struct list *my_list)
{
    struct list *p;
    for (p = my_list; p != NULL; p = p->next)
    {
        printf("%c ", p->data);
    }
    printf("\n");
    return;
}
void print_reverse(struct list *my_list)
{
    struct list *p;
    while (my_list != NULL)
    {
        p = my_list;
        my_list = my_list->next;
    }
    for (; p != NULL; p = p->prev)
    {
        printf("%c ", p->data);
    }
    printf("\n");
    return;
}
void dispose_list(struct list *my_list)
{
    if (my_list == NULL)
        return;
    struct list *new_list = my_list;
    while (my_list != NULL)
    {
        new_list = new_list->next;
        free(my_list);
        my_list = new_list;
    }
    //new_list = NULL;
    //my_list = NULL;
}
int main()
{
    struct list *my_list = NULL;
    while (1)
    {
        int choice;
        char c;
        scanf("%d", &choice);
        getchar();
        switch (choice)
        {
        case 1:
            scanf("%c", &c);
            my_list = push_front(my_list, c);
            break;
        case 2:
            scanf("%c", &c);
            getchar();
            delete_at(&my_list, c);
            break;
        case 3:
            print_list(my_list);
            break;
        case 4:
            print_reverse(my_list);
            break;
        case 5:
            dispose_list(my_list);
            exit(1);
            break;
        default:
            break;
        }
    }
    return 0;
}