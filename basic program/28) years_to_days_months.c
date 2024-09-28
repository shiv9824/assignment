#include<stdio.h>
#include<conio.h>

int main()
{
    int days, months, years;
    printf("Enter the no. of years: ");
    scanf("%d",&years);

    months = years*12;
    days = years*365;

    printf("\nTotal Years: %d",years);
    printf("\n%d months and %d days.",months,days);
    return 0;
}