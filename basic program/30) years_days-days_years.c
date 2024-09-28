#include<stdio.h>
#include<conio.h>

int main()
{
    int days, years;
    printf("Enter the no. of Years: ");
    scanf("%d",&years);

    days = years*365;

    printf("\nTotal Years: %d",years);
    printf("\n%d days.",days);

    printf("\n\nEnter the no. of Days: ");
    scanf("%d",&days);

    years = days/365;
    printf("\nTotal Days: %d",days);

    days = days%365;
    printf("\n%d years and %d days",years,days);
    return 0;
}