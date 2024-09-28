#include <stdio.h>

int main()
{
    float height;
 
    printf("\nEnter the Height (in centimetres): ");
    scanf("%f", &height);
    
    if (height > 165.0 && height <= 195.0)
        printf("\nTaller");

    else if (height >= 150.0 && height <= 165.0)
        printf("\nAverage Height");
    else
        printf("\nNormal height");

    return 0;
}