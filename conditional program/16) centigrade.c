#include<stdio.h>

int main()
{
    int centigrade;
    printf("\nEnter the Centigrade: ");
    scanf("%d",&centigrade);

    if(centigrade<0)
      printf("\n**Freezing Weather**");

    else if(centigrade>=0 && centigrade<10)
      printf("\n**Very Cold Weather**");

    else if(centigrade>=10 && centigrade<20)
      printf("\n**Cold Weather**");

    else if(centigrade>=20 && centigrade<30)
      printf("\n**Normal Temperature**");

    else if(centigrade>=30 && centigrade<40)
      printf("\n**Hot Weather**");
    
    else if(centigrade>=40)
      printf("\n**Very Hot Weather**");
}