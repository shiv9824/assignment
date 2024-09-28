#include<stdio.h>

int main()
{
    int num, i, j, sum=0;
    printf("\nEnter the number: ");
    scanf("%d",&num);

    printf("\nN numbers:  ");

    for(i=1; i<=num; i++)
    {
        printf(" %d,",i);
    }
    for (i = 1; i <= num; i++)
    {
        for (j = 1; j <= i; j++)
        {
            sum += j;
        }
    }
    printf("\n\nSum formula: (1) + (1 + 2) + (1 + 2 + 3) + ... + (1 + 2 + 3 + 4 + ... + n)");
    printf("\n\nSum: =  %d\n",sum);
    return 0;
}