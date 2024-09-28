#include <stdio.h>
#include <conio.h>

int main()
{
    float A,b,h;
    printf("\nEnter the Base of Triangle: ");
    scanf("%f",&b);
    printf("Enter the Height of Triangle: ");
    scanf("%f",&h);

    A=0.5*b*h;

    printf("\nArea of the Triangle = %f\n",A);
    return 0;
}