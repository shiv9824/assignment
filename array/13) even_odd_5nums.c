#include <stdio.h>

int main()
{
    int num[5], i;
    printf("\nEnter the numbers....\n");
    for (i = 0; i < 5; i++)
    {
        printf("Number[%d]: ", i + 1);
        scanf("%d", &num[i]);
    }
    printf("\nNumbers:  ");
    for (i = 0; i < 5; i++)
    {
        printf(" %d,", num[i]);
    }
    printf("\n\nODD Numbers: ");
    for (i = 0; i < 5; i++)
    {
        if (num[i] % 2 != 0)
            printf(" %d,", num[i]);
    }
    printf("\nEVEN Numbers: ");
    for (i = 0; i < 5; i++)
    {
        if (num[i] % 2 == 0)
            printf(" %d,", num[i]);
    }

    return 0;
}