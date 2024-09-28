#include <stdio.h>

int main()
{
    int i, j, k=01;

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 10; j++)
        {
            printf(" %02d ",k);
            k++;
        }
        printf("\n");
    }
    return 0;
}