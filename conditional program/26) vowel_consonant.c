#include <stdio.h>

int main()
{
    char ch;
    printf("\nEnter a Character: ");
    scanf("%c", &ch);

    switch (ch)
    {
    case 'A':
        printf("\n%c is a Vowel", ch);
        break;
    case 'a':
        printf("\n%c is a Vowel", ch);
        break;
    case 'E':
        printf("\n%c is a Vowel", ch);
        break;
    case 'e':
        printf("\n%c is a Vowel", ch);
        break;
    case 'I':
        printf("\n%c is a Vowel", ch);
        break;
    case 'i':
        printf("\n%c is a Vowel", ch);
        break;
    case 'O':
        printf("\n%c is a Vowel", ch);
        break;
    case 'o':
        printf("\n%c is a Vowel", ch);
        break;
    case 'U':
        printf("\n%c is a Vowel", ch);
        break;
    case 'u':
        printf("\n%c is a Vowel", ch);
        break;

    default:
        printf("\n%c is a Consonant", ch);
        break;
    }
}