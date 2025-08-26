// WAP to accept input in dollar and convert into INR

#include <stdio.h>
int main()
{
    float dollarCurrency, inrCurrency;
    // input
    printf("Enter amount in USD: ");
    scanf("%f", &dollarCurrency);

    // formula
    inrCurrency = dollarCurrency * 86.72;

    // output
    printf("USD = %f\nINR = %f", dollarCurrency, inrCurrency);

    return 0;
}
