#include<stdio.h>

int main()
{
    int num, i, sum=0;
    printf("\nEnter the number: ");
    scanf("%d",&num);

    printf("\nN numbers:  ");

    for(i=1; i<=num; i++)
    {
        printf(" %d,",i);
        sum += (i*i);
    }
    
    printf("\n\nSum of Square formula: (1*1)+(2*2)+(3*3)+(4*4)+.....+(n*n)");
    printf("\n\nSum = %d\n",sum);
    return 0;
}