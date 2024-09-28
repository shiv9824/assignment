#include <stdio.h>

int main()
{
    int num;
    printf("Enter the Number: ");
    scanf("%d", &num);

    if (num>0)
        printf("\n%d is Positive", num);
    else if (num==0)
        printf("\n%d is Zero", num);
    else
        printf("\n%d is Negative", num);
    return 0;
}