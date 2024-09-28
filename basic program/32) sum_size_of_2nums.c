#include<stdio.h>
#include<conio.h>

int main()
{
    int num1, num2, sum, size=0, temp;
    printf("Enter the num1: ");
    scanf("%d",&num1);
    printf("Enter the num2: ");
    scanf("%d",&num2);

    sum = num1+num2;
    printf("\nSum = %d",sum);

    temp=sum;
    while(temp>0)
    {
        temp /= 10;
        size++;
    }
    printf("\nSize of %d: %d",sum,size);
    return 0;
}