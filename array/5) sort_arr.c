#include <stdio.h>

void sortAsc(int[], int);
void sortDesc(int[], int);

int main()
{
    int size, a[100], choice, i, j;
    printf("\nEnter the size of an array: ");
    scanf("%d", &size);

    printf("\n");
    for (i = 0; i < size; i++)
    {
        printf("Element[%d] = ", i);
        scanf("%d", &a[i]);
    }

    printf("\nChoices...\n");
    printf("1) Sort in Asceding order");
    printf("\n2) Sort in Desceding order");
    printf("\n\nEnter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        sortAsc(a, size);
        break;

    case 2:
        sortDesc(a, size);
        break;

    default:
        break;
    }

    return 0;
}

void sortAsc(int a[], int size)
{
    int i, j, temp;
    printf("\nOriginal array =  ");
    for (i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }

    printf("\nAcending ordered array = ");
    for (i = 0; i < size; i++)
    {
        for (j = i + 1; j < size; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    for (i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }
}
void sortDesc(int a[], int size)
{
    int i, j, temp;
    printf("\nOriginal array =  ");
    for (i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }

    printf("\nDecending ordered array = ");
    for (i = 0; i < size; i++)
    {
        for (j = i + 1; j < size; j++)
        {
            if (a[i] < a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    for (i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }
}