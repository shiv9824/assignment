#include <stdio.h>
#include <conio.h>

int main()
{
    float A,l,w;
    printf("\nEnter the Length of the Rectangle: ");
    scanf("%f",&l);
    printf("Enter the Width of the Rectangle: ");
    scanf("%f",&w);

    A=l*w;

    printf("\nArea of the Rectangle = %f\n",A);
    return 0;
}