#include<stdio.h>

int main()
{
    int num, i, temp, rev=0, rem;
    printf("\nEnter the number: ");
    scanf("%d",&num);

    temp = num;

    while (temp>0)
    {
        rem = temp%10;
        rev = (rev*10)+rem;
        temp /= 10;
    }
    printf("\nOriginal number: %d",num);
    printf("\nReverse number: %d",rev);
    return 0;
}