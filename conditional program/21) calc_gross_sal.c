#include<stdio.h>

int main()
{
    int bs, gs, hra, da;
    printf("\nEnter the Basic Salary: ");
    scanf("%d",&bs);

    if(bs<=10000)
    {
        hra = bs*0.2;
        da = bs*0.8;
        gs = bs+hra+da;
    }
    else if(bs<=20000)
    {
        hra = bs*0.25;
        da = bs*0.9;
        gs = bs+hra+da;
    }
    else if(bs>20000) {
        hra = bs*0.3;
        da = bs*0.95;
        gs = bs+hra+da;
    }
    printf("\nBasic Salary = %d",bs);
    printf("\nGross Salary = %d",gs);
    return 0;
}