#include "linked_list.h"
#include <stdio.h>
#include <stdlib.h>
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
            my_list = delete_position(my_list, 1);
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