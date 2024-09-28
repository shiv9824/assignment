#include<stdio.h>
#include<conio.h>

int main()
{
    int days, months;
    printf("Enter the no. of days: ");
    scanf("%d",&days);


    months = days/30;
    days = days%30;
    printf("\n%d month and %d day.",months,days);
    return 0;
}