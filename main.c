#include<stdio.h>
#include<math.h>

int main()
{
    int set[10], size, pow_set_size, i, j;
    printf("\n\n\n\tEnter the size of the SET: ");
    scanf("%d", & size);
    printf("\tEnter the elements: ");
    for(i=0; i<size; i++)
        scanf("%d",&set[i]);

    pow_set_size = pow(2, size);
    printf("\tPower Set: {{},");
    for(i=1; i<pow_set_size; i++)
    {
        printf(" {");
        for(j=0; j<size; j++)
            if(i & (1<<j))
                printf("%d,", set[j]);

        printf("},");
    }
    printf("}\n\n\n");
}
