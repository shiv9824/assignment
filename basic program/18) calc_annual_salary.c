#include <stdio.h>
#include <conio.h>

int main()
{
    int hours, hourly_sal, total_hour, annual_sal;
    printf("\nEnter the no. of hours you worked in a day: ");
    scanf("%d", &hours);
    printf("Enter your hourly salary: ");
    scanf("%d", &hourly_sal);

    total_hour = hours * 7 * 52;
    annual_sal = total_hour * hourly_sal;
    printf("\nAnnual Salary = %d\n", annual_sal);
}