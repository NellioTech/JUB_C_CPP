/*
CH-230-A
Problem6-4.c 
Nelson Tseng 
ntseng@jacobs-university.de
*/
#include <stdio.h>
#define INTERMEDIATE
int main()
{

    int dimension; // dimension of vector
    scanf("%d", &dimension);

    int vec1[dimension];
    int vec2[dimension];
    for (int i = 0; i < dimension; i++)
    {
        scanf("%d", &vec1[i]); // getting values for vector 1
    }
    for (int j = 0; j < dimension; j++)
    {
        scanf("%d", &vec2[j]); // getting values for vector 2
    }

    int vec3[dimension];
    for (int x = 0; x < dimension; x++)
    {
        vec3[x] = vec1[x] * vec2[x];
        // getting values for the intermediate product values
    }
#ifdef INTERMEDIATE
    printf("The intermediate product values are:\n");
    for (int x = 0; x < dimension; x++)
    {
        printf("%d\n", vec3[x]);
    }
#endif
    int scalar_product = 0;
    printf("The scalar product is: ");
    for (int x = 0; x < dimension; x++)
    {
        scalar_product += vec3[x];
        //x++;
    }
    printf("%d\n", scalar_product);
}