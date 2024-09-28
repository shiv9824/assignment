#include <stdio.h>

void add();
void sub();
void mul();
void div();
void mod();

int main()
{
    int choice;
    printf("\nChoices...");
    printf("\n1) Addition");
    printf("\n2) Subtarction");
    printf("\n3) Multiplication");
    printf("\n4) Division");
    printf("\n5) Remainder(Modulo)");

    printf("\n\nEnter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        add();
        break;

    case 2:
        sub();
        break;

    case 3:
        mul();
        break;

    case 4:
        div();
        break;

    case 5:
        mod();
        break;

    default:
        break;
    }
    return 0;
}

void add()
{
    int num1, num2;
    printf("\nEnter the num1: ");
    scanf("%d", &num1);
    printf("Enter the num2: ");
    scanf("%d", &num2);

    printf("%d + %d = %d",num1,num2,num1+num2);
}
void sub()
{
    int num1, num2;
    printf("\nEnter the num1: ");
    scanf("%d", &num1);
    printf("Enter the num2: ");
    scanf("%d", &num2);

    printf("%d - %d = %d",num1,num2,num1-num2);
}
void mul()
{
    int num1, num2;
    printf("\nEnter the num1: ");
    scanf("%d", &num1);
    printf("Enter the num2: ");
    scanf("%d", &num2);

    printf("%d * %d = %d",num1,num2,num1*num2);
}
void div()
{
    int num1, num2;
    printf("\nEnter the num1: ");
    scanf("%d", &num1);
    printf("Enter the num2: ");
    scanf("%d", &num2);

    printf("%d/%d = %d",num1,num2,num1/num2);
}
void mod()
{
    int num1, num2;
    printf("\nEnter the num1: ");
    scanf("%d", &num1);
    printf("Enter the num2: ");
    scanf("%d", &num2);

    printf("%d%%%d = %d",num1,num2,num1%num2);
}