#include <stdio.h>

int main()
{
    int arr[10], size, i, sum = 0;
    printf("\nEnter the size of an array = ");
    scanf("%d", &size);

    printf("\nEnter Array elements...\n");
    for (i = 0; i < size; i++)
    {
        printf("Element[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }

    printf("\nArray elements:  ");
    for (i = 0; i < size; i++)
    {
        printf(" %d,", arr[i]);
    }

    printf("\nAddition of all the elements is = %d", sum);
    return 0;
}