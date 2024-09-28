#include <stdio.h>
#include <conio.h>

int main()
{
    float radius, pi = 3.1416;

    printf("\nEnter the Radius of the circle: ");
    scanf("%f", &radius);

    printf("\nArea of the circle = %f", (pi * radius * radius));
    printf("\n\nCircumference of the circle = %f\n", (2*pi * radius));

    return 0;
}