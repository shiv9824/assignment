#include <stdio.h>
#include <string.h>

void reverseStr(char[], int);

int main()
{
    char str[20];
    printf("\nEnter the String: ");
    scanf("%s", &str);

    printf("\nOriginal: %s", str);
    printf("\nReverse: ");
    reverseStr(str, strlen(str) - 1);
    return 0;
}

void reverseStr(char str[], int n)
{
    if (n < 0)
        return;

    printf("%c", str[n]);
    reverseStr(str, n - 1);
}