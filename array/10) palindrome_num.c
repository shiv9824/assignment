#include<stdio.h>

void checkPali(int);

int main()
{
    int num;
    printf("\nEnter a number: ");
    scanf("%d",&num);

    checkPali(num);
    return 0;
}

void checkPali(int n)
{
    int temp=n, rem, rev=0;
    while(temp>0)
    {
        rem = temp%10;
        rev = (rev*10)+rem;
        temp /= 10;
    }

    printf("\nOriginal no.: %d",n);
    printf("\nReversed no.: %d",rev);

    if(rev == n)
      printf("\n\n%d is a Palindrome number.",n);

    else
      printf("\n\n%d is not a Palindrome number.",n);
}