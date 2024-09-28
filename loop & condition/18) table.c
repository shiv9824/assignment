#include<stdio.h>

int main()
{
    int num, i;
    printf("\nEnter the number: ");
    scanf("%d",&num);

    printf("\n");
    for(i=1; i<=10; i++)
    {
        printf("%d * %d = %d\n",num,i,(num*i));
    }
    return 0;
}