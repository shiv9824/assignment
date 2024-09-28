#include<stdio.h>

int main()
{
    int num, i, fact=1;
    printf("\nEnter the number: ");
    scanf("%d",&num);

    printf("\n");
    i = 2;
    while(i<=num) {
        fact *= i;
        i++;
    }
    printf("Factorial of %d is: %d\n",num,fact);
    return 0;
}