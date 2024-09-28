#include <stdio.h>
#include <conio.h>

int main()
{
    int num1, num2, choice;

    printf("Choices....");
    printf("\n1) Addition");
    printf("\n2) Subtraction");
    printf("\n3) Multiplication");
    printf("\n4) Division");
    printf("\n5) Modulo(Remainder)");
    printf("\n\nEnter the your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("\nEnter the num1: ");
        scanf("%d", &num1);
        printf("Enter the num2: ");
        scanf("%d", &num2);
        printf("\nAddition of %d and %d = %d", num1, num2, (num1 + num2));
        break;

    case 2:
        printf("\nEnter the num1: ");
        scanf("%d", &num1);
        printf("Enter the num2: ");
        scanf("%d", &num2);
        printf("\nSubtraction of %d and %d = %d", num1, num2, (num1 - num2));
        break;

    case 3:
        printf("\nEnter the num1: ");
        scanf("%d", &num1);
        printf("Enter the num2: ");
        scanf("%d", &num2);
        printf("\nMultiplication of %d and %d = %d", num1, num2, (num1 * num2));
        break;

    case 4:
        printf("\nEnter the num1: ");
        scanf("%d", &num1);
        printf("Enter the num2: ");
        scanf("%d", &num2);
        printf("\nDivision of %d and %d = %d", num1, num2, (num1/num2));
        break;

    case 5:
        printf("\nEnter the num1: ");
        scanf("%d", &num1);
        printf("Enter the num2: ");
        scanf("%d", &num2);
        printf("\nRemainder of %d and %d = %d", num1, num2, (num1%num2));
        break;
    }
    return 0;
}