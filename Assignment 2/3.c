// 3. Accept two numbers from user and an operator (+, -, *, /, %) based on that perform the desired operations.
#include <stdio.h>

int performOperation(); // Function declaration

int main() {
    int result = performOperation(); // Call the function and get the result
    printf("Result: %d\n", result); // Print the result
    return 0;
}

int performOperation() { // Function definition
    int no1, no2, choice, result = 0;
    printf("Enter no.1: ");
    scanf("%d", &no1);
    printf("Enter no.2: ");
    scanf("%d", &no2);

    printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Modulus\nEnter your choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        result = no1 + no2;
    } 
    else if (choice == 2) {
        result = no1 - no2;
    } 
    else if (choice == 3) {
        result = no1 * no2;
    } 
    else if (choice == 4) {
        if (no2 != 0) {
            result = no1 / no2;
        } else {
            printf("Error: Division by zero!\n");
        }
    } 
    else if (choice == 5) {
        if (no2 != 0) {
            result = no1 % no2;
        } else {
            printf("Error: Division by zero!\n");
        }
    } 
    else {
        printf("Enter a valid choice!\n");
    }

    return result;
}