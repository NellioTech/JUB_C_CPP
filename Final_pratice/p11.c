#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct node
{
    char str[20];
    struct node *next;
};
struct node *insertBegin(struct node *head, char str[])
{
    struct node *newlist = malloc(sizeof(struct node));
    if (newlist == NULL)
    {
        printf("error in memory\n");
        return head;
    }
    strcat(newlist->str, str);
    newlist->next = head;
    return newlist;
}
void printList(struct node *head){
    struct node *p;
    for(p = head ; p ; p= p->next){
        printf("%s ", p->str);
    }
    printf("\n");
}
int main()
{
    int input;
    struct node *head = NULL;
    scanf("%d", &input);
    getchar();
    for (int x = 0; x < input; x++)
    {
        char s[50];
        fgets(s, sizeof(s), stdin);
        s[strlen(s) - 1] = '\0';
        head = insertBegin(head,s);
        printList(head);
    }
    return 0;
}