#include <stdio.h>

int main()
{
    int num[3], temp[3], rev[3], rem, i=0;
    printf("\n");
    while(i<3)
    {
        printf("Enter num[%d]: ",i+1);
        scanf("%d",&num[i]);

        temp[i] = num[i];
        rev[i] = 0;
        i++;
    }

    i=0;
    while(i<3)
    {
        while(temp[i]>0)
        {
            rem = temp[i]%10;
            rev[i] = (rev[i]*10)+rem;
            temp[i] /= 10;
        }
        i++;
    }

    for(i=0; i<3; i++)
    {
        if(rev[i]==num[i])
          printf("\n%d is palindrome.",num[i]);
        
        else
          printf("\n%d is not palindrome.",num[i]);
    }
    return 0;
}