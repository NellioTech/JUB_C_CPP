#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct person
{
    char name[30];
    int age;
};

void bubblesort(struct person *prs, int n)
{
    struct person temp;
    int i, j, a, b;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - 1; j++)
        {
            a = strcmp(prs[j].name, prs[j + 1].name);
            b = prs[j + 1].age - prs[j].age;

            if (a > 0)
            {
                temp = prs[j];
                prs[j] = prs[j + 1];
                prs[j + 1] = temp;
            }
            else if (a == 0 && b < 0)
            {
                temp = prs[j];
                prs[j] = prs[j + 1];
                prs[j + 1] = temp;
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

    bubblesort(prs, n);

    for (i = 0; i < n; i++)
    {
        printf("{%s, %d};", prs[i].name, prs[i].age);
    }
    return 0;
}