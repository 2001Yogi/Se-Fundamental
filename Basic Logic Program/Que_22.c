//22. Calculate compound interest (Compound Interest formula: 
//a. Formula to calculate compound interest annually is given by:  
//Amount= P(1 + R/100)t 
//b. Compound Interest = Amount – P 

#include <stdio.h>

int main() {
    float principal, rate, time, amount, compoundInterest;

    // Input principal amount
    printf("Enter the principal amount: ");
    scanf("%f", &principal);

    // Input annual interest rate
    printf("Enter the annual interest rate (in percentage): ");
    scanf("%f", &rate);

    // Input time in years
    printf("Enter the time (in years): ");
    scanf("%f", &time);

    // Calculate amount
    amount = principal * (1 + rate / 100 * time);

    // Calculate compound interest
    compoundInterest = amount - principal;

    // Display compound interest
    printf("Compound Interest: %.2f\n", compoundInterest);

}

