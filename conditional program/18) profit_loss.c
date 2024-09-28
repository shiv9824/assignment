#include<stdio.h>

int main()
{
    int costPrice, sellPrice;
    printf("\nEnter the Cost of the product: ");
    scanf("%d",&costPrice);
    printf("Enter the Sell Price: ");
    scanf("%d",&sellPrice);

    if(sellPrice>costPrice)
      printf("\nYou get Rs.%d profit",(sellPrice-costPrice));

    else
      printf("\nYou lossed Rs.%d",(costPrice-sellPrice));

    return 0;
}