// 8. Write a program to find the factorial of any number

#include <stdio.h>

int main()
{
    int num, fact = 1;
    printf("\n\n\tEnter the no.: ");
    scanf("%d", &num);

    for(int i=1; i<=num; i++)
        fact = fact * i;
    printf("\n\tFactorial of %d = %d", num, fact);
    printf("\n\n\n");
    getch();
}
