#include<stdio.h>

int main()
{
    int num[10], oddNo=0, evenNO=0, oddSum=0, evenSum=0, i;

    printf("\nEnter the values of numbers...\n");
    for(i=0; i<10; i++)
    {
        printf("num[%d]: ",i+1);
        scanf("%d",&num[i]);
    }

    printf("\nValues of 10 numbers:\t");
    for(i=0; i<10; i++)
    {
        printf(" %d,",num[i]);
    }

    for(i=0; i<10; i++)
    {
        if(num[i]%2==0)
        {
            evenSum += num[i];
            evenNO++;
        }
        else
        {
            oddSum += num[i];
            oddNo++;
        }
    }
    printf("\n\nTotal %d Even numbers are available, Sum = %d",evenNO,evenSum);
    printf("\nTotal %d Odd numbers are available, Sum = %d",oddNo,oddSum);
    return 0;
}
