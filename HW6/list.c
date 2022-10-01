/*
CH-230-A
Problem6-8.c 
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
void push_front(struct list **head_ref, int new_data)
{
    // 1. creating memory for the list
    struct list *new_list = (struct list *)malloc(sizeof(struct list));

    // 2. in the new list, put in a new data after the orginal data
    new_list->data = new_data;

    // 3. Make next of new list as head
    new_list->next = (*head_ref);

    // 4. move the head to point to the new list
    (*head_ref) = new_list;
}
void push_back(struct list **head_ref, int new_data)
{
    struct list *new_list = (struct list *)malloc(sizeof(struct list));
    // 1. creating memory for the list
    if (new_list == NULL)
    {
        exit(1);
    }
    struct list *last = *head_ref;
    // 2. When there is only on element in the list
    //    Last element will be the first element

    new_list->data = new_data;
    // 3. in the new list, put in a new data after the orginal data
    new_list->next = NULL;
    // 4. set the next element in the new list to be null
    if (*head_ref == NULL)
    {
        // 5. If the Linked List is empty, then make the new list as head
        *head_ref = new_list;
        return;
    }
    while (last->next != NULL)
    {
        // 6. while there are elements after the last element
        //    last element will be change to the next element wanted
        last = last->next;
    }
    last->next = new_list;
    // 7.the new list will have the element of next element wanted
    return;
}
void delete_mylist_position(struct list **head_ref, int position) 
{ 
   // If linked list is empty 
   if (*head_ref == NULL) 
      return; 
  
   // Store head list
   struct list* temp = *head_ref; 
  
    // If head needs to be removed 
    if (position == 0) 
    { 
        *head_ref = temp->next;   
        free(temp);               
        return; 
    } 
  
    // Find previous list of the list to be deleted 
    for (int i=0; temp!=NULL && i<position-1; i++) 
         temp = temp->next; 
  
    // If position is more than number of list 
    if (temp == NULL || temp->next == NULL) 
         return; 
  
    // list temp->next is the list to be deleted 
    // Store pointer to the next of list to be deleted 
    struct list *next = temp->next->next; 
    free(temp->next);    // Free memory  
    temp->next = next;  // Unlink the deleted list from list 
} 
void dispose_list(struct list *mylist)
{
    struct list *nextelem;
    while (mylist != NULL)
    {
        nextelem = mylist->next;
        free(mylist);
        mylist = nextelem;
    }
}

void printList(struct list *mylist)
{
    while (mylist != NULL)
    {
        // added space here
        printf("%d ", mylist->data);
        mylist = mylist->next;
    }
    // added new line here
    printf("\n");
}
int main()
{
    struct list *head = NULL;
    while(1){
        char c ;
        scanf ("%c",&c);
        int x,y;
        switch (c){
                case 'a':
                    scanf("%d", &x);
                    // after this you will read a character \n has to be removed
                    getchar();
                    push_back(&head, x); 
                    break;
                case 'b':
                    scanf("%d", &y);
                    // after this you will read a character \n has to be removed
                    getchar();
                    push_front(&head, y); 
                    break;
                case 'r':
                    delete_mylist_position(&head, 0); 
                    break;
                case 'p':
                     printList(head); 
                    break;
                case 'q':
                    dispose_list(head);
                    // end the execution of the main function by return
                    return 0;
                    break;
                default:
                    break;
            }
        }
    return 0;
}