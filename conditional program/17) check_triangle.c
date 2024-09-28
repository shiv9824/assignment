#include<stdio.h>

int main()
{
    int angA, angB, angC, sum;
    printf("\nEnter 1st Angle: ");
    scanf("%d",&angA);
    printf("\nEnter 2ns Angle: ");
    scanf("%d",&angB);
    printf("\nEnter 3rd Angle: ");
    scanf("%d",&angC);

    sum = angA+angB+angC;
    
    if(sum == 180)
      printf("\n**(%d,%d,%d) can form Triangle**",angA,angB,angC);

    else
      printf("\n**(%d,%d,%d) can not form Triangle**",angA,angB,angC);

    return 0;
}