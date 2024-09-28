#include<stdio.h>
#include<conio.h>

int main()
{
    int km, metre;
    printf("Enter the no. of Kilometres: ");
    scanf("%d",&km);

    metre = km*1000;

    printf("\nKilometres: %dkm",km);
    printf("\nMetres: %dm",metre);
    return 0;
}