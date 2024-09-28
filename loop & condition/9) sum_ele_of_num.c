#include<stdio.h>

int main()
{
    int num, temp, rem, sum=0;
    printf("\nEnter the number: ");
    scanf("%d",&num);

    temp = num;
    while(temp>0)
    {
        rem = temp%10;
        sum += rem;
        temp /= 10;
    }
    printf("\nSum of elements of %d is: %d",num,sum);
    return 0;
}