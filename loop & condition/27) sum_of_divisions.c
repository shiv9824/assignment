#include<stdio.h>

int main()
{
    float num, i, sum = 0;
    printf("\nEnter the number: ");
    scanf("%f",&num);

    printf("\nN numbers:  ");
    for(i=1; i<=num; i++)
    {
        printf(" %.0f,",i);
        sum += (i/(i+1));
    }
    
    printf("\n\nSum of division formula: (1/2) + (2/3) + (3/4) + (4/5) + ... + (n/n+1)");
    printf("\n\nSum = %.4f\n",sum);
    return 0;
}