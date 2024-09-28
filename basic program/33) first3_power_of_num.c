#include<stdio.h>
#include<conio.h>

int main()
{
    int num;
    printf("Enter the Number: ");
    scanf("%d",&num);

    printf("\n(%d^1): %d",num,num);
    printf("\n(%d^2): %d",num,(num*num));
    printf("\n(%d^3): %d",num,(num*num*num));
    return 0;
}