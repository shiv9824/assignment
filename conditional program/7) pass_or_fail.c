#include <stdio.h>

int main()
{
    int marks;
    printf("Enter the Marks(out of 100): ");
    scanf("%d", &marks);

    if (marks >= 33)
        printf("\nStudent is passed");

    else
        printf("\nStudent is failed");
    return 0;
}