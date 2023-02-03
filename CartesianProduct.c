// 7. Write a C Program to find Cartesian Product of two sets.

#include <stdio.h>

int main()
{
    int n1, n2, i, j;

    //Entering Size of Set & Elements in Set
    printf("\n\n\n\t Enter the no. of elements in SET A: ");
    scanf("%d",&n1);

    printf("\n\t Enter the no. of elements in set B: ");
    scanf("%d",&n2);

    int set1[n1], set2[n2];

    printf("\n\t Enter elements in SET A: ");
    for(i=0; i<n1; i++)
        scanf("%d",&set1[i]);


    printf("\n\t Enter elements in SET B: ");
    for(i=0; i<n2; i++)
        scanf("%d",&set2[i]);


    printf("\n\t Set A: { ");
    for(i=0; i<n1; i++)
        printf("%d, ", set1[i]);
    printf("}");

    printf("\n\t Set B: { ");
    for(i=0; i<n2; i++)
        printf("%d, ", set2[i]);
    printf("}");

    printf("\n\n\t Cartesian Product: { ");
    for(i=0; i<n1; i++)
    {
        for(j=0; j<n2; j++)
        {
            printf("(%d,%d", set1[i], set2[j]);
            printf("), ");
        }
    }
    printf("}\n\n\n\n");

    return 0;
}
