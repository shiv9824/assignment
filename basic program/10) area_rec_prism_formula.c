#include <stdio.h>
#include <conio.h>

int main()
{
    float A,l,w,h;
    printf("\nEnter the Length of the Rectangle: ");
    scanf("%f",&l);
    printf("Enter the Width of the Rectangle: ");
    scanf("%f",&w);
    printf("Enter the Height of the Rectangle: ");
    scanf("%f",&h);

    A=2*((w*l)+(h*l)+(h*w));

    printf("\nArea of the Rectangle using prism formula = %f\n",A);
    return 0;
}