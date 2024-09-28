#include<stdio.h>

int main()
{
    int month;
    printf("\nEnter the month number: ");
    scanf("%d",&month);

    if(month==2)
      printf("\n28 no. of days in month %d",month);

    else if(month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12)
      printf("\n31 no. of days in month %d",month);
    
    else if(month==4 || month==6 || month==9 || month==11)
      printf("\n30 no. of days in month %d",month);

    else
      printf("\n**Invalid month**");


    return 0;
}