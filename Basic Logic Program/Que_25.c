//25. Accept 5 expense from user and find average of expense 

#include <stdio.h>

int main() {
    float expenses[5];
    float totalExpense = 0;
    float averageExpense;
    int i;

    // Input expenses
    printf("Enter 5 expenses:\n");
    for (i = 0; i < 5; i++) {
        printf("Expense %d: ", i + 1);
        scanf("%f", &expenses[i]);

        totalExpense += expenses[i];
    }

    // Calculate average expense
    averageExpense = totalExpense / 5;

    // Display total and average expense
    printf("\nTotal expense: %.2f\n", totalExpense);
    printf("Average expense: %.2f\n", averageExpense);

}

