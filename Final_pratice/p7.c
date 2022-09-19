#include <stdio.h>

int substitute_vowels(char *s, char ch)
{

    int count = 0;
    for (;*s != '\0'; s++)
    {
        if (*s == 'a' || *s == 'e' || *s == 'i' || *s == 'o' || *s == 'u')
        {
            *s = ch;
            count++;
        }
    }
    return count;
}
int main()
{
    char s[] = "This is a sentence";
    printf("%s\n", s);
    int n = substitute_vowels(s, 'o');
    printf("%s\n", s);
    printf("%d\n", n);
}