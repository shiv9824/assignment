#include <stdio.h>

void checkPali(int);

int main()
{
    int num[5], i;

    printf("\nEnter 5 Numbers...\n");
    for (i = 0; i < 5; i++)
    {
        printf("Num[%d]: ", i + 1);
        scanf("%d", &num[i]);
    }

    for (i = 0; i < 5; i++)
    {
        printf("\n\nNumber[%d]",i+1);
        printf("\n_____________________\n");
        checkPali(num[i]);
    }
    return 0;
}

void checkPali(int n)
{
    int temp = n, rem, rev = 0;

    while (temp > 0)
    {
        rem = temp % 10;
        rev = (rev * 10) + rem;
        temp /= 10;
    }

    printf("Original no.: %d", n);
    printf("\nReversed no.: %d", rev);

    if (rev == n)
        printf("\n%d is a Palindrome number.", n);

    else
        printf("\n%d is not a Palindrome number.", n);
}