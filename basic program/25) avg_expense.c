#include<stdio.h>
#include<conio.h>

int main()
{
    int exp[5], avg_exp, total_exp=0;

    printf("Enter the Expenses...\n");
    for(int i=0; i<5; i++)
    {
        printf("Expense[%d]: ",i+1);
        scanf("%d",&exp[i]);
        total_exp += exp[i];
    }
    avg_exp = total_exp/5;
    printf("\nAverage Expense = %d",avg_exp);

    return 0;
}