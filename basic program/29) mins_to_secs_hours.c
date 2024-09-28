#include<stdio.h>
#include<conio.h>

int main()
{
    int sec, min, hour;
    printf("Enter the no. of minutes: ");
    scanf("%d",&min);

    sec = min*60;
    hour = min/60;
    printf("\nTotal minutes: %d",min);
    
    min = min%60;

    printf("\n%d hours and %d minutes",hour,min);
    printf("\n%d seconds",sec);
    return 0;
}