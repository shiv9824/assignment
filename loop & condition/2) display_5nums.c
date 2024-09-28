#include<stdio.h>

int main()
{
    int num[5];

    printf("\nEnter the values of numbers...\n");
    for(int i=0; i<5; i++)
    {
        printf("num[%d]: ",i+1);
        scanf("%d",&num[i]);
    }

    printf("\nValues of 5 numbers:\t");
    for(int i=0; i<5; i++)
    {
        printf(" %d,",num[i]);
    }
    return 0;
}
