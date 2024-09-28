#include <stdio.h>
#include <conio.h>

int main()
{
  int ascii;
  printf("\nEnter the ASCII value: ");
  scanf("%d", &ascii);

  printf("\nCharacter value of %d is: %c\n", ascii, ascii);
  return 0;
}