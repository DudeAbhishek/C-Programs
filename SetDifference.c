// 3. Write a program in C to create two sets and perform the Difference operation on sets.

#include<stdio.h>

int main()
{
    int set1[10], set2[10], diff_a_b[10], diff_b_a[10], n1, n2, i, j, k =0, l, m=0;

    //Entering Size of Set & Elements in Set
    printf("\n\n\n\t Enter the no. of elements in SET A: ");
    scanf("%d",&n1);

    printf("\n\t Enter elements in SET A: ");
    for(i=0; i<n1; i++)
    {
        scanf("%d",&set1[i]);
    }

    printf("\n\t Enter the no. of elements in set B: ");
    scanf("%d",&n2);

    printf("\n\t Enter elements in SET B: ");
    for(i=0; i<n2; i++)
    {
        scanf("%d",&set2[i]);
    }

    //  Calculating A - B

    for( i=0; i<n1; i++)
    {
        for(j=0; j<n2; j++)
        {
            if(set2[j] == set1[i])
                break;
        }
        if(j==n2)
        {
            // here we check that is element already present in the set
            // if present than ignore it otherwise add to the difference set
            for(l=0; l<k; l++)
            {
                if(diff_a_b[l]==set1[i])
                    break;
            }
            if(l==k)
            {
                diff_a_b[k]=set1[i];
                k++;
            }
        }

    }

    //  Calculating B - A

    for( i=0; i<n2; i++)
    {
        for(j=0; j<n1; j++)
        {
            if(set2[i] == set1[j])
                break;
        }
        if(j==n1)
        {
            // here we check that is element already present in the set
            //if present than ignore it otherwise add to the difference set
            for(l=0; l<m; l++)
            {
                if(diff_b_a[l]==set2[i])
                    break;
            }
            if(l==m)
            {
                diff_b_a[m]=set2[i];
                m++;
            }
        }
    }

    //Printing Difference Set A - B
    printf("\n\t Difference set A - B = { ");
    for(i=0; i<k; i++)
        printf("%d, ",diff_a_b[i]);
    printf(" }\n");

    //Printing Difference Set B - A
    printf("\n\t Difference set B - A is = { ");
    for(i=0; i<m; i++)
    {
        printf("%d, ",diff_b_a[i]);
    }
    printf(" }\n");

    return 0;
}
