#include <stdio.h>

int main()
{
    char student[5][20];
    int i;

    printf("\nEnter 5 Students name\n");
    for (i = 0; i < 5; i++)
    {
        printf("Student[%d]: ", i + 1);
        scanf("%s", &student[i]);
    }

    printf("\nStudents list...\n");
    for (i = 0; i < 5; i++)
    {
        printf("Student[%d]: %s\n", i + 1, student[i]);
    }
    return 0;
}