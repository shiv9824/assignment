#include<stdio.h>
#include<conio.h>

int main()
{
    int students;
    printf("\nEnter the number of Students: ");
    scanf("%d",&students);

    printf("\nIf You want to give 5 apples to each student, then You need\nTotal %d apples\n",(students*5));
    return 0;
}