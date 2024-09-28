#include <stdio.h>

int main()
{
    char ch;
    printf("Enter the Character: ");
    scanf("%c", &ch);

    if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        printf("\n%c is a Vowel", ch);

    else if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        printf("\n%c is a Vowel", ch);

    else
        printf("\n%c is not a Vowel",ch);

    return 0;
}