#include <stdio.h>

int main()
{
    int num;
    printf("Enter the Number: ");
    scanf("%d", &num);

    (num%2==0)?printf("\n%d is Even number",num):printf("\n%d is Odd number",num);
    return 0;
}