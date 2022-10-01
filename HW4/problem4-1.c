/*
CH-230-A
Problem4-1.c 
Nelson Tseng 
ntseng@jacobs-university.de
*/
#include <stdio.h>
#include <math.h>
int main()
{
    float radius, final, increase;
    scanf("%f %f %f", &radius, &final, &increase);
    for (int x = 0; x <= final; x += increase)
    {   // if x is less than or equal to the number entered for final
        // it will print the radius, the area, and the perimeter

        printf("%f %f %f\n", radius, radius * radius * M_PI, 2 * M_PI * radius);
        //M_PI is the pi function in c 
        radius += increase;
        // radius will then get increase by 0.5; n
        if (radius > final)
        {   // this is for checking if the radius entered
            //reaches the highest number it be get (final)
            break;
        }
    }
    return 0;
}