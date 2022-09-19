#include <stdio.h>
#include <stdlib.h>
struct list{
    int data;
    struct list *next;
};
struct list *push_front(struct list *mylist, int ndata){
    struct list *newlist = malloc(sizeof(struct list));
    if(newlist == NULL){
        printf("memory error\n");
        return mylist;
    }
    else{
        newlist -> data = ndata;
       newlist -> next = mylist;
       return newlist;
    }
}
struct list *push_back(struct list *mylist, int ndata){
    struct list *newlist = malloc(sizeof(struct list));
    struct list *temp = mylist;
    if(newlist == NULL){
        printf("memory error\n");
        return mylist;
    }
    newlist -> data = ndata;
    newlist -> next = NULL;
    if(mylist == NULL){
        return newlist;
    }
    while(temp->next != NULL){
        temp = temp -> next;
    }
    temp -> next = newlist;
    return mylist;
}
void printlist(struct list *mylist){
    struct list *p;
    for(p = mylist ; p ; p = p -> next){
        printf("%d ", p->data);
    }
    printf("\n");
}
void deletelist(struct list *mylist){
    struct list *temp;
    while(mylist!=NULL){
        temp = mylist -> next;
        free(mylist);
        mylist = temp;
    }
    if(mylist == NULL){
        printf("the list is deleted\n");
    }
}
struct list *reverse(struct list *mylist){
    struct list *prev = NULL;
    struct list *next = NULL;
    struct list *current = mylist;
    while (current!=NULL)
    {
     next = current -> next;
     current -> next = prev;
     prev = current;
     current = next; 
    }
    mylist = prev;
    return mylist;
}
int main(){
    struct list *mylist = NULL;
    mylist = push_back(mylist, 30);
    mylist = push_back(mylist, 50);
    mylist = push_front(mylist, 10);
    mylist = push_front(mylist, 70);
    printlist(mylist);
    mylist = reverse(mylist);
    printlist(mylist);
    mylist = push_front(mylist, 60);
    printlist(mylist);
    mylist = reverse(mylist);
    printlist(mylist);
    deletelist(mylist);
    return 0;
}