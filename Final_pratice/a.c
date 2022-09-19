/*
CH-230-A
a8_p5.[c]
Chia-chi Huang
ch.huang@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    char arr[100];
    FILE *t1 = fopen ("chars.txt", "r");
    FILE *t2 = fopen ("codesum.txt", "w");
    //open file
    if (t1 == NULL || t2 == NULL)
{
		printf("Couldn't open file\n");
		exit(1);
}
//check if files exist

fscanf(t1, "%s", arr);
fprintf(t2, "sum of ASCII value: %d", arr[0]+arr[1]);
//print the sum of ASCII value of first and second character in the array
fclose(t1);
fclose(t2);
//close files

return 0;
}
