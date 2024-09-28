#include <stdio.h>

int main()
{
    char name[5][10];
    int i;
    printf("\nEnter 5 names...\n");
    for(i=0; i<5; i++)
    {
        printf("Name[%d]: ",i+1);
        scanf("%s",&name[i]);
    }

    printf("\n5 Names...\n");
    for(i=0; i<5; i++)
    {
        printf("%d) %s\n",i+1,name[i]);
    }
    return 0;
}