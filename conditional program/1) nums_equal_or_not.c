#include <stdio.h>

int main()
{
    int num1, num2;
    printf("Enter the num1: ");
    scanf("%d", &num1);
    printf("Enter the num2: ");
    scanf("%d", &num2);

    if (num1 == num2)
        printf("\nnum1(%d) and num2(%d) are equals", num1, num2);
    else
        printf("\nnum1(%d) and num2(%d) are not equals", num1, num2);
    return 0;
}