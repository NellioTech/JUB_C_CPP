#include <stdio.h>
#include <stdlib.h>
int main()
{
    char ch_arr[2] = {'A', 'B'};
    char *ch_ptr;
    float f_arr[2] = {1.1, 2.2};
    float *f_ptr;

    ch_ptr = &ch_arr[0];     /* same as ch_ptr = ch_arr */
    printf("%p\n", ch_ptr);  /* address of 1st elem */
    ch_ptr++;               /* increase pointer */

    printf("%p\n", ch_ptr);   /* address of 2nd elem */
    printf("%c\n", *ch_ptr); /* content of 2nd elem */

    f_ptr = f_arr;            /* same as &f_arr[0] */
    printf("%p\n", f_ptr);   /* address of 1st elem */

    f_ptr++;                 /* increase pointer */
    printf("%p\n", f_ptr);  /* address of 2nd elem */
    printf("%f\n", *f_ptr);/* content of 2nd elem */
    return 0;
}
