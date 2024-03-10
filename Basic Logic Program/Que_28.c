//28. Convert years into days and months  

#include <stdio.h>

int main() {
    int years, totalDays, months, remainingDays;

    // Input number of years
    printf("Enter number of years: ");
    scanf("%d", &years);

    // Calculate total number of days
    totalDays = years * 365;

    // Calculate number of months and remaining days
    months = totalDays / 30;  // Approximate 30 days per month
    remainingDays = totalDays % 30;

    // Display the result
    printf("%d years is approximately %d months and %d days.\n", years, months, remainingDays);

}

