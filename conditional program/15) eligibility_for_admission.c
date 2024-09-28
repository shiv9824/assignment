#include <stdio.h>

int main()
{
    float maths, phy, chem, tot_math_phy, total;

    printf("Enter the marks of Maths: ");
    scanf("%f", &maths);
    printf("Enter the marks of Physics: ");
    scanf("%f", &phy);
    printf("Enter the marks of Chemistry: ");
    scanf("%f", &chem);

    tot_math_phy = maths + phy;
    total = maths + phy + chem;

    printf("\nTotal of Maths & Physics: %f", tot_math_phy);
    printf("\nTotal of Maths, Physics & Chemistry: %f", total);

    if (maths >= 65 && phy >= 55 && chem >= 50)
    {
        if (tot_math_phy >= 140 || total >= 190)
            printf("\n\n**Candidate is eligible**");

        else
            printf("\n\n**Candidate is not eligible**");
    }
    else
        printf("\n\n**Candidate is not eligible**");

    return 0;
}