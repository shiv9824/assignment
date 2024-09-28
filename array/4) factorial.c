#include<stdio.h>

int findFact(int);

int main()
{
    int num;
    printf("\nEnter the number: ");
    scanf("%d",&num);

    printf("\nFactorial of %d is: %d\n",num,findFact(num));
    return 0;
}

int findFact(int n)
{
    if(n==0 || n==1)
    {
        return 1;
    }
    return n*findFact(n-1);
}