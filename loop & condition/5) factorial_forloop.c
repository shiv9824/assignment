#include<stdio.h>

int main()
{
    int num, i, fact=1;
    printf("\nEnter the number: ");
    scanf("%d",&num);

    printf("\n");
    for(i=num; i>=2; i--)
    {
        fact *= i;
    }
    printf("Factorial of %d is: %d\n",num,fact);
    return 0;
}