// 3. Accept two numbers from user and an operator (+, -, *, /, %) based on that perform the desired operations.
#include <stdio.h>

int performOperation(int no1, int no2, int choice);

void main() {
    int no1, no2, choice, result;

    printf("Enter no.1: ");
    scanf("%d", &no1);

    printf("Enter no2: ");
    scanf("%d", &no2);

    printf("1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Modulus\nEnter your choice: ");
    scanf("%d", &choice);

    result = performOperation(no1, no2, choice);

    if (choice >= 1 && choice <= 5) {
        printf("Result: %d\n", result);
    } else {
        printf("Invalid choice!\n");
    }
}

int performOperation(int no1, int no2, int choice) {
    int result;

    if (choice == 1) {
        result = no1 + no2;
    } else if (choice == 2) {
        result = no1 - no2;
    } else if (choice == 3) {
        result = no1 * no2;
    } else if (choice == 4) {
        if (no2 != 0) {
            result = no1 / no2;
        } else {
            printf("Division by zero is not allowed!\n");
            result = 0; // Return 0 in case of division by zero
        }
    } else if (choice == 5) {
        if (no2 != 0) {
            result = no1 % no2;
        } else {
            printf("Modulus by zero is not allowed!\n");
            result = 0; // Return 0 in case of modulus by zero
        }
    } else {
        result = 0; // Default value for invalid choice
    }

    return result;
}
