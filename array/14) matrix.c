#include <stdio.h>

int main()
{
    int i, j, num[5][5], rows, cols;
    printf("\nEnter the no. of Rows: ");
    scanf("%d",&rows);
    printf("Enter the no. of Columns: ");
    scanf("%d",&cols);

    printf("\nEnter Array elements...\n");
    for (i = 0; i < rows; i++)
    {
        printf("Row - %d\n",i);
        printf("_____________________\n");
        for (j = 0; j < cols; j++)
        {
            printf("Matrix[%d][%d]: ",i,j);
            scanf("%d",&num[i][j]);
        }
        printf("\n");
    }

    printf("Matrix....\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            printf(" %d", num[i][j]);
        }
        printf("\n");
    }

    return 0;
}