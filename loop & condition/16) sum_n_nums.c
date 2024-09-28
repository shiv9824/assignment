#include <stdio.h>

int main()
{
    int num, i=1, sum=0;
    printf("\nEnter the number: ");
    scanf("%d",&num);

    while(i<=num)
    {
      sum += i;
      i++;
    }
    printf("\nSum of first %d nums = %d",num,sum);
    return 0;
}