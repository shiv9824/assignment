#include <stdio.h>

int main()
{
    int i=1, sum=0;

    while(i<=10)
    {
      sum += i;
      i++;
    }
    printf("\nSum of first 10 nums = %d",sum);
    return 0;
}