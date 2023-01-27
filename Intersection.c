// Write a program in C to create two sets and perform the Intersectison operation on sets.

#include<stdio.h>
int remove_repeated(int size, int a[]);
void sort(int size, int a[]);

main()
{
    int n1, n2, size, inter_size, i, j=0, k ;

    //Entering Size of Set & Elements in Set
    printf("\n Enter the no. of elements in SET A: ");
    scanf("%d",&n1);

    printf("\n Enter the no. of elements in set B: ");
    scanf("%d",&n2);

    int set1[n1], set2[n2];

    if(n1<n2)
    {
        inter_size=n1;
    }
    else if(n1>n2)
    {
        inter_size=n2;
    }
    else
    {
        inter_size=n1;
    }

    int inter_set[inter_size];

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

    //Intersection Calculation

    k=0;
    for(i=0; i<n1; i++)
    {
        for(j=0; j<n2; j++)
        {
            if(set1[i]==set2[j])
            {
                inter_set[k]=set1[i];
                k++;
            }
        }
    }

    //Performing Sorting in Intersection Set
    sort(k,inter_set);

    //Removing Repeated Elements from Intersection Set
    size = remove_repeated(k,inter_set);

    //Printing Intersection Set
    printf("\n Intersection set A Intersection B = { ");
    if(size>0)
    {
        for(i=0; i<size; i++)
            printf("%d, ",inter_set[i]);
    }
    else
    {
        printf("No intersection");
    }
    printf(" }\n");
}

// Sorting of Intersection Set Logic
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

// Removing Repeating element from Intersection Set logic
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
