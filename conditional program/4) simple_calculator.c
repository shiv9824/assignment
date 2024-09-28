#include <stdio.h>

int main()
{
    int num1, num2, choice;

    printf("\nChoices...");
    printf("\n1) Addition");
    printf("\n2) Subtraction");
    printf("\n3) Multiplication");
    printf("\n4) Division");
    printf("\n5) Remainder(Modulo)");

    printf("\n\nEnter your Choice: ");
    scanf("%d", &choice);

    if(choice==1)
    {
        printf("\nEnter the num1: ");
        scanf("%d",&num1);
        printf("Enter the num2: ");
        scanf("%d",&num2);

        printf("\n%d + %d = %d",num1,num2,(num1+num2));
    }
    else if(choice==2)
    {
        printf("\nEnter the num1: ");
        scanf("%d",&num1);
        printf("Enter the num2: ");
        scanf("%d",&num2);

        printf("\n%d - %d = %d",num1,num2,(num1-num2));
    }
    else if(choice==3)
    {
        printf("\nEnter the num1: ");
        scanf("%d",&num1);
        printf("Enter the num2: ");
        scanf("%d",&num2);

        printf("\n%d * %d = %d",num1,num2,(num1*num2));
    }
    else if(choice==4)
    {
        printf("\nEnter the num1: ");
        scanf("%d",&num1);
        printf("Enter the num2: ");
        scanf("%d",&num2);

        printf("\n%d/%d = %d",num1,num2,(num1/num2));
    }
    else if(choice==5)
    {
        printf("\nEnter the num1: ");
        scanf("%d",&num1);
        printf("Enter the num2: ");
        scanf("%d",&num2);

        printf("\n%d%%%d = %d",num1,num2,(num1%num2));
    }
    return 0;
}