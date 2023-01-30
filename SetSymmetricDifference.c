//4. Write a program in C to create two sets and perform the Symmetric Difference operation.
/*Symmetric difference of two array is the all array elements of both array except the
elements that are presents in both array.*/
/*SymmDiff = (arr1 - arr2) UNION (arr2 - arr1).
               OR
SymmDiff = (arr1 UNION arr2) - (arr1 INTERSECTION arr2).*/

#include<stdio.h>
int sy_diff(int a[], int b[], int n, int m);

int main()
{
    int n1, n2, i,j;

    //Entering Size of Set & Elements in Set
    printf("\n\n\n\t Enter the no. of elements in SET A: ");
    scanf("%d",&n1);

    printf("\n\t Enter the no. of elements in set B: ");
    scanf("%d",&n2);

    int set1[n1], set2[n2];

    printf("\n\t Enter elements in SET A: ");
    for(i=0; i<n1; i++)
    {
        scanf("%d",&set1[i]);
    }

    printf("\n\t Enter elements in SET B: ");
    for(i=0; i<n2; i++)
    {
        scanf("%d",&set2[i]);
    }

    // Printing Symmetric Difference Set
    printf("\n\tSymmetric Difference of Set\n");
    printf("\t(Set A - Set B) U (Set B - Set A) = \n\t{");

    sy_diff(set1, set2, n1, n2);

    printf("}\n\n\n");

    return 0;
}

int sy_diff(int a[], int b[], int n, int m)
{
    int i, j=0;

    while(i < n && j < m)
    {
        if(a[i] < b[j])
        {
            printf(" %d, ",a[i]);
            i++;
        }
        else if(b[j] < a[i])
        {
            printf(" %d, ",b[j]);
            j++;
        }
        else
        {
            i++;
            j++;
        }
    }

    while(i < n)
    {
        printf(" %d, ",a[i]);
        i++;
    }
    while(j < m)
    {
        printf(" %d, ",b[j]);
        j++;
    }
}










