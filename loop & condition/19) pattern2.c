#include <stdio.h>

int main()
{
    char k = 'A';
    int i, j;

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf(" %c",k);
            k++;
        }
        printf("\n");
    }
    return 0;
}