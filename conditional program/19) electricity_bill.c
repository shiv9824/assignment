#include<stdio.h>

int main()
{
    int cusId;
    float unit, total;
    char cusName[20];

    printf("\nEnter the Customer ID: ");
    scanf("%d",&cusId);
    printf("Enter the Customer Name: ");
    scanf("%s",&cusName);
    printf("Enter the Units consumed by the customer: ");
    scanf("%f",&unit);

    if(unit<350)
      total = unit*1.2;

    else if(unit>=350 && unit<600)
      total = unit*1.5;

    else if(unit>=600 && unit<800)
      total = unit*1.8;

    else if(unit>=800)
      total = unit*2;


    if(total>800)
      total += total*0.18;

    else if(total<=256)
    {
      printf("\nBill must be greater than Rs.256");
      return 0;
    }

    printf("\nElectricity Bill Details...\n");
    printf("Customer ID: %d",cusId);
    printf("\nCustomer Name: %s",cusName);
    printf("\nUnits consumed by the Customer: %f units",unit);

    printf("\n\nTotal Amount to be paid: Rs.%f",total);

    return 0;
}