#include<stdio.h>
#include<conio.h>

int main()
{
    char fname[20],lname[20];
    printf("\nEnter First and Last Name of the School: ");
    scanf("%s %s",&fname,&lname);

    printf("\nSchool Name in Abbreviated form\n");
    printf("%c. %c. School",fname[0],lname[0]);
}