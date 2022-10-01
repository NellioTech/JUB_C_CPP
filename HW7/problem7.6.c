/*
CH-230-A
Problem7-6.c 
Nelson Tseng 
ntseng@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct person
{
    char name[30];
    int age;
};
int comp_by_name(const struct person *p1, const struct person *p2)
//comparing by name in alphabetical order
{
    int temp = strcmp(p1->name, p2->name);
    int cmp = (p2->age < p1->age) - (p1->age < p2->age);
    if (temp == 0)
        return cmp;
    return temp;
}

int comp_by_age(const struct person *p1, const struct person *p2)
{
    //comparing by the age 
    int temp = strcmp(p1->name, p2->name);
    int cmp = (p2->age < p1->age) - (p1->age < p2->age);
    if (temp == 0)
        return temp;
    return cmp;
}
void bubble_sort(struct person *p, int n, int comp(const struct person *p1, const struct person *p2))
{
    int i, j;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - 1; j++)
        {
            if (comp(&p[j + 1], &p[j]) < 0)
            {
                struct person tmp = p[j + 1];
                p[j + 1] = p[j];
                p[j] = tmp;
            }
        }
    }
}

int main()
{

    int n, i;
    struct person *prs;

    scanf("%d", &n);
    getchar();

    prs = (struct person *)malloc(sizeof(struct person) * n);

    for (i = 0; i < n; i++)
    {
        fgets(prs[i].name, 30, stdin);
        prs[i].name[strlen(prs[i].name) - 1] = '\0';
        scanf("%d", &prs[i].age);
        getchar();
    }
    bubble_sort(prs, n, comp_by_name);
    for (i = 0; i < n; i++)
    {
        printf("{%s, %d}; ", prs[i].name, prs[i].age);
    }
    printf("\n");
    bubble_sort(prs, n, comp_by_age);

    for (i = 0; i < n; i++)
    {
        printf("{%s, %d}; ", prs[i].name, prs[i].age);
    }
    printf("\n");
    return 0;
}