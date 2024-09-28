#include <stdio.h>

int main()
{
    int num[5], i, j;
    long fact[5] = {1, 1, 1, 1, 1};

    printf("\nEnter the 5 numbers...\n");
    for (i = 0; i < 5; i++)
    {
        printf("Number[%d]: ", i + 1);
        scanf("%d", &num[i]);
    }

    for (i = 0; i < 5; i++)
    {
        for (j = 2; j <= num[i]; j++)
        {
            fact[i] *= j;
        }
    }

    printf("\nFactorials...\n");
    for (i = 0; i < 5; i++)
    {
        printf("Number(%d) is: %d\n", num[i], fact[i]);
    }
    return 0;
}