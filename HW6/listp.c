/*
CH-230-A
a6 p9.c
Uriel Palmos
upalmos@jacobs-university.de
*/
#include <stdio.h> 
#include <stdlib.h> 
/*Defining a list*/  
struct list 
{ 
  int value; 
  struct list *next; 
}; 

/*Change the head reference to the new pointer*/
void Add_to_front(struct list** head_ref, int new_value) 
{ 
    struct list* new_node = (struct list*) malloc(sizeof(struct list)); 
    new_node->value  = new_value; 
    new_node->next = (*head_ref); 
    (*head_ref)    = new_node; 
}   
/*Go down the list and change the pointer of the last node to point to the new element*/
void Add_to_last(struct list** head_ref, int new_value) 
{ 
    struct list* new_node = (struct list*) malloc(sizeof(struct list)); 
    struct list *last = *head_ref;  
    new_node->value  = new_value; 
    new_node->next = NULL; 
    if (*head_ref == NULL) 
    { 
       *head_ref = new_node; 
       return; 
    } 
    while (last->next != NULL) 
        last = last->next; 
    last->next = new_node; 
    return; 
} 
/*Changing location of pointers to new element, and pointer to new element to next*/
void insertAfter(struct list* prev_node, int new_value)  
{  
    if (prev_node == NULL)  
    {  
    printf("Invalid position!");      
    return;  
    }    
    struct list* new_node =(struct list*) malloc(sizeof(struct list));  
    new_node->value = new_value;  
    new_node->next = prev_node->next;  
    prev_node->next = new_node;  
}  
void print(struct list *node) 
{ 
  while (node != NULL) 
  { 
     printf("%d ", node->value); 
     node = node->next; 
  } 
  printf("\n");
} 

/*Delete head node by pointing pointer to next node, then removing the head reference*/
void delete_first_Node(struct list **head_ref) 
{ 
   if (*head_ref == NULL)  
   return; 
   struct list* temp = *head_ref; 
    { 
        *head_ref = temp->next;   
        free(temp);               
        return; 
    } 
   
} 
/*changing all elements of the struct individually*/
static void reverse(struct list** head_ref) 
{ 
    struct list* prev = NULL; 
    struct list* tmp = *head_ref; 
    struct list* next = NULL; 
    while (tmp != NULL) { 
        next = tmp->next; 
        tmp->next = prev; 
        prev = tmp; 
        tmp = next; 
    } 
    *head_ref = prev; 
} 
/*Removing nodes by going down the list*/
void deleteList(struct list** head_ref) 
{ 
   struct list* tmp = *head_ref; 
   struct list* next; 
   while (tmp != NULL)  
   { 
       next = tmp->next; 
       free(tmp); 
       tmp = next; 
   } 
   *head_ref = NULL; 
} 

int main() 
{ 
  struct list* head = NULL; 
  char ch;
  do
  {
    scanf(" %c", &ch);
    switch (ch)
    {
        case 'b':
        {
            int a = 0;
            scanf("%d", &a);
            Add_to_front(&head, a); 
            break;
        }
         case 'a':
        {
            int b = 0;
            scanf("%d", &b);
            Add_to_last(&head, b);
            break;
        }
         case 'i':
        {
            int i = 0;
            scanf("%d", &i);
            insertAfter(head->next, i);
            break;
        }
        case 'p':
            print(head); 
            break;
        case 'r':
            delete_first_Node(&head);
            break;
        case 'R':
            reverse(&head);
            break;
    }  
  } while (ch != 'q');
  if (ch == 'q')
  {
    deleteList(&head);
  }
  return 0; 
} 
