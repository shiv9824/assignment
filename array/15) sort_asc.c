#include <stdio.h>
int main()
{
    int size, arr[10], i, j, temp;
    printf("\nEnter the size of an array = ");
    scanf("%d", &size);

    printf("\nEnter Array elements...\n");
    for (i = 0; i < size; i++)
    {
        printf("Element[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    printf("\nOriginal array = ");
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\nAcending ordered array = ");
    for (i = 0; i < size; i++)
    {
        for (j = i + 1; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}