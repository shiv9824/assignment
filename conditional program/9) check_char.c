#include <stdio.h>

int main()
{
    char ch;
    printf("\nEnter the Character: ");
    scanf("%c",&ch);

    if(ch>=65 && ch<=90)
      printf("\n%c is Uppercase letter.",ch);

    else if(ch>=97 && ch<=122)
      printf("\n%c is Lowercase letter.",ch);

    else if(ch>=48 && ch<=57)
      printf("\n%c is a Digit.",ch);

    else
      printf("\n%c is a Special Character.",ch);
      
    return 0;
}