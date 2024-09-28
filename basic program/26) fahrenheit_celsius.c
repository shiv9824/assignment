#include<stdio.h>
#include<conio.h>

int main()
{
    int fahreanheit, celsius;

    printf("Enter the value od Fahrenheit: ");
    scanf("%d",&fahreanheit);

    celsius = (fahreanheit-32)*(5/9);
    printf("\nFahrenheit: %dF",fahreanheit);
    printf("\nCelsius: %dC",celsius);

    return 0;
}