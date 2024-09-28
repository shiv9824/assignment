#include <stdio.h>

int main()
{
    int num[5], i, oddNo=0, evenNo=0;

    printf("\nEnter the 5 numbers...\n");
    for (i = 0; i < 5; i++)
    {
        printf("Number[%d]: ", i + 1);
        scanf("%d", &num[i]);
    }

    i = 0;
    while (i < 5)
    {
        if (num[i] % 2 == 0)
            evenNo++;

        else
            oddNo++;

        i++;
    }

    i = 0;
    printf("\nNumbers:     ");
    while (i < 5)
    {
        printf(" %d,", num[i]);
        i++;
    }
    printf("\n\nTotal %d Odd numbers are available",oddNo);
    printf("\nTotal %d Even numbers are available",evenNo);
    return 0;
}