#include <stdio.h>

int main()
{
    int num1, num2, num3, min;
    printf("Enter the num1: ");
    scanf("%d", &num1);
    printf("Enter the num2: ");
    scanf("%d", &num2);
    printf("Enter the num3: ");
    scanf("%d", &num3);

    min = (num1<num2 && num1<num3)?num1:(num2<num1 && num2<num3)?num2:num3;
    printf("\n%d is Minimum among(%d,%d,%d)",min,num1,num2,num3);
    return 0;
}