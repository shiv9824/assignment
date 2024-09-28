#include <stdio.h>

int main()
{
    int m;
    printf("Enter the value of m: ");
    scanf("%d", &m);

    if(m>0)
      printf("\nValue of m=1");
    else if(m==0)
      printf("\nValue of m=0");
    else
      printf("\nValue of m=-1");
    return 0;
}