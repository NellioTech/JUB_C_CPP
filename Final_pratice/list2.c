#include<stdio.h>
#include <stdlib.h>
struct list{
    int data;
    struct list *next;
};
struct list *push_back(struct list *mylist, int ndata){
    struct list *temp = mylist;
    struct list *newlist = malloc(sizeof(struct list));
    if(newlist == NULL){
        printf("memory error\n");
        return mylist;
    }
    newlist -> data = ndata;
    newlist -> next  = NULL;
    if(mylist == NULL){
        return newlist;
    }
    while (temp -> next != NULL)
    {
        temp = temp ->next;
    }
    temp -> next = newlist;
    return mylist;
}
struct list *push_front(struct list *mylist, int ndata){
    struct list *newlist = malloc(sizeof(struct list));
    if(newlist == NULL){
        printf("memory error\n");
        return mylist;
    }
    newlist -> data = ndata;
    newlist -> next  = mylist;
    return newlist;
}
struct list *reverse(struct list *mylist){
    struct list *next = NULL;
    struct list *prev = NULL;
    struct list *current = mylist;
    while(current != NULL){
        next = current -> next;
        current -> next = prev;
        prev = current;
        current = next;
    }
    mylist = prev;
    return mylist;
}
void print_list(struct list *mylist){
    struct list *p;
    for (p = mylist ; p ; p = p->next)
        printf("%d ", p ->data);
    printf("\n");
}
void delete_list(struct list *mylist){
    struct list *temp;
    while(mylist != NULL){
        temp = mylist -> next;
        free (mylist);
        mylist = temp;
    }
    if(mylist == NULL)
        printf("the list is deleted!\n");
}
int main(){
    struct list *mylist = NULL;
    mylist = push_back(mylist, 30);
    mylist = push_back(mylist, 40);
    mylist = push_front(mylist, 10);
    print_list(mylist);
    mylist = reverse(mylist);
    print_list(mylist);
    delete_list(mylist);
    return 0;
}