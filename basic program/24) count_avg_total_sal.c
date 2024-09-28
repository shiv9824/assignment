#include<stdio.h>
#include<conio.h>

int main()
{
    char emp[5][20];
    int emp_sal[10], avg_sal, total_sal=0;

    for(int i=0; i<5; i++)
    {
        printf("\nEnter the details for Employee[%d]...",i+1);
        printf("\nEnter the Name: ");
        scanf("%s",&emp[i]);
        printf("Enter the Salary: ");
        scanf("%d",&emp_sal[i]);
        total_sal += emp_sal[i];
    }
    for(int i=0; i<5; i++)
    {
        printf("%d) Name: %s\n",i+1,emp[i]);
        printf("   Salary: %d\n",emp_sal[i]);
    }
    avg_sal = total_sal/5;
    printf("\n\nTotal Salary = %d\n",total_sal);
    printf("Average Salary = %d\n",avg_sal);

    return 0;
}