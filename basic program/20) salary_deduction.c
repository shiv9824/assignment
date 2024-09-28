#include<stdio.h>
#include<conio.h>

int main()
{
    float msalary,rem_sal,ins_premium=0.10,loan_ins=0.10;
    printf("\nEnter your monthly salary: ");
    scanf("%f",&msalary);

    rem_sal = msalary-((msalary*ins_premium)+(msalary*loan_ins));
    printf("\nRemaining Salary = %d",(int)rem_sal);
    return 0;
}