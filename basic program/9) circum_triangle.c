#include <stdio.h>
#include <conio.h>

int main()
{
    float triangle,a,b,c;
    printf("\nEnter the side1 of the Triangle: ");
    scanf("%f",&a);
    printf("Enter the side2 of the Triangle: ");
    scanf("%f",&b);
    printf("Enter the side2 of the Triangle: ");
    scanf("%f",&c);

    triangle=a+b+c;

    printf("\nCircumference of the Triangle = %f\n",triangle);
    return 0;
}