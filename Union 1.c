#include<stdio.h>
int remove_repeated(int size, int a[]);
void sort(int size, int a[]);

main()
{
    int n1, n2, size, i, j=0, k ;

    //Entering Size of Set & Elements in Set
    printf("\n Enter the no. of elements in SET A: ");
    scanf("%d",&n1);

    printf("\n Enter the no. of elements in set B:");
    scanf("%d",&n2);

    int set1[n1], set2[n2], uni[n1+n2];
    printf("\n Enter elements in SET A: ");
    for(i=0; i<n1; i++)
    {
        scanf("%d",&set1[i]);
    }

    printf("\n Enter elements in SET B: ");
    for(i=0; i<n2; i++)
    {
        scanf("%d",&set2[i]);
    }

    //Union Calculation
    //Copying 1st set elements in Union Set
    for(i=0; i<n1; i++)
    {
        uni[j] = set1[i];
        j++;
    }

    //Copying 2nd set elements in Union Set
    for(i=0; i<n2; i++)
    {
        uni[j] = set2[i];
        j++;
    }

    //Performing Sorting in Union Set
    sort(n1+n1, uni);

    //Removing Repeated Elements from Union Set
    size = remove_repeated(n1 + n2, uni);

    printf("\n Union set A U B = { ");
    for(i=0; i<size; i++)
        printf("%d, ",uni[i]);
    printf("}\n");

}

// Sorting of Union Set Logic
void sort(int size, int a[])
{
    int i, j, temp;

    for(i=0; i<size; i++)
    {
        for(j=i+1; j<size; j++)
        {
            if(a[i]>a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

// Removing Repeating element from Union Set logic
int remove_repeated(int size, int a[])
{
    int i, j, k;
    for(i=0; i<size; i++)
    {
        for(j=i+1; j<size; j++)
        {
            if(a[i] == a[j])
            {
                for(k=j; k<size; k++)
                {
                    a[k] = a[k+1];
                }
                size--;
            }
            else
            {
                j++;
            }
        }
    }
}










