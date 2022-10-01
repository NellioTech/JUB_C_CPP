/*
CH-230-A
Problem2-3.c 
Nelson Tseng 
ntseng@jacobs-university.de
*/

#include <stdio.h>
int main()
{
    int weeks, days, hours;
    printf("enter the numbers of weeks: ");
    scanf("%d", &weeks);
    printf("enter the numbers of days: ");
    scanf("%d", &days);
    printf("enter the numbers of hours: ");
    scanf("%d", &hours);
    //(weeks * 7 * 24) + (days * 24) + hourstotal_hours = (weeks * 7 * 24) + (days * 24) + hours;
    // 7 days a week
    // 24 hours a day
    printf("the total number of hours are:%d hours", (weeks * 7 * 24) + (days * 24) + hours);
    return 0;
}