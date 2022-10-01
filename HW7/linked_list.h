#include <stdio.h>
#include <stdlib.h>

struct list
{
    int data;
    struct list *next;
};
struct list *push_front(struct list *my_list, int new_data);
struct list *push_back(struct list *my_list, int new_data);
struct list *delete_position(struct list *my_list, int position);
void print_list(struct list *my_list);
void dispose_list(struct list *my_list);
