#include<stdio.h>
#include<conio.h>

int main()
{
    int num1,num2,temp;
    printf("\nEnter the num1: ");
    scanf("%d",&num1);
    printf("Enter the num2: ");
    scanf("%d",&num2);

    printf("\nBefore swapping...\n");
    printf("num1 = %d, num2 = %d\n",num1,num2);

    num1 = num1*num2;
    num2 = num1/num2;
    num1 = num1/num2;
    printf("\nSwapping with using multiplication & division...\n");
    printf("num1 = %d, num2 = %d\n",num1,num2);
    return 0;
}