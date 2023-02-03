// 6. Write a program in C to Display the Boolean Truth Table for AND, OR , NOT .
#include<stdio.h>


int main()
{
    int a[2][2],b[2][2],c[2];
    int i,j;
    for(i=0; i<=1; i++)
    {
        for(j=0; j<=1; j++)
        {
            a[i][j]=(i&&j);
            b[i][j]=(i||j);
        }
    }

    for(i=0; i<=1; i++)
    {
        c[i]=(!i);
    }

        printf("\n\n\nThe Truth Table for AND Gate( && ) is..\n");
        printf("--------------------------------------------\n");
        printf("   A  :  B     :    C=A&&B\n");
        printf("--------------------------------------------\n");
        for(i=0; i<=1; i++)
        {
            for(j=0; j<=1; j++)
            {
                printf("   %d  :  %d     :      %d\n",i,j,a[i][j]);
            }
        }

        printf("--------------------------------------------\n\n");
        printf("\nThe Truth Table for OR Gate( || ) is..\n");
        printf("--------------------------------------------\n");
        printf("   A  :  B     :    C=A||B\n");
        printf("--------------------------------------------\n");
        for(i=0; i<=1; i++)
        {
            for(j=0; j<=1; j++)
            {
                printf("   %d  :  %d     :      %d\n",i,j,b[i][j]);
            }
        }

    printf("--------------------------------------------\n\n");
    printf("\nThe Truth Table for NOT Gate (!) is..\n");
    printf("--------------------------------------------\n");
    printf("   A   :  B = !A\n");
    printf("--------------------------------------------\n");
    for(i=0; i<=1; i++)
    {
        printf("   %d  :    %d\n", i, c[i]);
    }
    printf("--------------------------------------------\n");
    printf("--------------------------------------------\n");

    return 0;
}
