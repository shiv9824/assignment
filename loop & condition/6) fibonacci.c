#include<stdio.h>

int main()
{
    int n1=0, n2=1, n3=0, num, i;
    printf("\nEnter the number: ");
    scanf("%d",&num);

    printf("\n");
    printf("Fibonacci series: 0, 1,");
    
    while(n3<num)
    {
        n3 = n1+n2;
        n1 = n2;
        n2 = n3;
        printf(" %d,",n3);
    }
    return 0;
}