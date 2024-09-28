#include <stdio.h>
#include <conio.h>

int main()
{
  char ascii;
  printf("\nEnter a Character: ");
  scanf("%c", &ascii);

  printf("\nASCII value of %c is: %d\n", ascii, ascii);
  return 0;
}