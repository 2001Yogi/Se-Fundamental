//27. Convert days into months

#include <stdio.h>

int main() {
    int days;
    float months;

    // Input number of days
    printf("Enter number of days: ");
    scanf("%d", &days);

    // Convert days to months
    months = (float)days / 30;

    // Display the result
    printf("%d days is approximately %.2f months.\n", days, months);

}

