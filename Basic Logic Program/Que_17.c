//17. Calculate person’s insurance premium based on salary 

#include <stdio.h>

int main() {
    float salary, premium;

    // Input salary
    printf("Enter your salary: ");
    scanf("%f", &salary);

    // Check if salary is valid
    if (salary < 0) {
        printf("Invalid salary. Please enter a positive value.\n");
    }

    // Determine insurance premium based on salary
    if (salary < 50000) {
        premium = 0.05 * salary; // 5% of salary for premium
    } else if (salary >= 50000 && salary < 100000) {
        premium = 0.07 * salary; // 7% of salary for premium
    } else {
        premium = 0.1 * salary; // 10% of salary for premium
    }

    // Display insurance premium
    printf("Your insurance premium is: %.2f\n", premium);

}

