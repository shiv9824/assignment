#include <stdio.h>

int findMax(int[], int);

int main()
{
    int arr[] = {2, 4, 1, 6, 3, 8}, i, size=6;

    printf("\nArray elements:  ");
    for (i = 0; i < size; i++)
    {
        printf(" %d,", arr[i]);
    }
    printf("\n\nMaximum = %d", findMax(arr,size));
    return 0;
}

int findMax(int arr[], int size)
{
    int max = 0, i;
    for (i = 0; i <size; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}